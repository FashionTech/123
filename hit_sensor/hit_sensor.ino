const int pinLed   =   9;
const int pinPress =  A0;
const int limit    = 100;
int hitSensor      =   0;


void setup() {
  pinMode(pinLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite (pinLed, LOW);

  hitSensor = analogRead(pinPress);
  Serial.println(hitSensor);
  //se o valor de pressão no sensor é maior que o limite
  if (hitSensor >= limit) {
    digitalWrite (pinLed, HIGH);
  }
  delay(100); //inserimos um delay para saturar o buffer de comunicação
}

