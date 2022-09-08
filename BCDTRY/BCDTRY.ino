int LED1 = 2;  
int LED2 = 3; 
int LED3 = 4; 
int LED4 = 7; 
 
  
void setup() 
{
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
    pinMode(LED4, OUTPUT);

}
void loop() {
analogWrite(LED4, HIGH);


}
