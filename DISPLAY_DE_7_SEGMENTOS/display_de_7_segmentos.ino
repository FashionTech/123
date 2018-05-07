int Bot=10;
int Value=0;

void setup() {
 pinMode(3, OUTPUT);
 pinMode(10, INPUT);
 Serial.begin(9600);
}

void loop() {
  Value = digitalRead (Bot);
  Serial.println(Value);

if (Value==HIGH)
{digitalWrite(3, HIGH);}

if (Value==LOW)

{digitalWrite (3,LOW);}
  
}
  
  
 

  

