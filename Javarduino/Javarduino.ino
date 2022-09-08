

int input;

void setup() {
  pinMode(9, OUTPUT); // Declaramos que utilizaremos el pin 13 como salida
  Serial.begin(9600); //Se inicia la comunicación serie
}

void loop() {
  if (Serial.available() > 0) {

    input = Serial.read();

    if (input == '1'){
      digitalWrite(9, HIGH); //Si el valor de input es 1, se enciende el LED
    }
    else
    {
      digitalWrite(9, LOW); //Si el valor de input es diferente de 1, se apaga el LED
    }

  }
}
