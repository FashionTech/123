
//Pin onde se conectam os LEDs
int pinLed1 = 10;
int pinLed2 = 3;
int pinLed3 = 9;

//Pin analógico de entrada para o LDR
int pinLDR = 4;

//Variável onde se armazena o valor do LDR
int valorLDR = 0;

void setup()
{
  //Configuramos como saídas os pins onde se conectam os LEDs
  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);
  pinMode(pinLed3, OUTPUT);
  //Configuramos a porta serial
  Serial.begin(9600);
}

void loop()
{
  //Apagar os LEDs sempre que o ciclo inicia
  digitalWrite(pinLed1, LOW);
  digitalWrite(pinLed2, LOW);
  digitalWrite(pinLed3, LOW);

  valorLDR= analogRead(pinLDR);

  Serial.println(valorLDR);

  //Acender os LEDs desejados
  if(valoLDR > 256 && valorLDR < 512)
 {
    digitalWrite(pinLed2, HIGH);
       digitalWrite(pinLed1, LOW);
           digitalWrite(pinLed3, LOW);
 }
 if(valorLDR > 512 && valorLDR < 768)
 {
      digitalWrite(pinLed2, HIGH);
         digitalWrite(pinLed1, LOW);
           digitalWrite(pinLed3, LOW);
 }
 if(valorLDR > 768)
 {
      digitalWrite(pinLed3, HIGH);
         digitalWrite(pinLed1, LOW);
           digitalWrite(pinLed2, LOW);
 }

  //Aguardar alguns milisegundos antes de atualizar
  delay(200);
 
}
