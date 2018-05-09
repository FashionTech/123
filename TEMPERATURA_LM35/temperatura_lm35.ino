float temperatura;
 int pinentrada = 2;

void setup() 
{
pinMode (10,OUTPUT);
 Serial.begin(9600);

}

void loop() {
 temperatura = analogRead(pinentrada);
 temperatura = (temperatura / 1023 * 3.3 / 0.01);
 Serial.println(temperatura);
 Serial.println("graus centigrados");
 delay(1000);

 if (temperatura>30)
 {digitalWrite (10, HIGH);}

 else
 {digitalWrite (10, LOW);}

}
