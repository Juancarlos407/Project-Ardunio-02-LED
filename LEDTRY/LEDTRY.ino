int LED1 = 5;  
int LED2 = 6; 
int LED3 = 7; 
int LED4 = 8; 
 
  
void setup() 
{
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
    pinMode(LED4, OUTPUT);

}

void loop() {
analogWrite(LED4, 0);
analogWrite(LED1, 255);
delay(1500);
analogWrite(LED1, 0);
analogWrite(LED2, 255);
delay(250);
analogWrite(LED2, 0);
analogWrite(LED3, 255);
delay(125);
analogWrite(LED3, 0);
analogWrite(LED4, 255);
delay(62);


  
}
