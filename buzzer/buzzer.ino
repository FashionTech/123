voida setup(){
  pinMode(10,OUTPUT); //define o pin 13 do Arduino como saída digital
}
void loop(){
  //play tone
  tone(10,1760,1000);
  delay(1000);
  tone(10,1975,1000);
  delay(1000);
  tone(10,1175,1000);
  delay(1000);
  tone(10,1315,1000);
  delay(1000);
  tone(10,2795,1000);
  delay(1000);
  tone(10,1175,1000);
  delay(1000);
}

