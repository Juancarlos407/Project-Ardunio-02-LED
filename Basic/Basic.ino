int LED = 5;  
int Boton = 9;  
int estado = 0; 
int salida = 0;
int estadoAnterior = 0;
void setup() 
{
  Serial.begin(9600);
    pinMode(LED, OUTPUT);
  pinMode(Boton, INPUT);
}

void loop()
 {

estado = digitalRead(Boton);
Serial.println(estado);

if((estado == HIGH) && (estadoAnterior == LOW))
{
  salida = 1 - salida;
  delay(30);
}
estadoAnterior = estado;

if(salida == 1) {
digitalWrite(LED,HIGH);       
}
else {
  digitalWrite(LED,LOW);}
}



  

