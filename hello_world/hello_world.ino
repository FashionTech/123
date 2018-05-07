void setup() {
  // initialize digital pin 13 as an output
  pinMode(13, OUTPUT);

}

// put your main code here, to run repeatedly:
void loop() {
  digitalWrite(13, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(1000); // wait for a second
  digitalWrite(13, LOW); // turn the LED off
  delay(1000); // wait for a second
}
