int valor = 0;
int pot= 3;

void setup() {
  pinMode (2,OUTPUT);
  Serial.begin (9600);
}

void loop(){
  valor = analogRead (pot);
  Serial.println (valor);

  if (valor < 340)
  {digitalWrite (2,HIGH);
  }
}

