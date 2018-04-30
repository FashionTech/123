int Pot= 3;
int Value=0;

void setup() {
  pinMode (9, OUTPUT);
  Serial.begin (9600);
}

    void loop() {
  Value= analogRead (Pot);
  Serial.println (Value);

  analogWrite (9, Value);

   
}
