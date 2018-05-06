
int valor = 0;
int pot= 3;

void setup() {
  pinMode (2,OUTPUT);
  Serial.begin (9600);

}

void loop() {
  valor = analogRead (pot)/4;
  Serial.println (valor);
  analogWrite (2, valor);

}
