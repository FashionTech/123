int Red= 3;
int Blue= 9;
int Green= 10;

void Color (int R, int G, int B)
{ analogWrite (Red, R);
analogWrite (Blue, B);
analogWrite (Green, G);}



void setup() {
 pinMode (Red, OUTPUT); 
pinMode (Blue, OUTPUT);
pinMode (Green, OUTPUT);
}

void loop() {
  Color (255, 0, 0);
  delay (1000);
  Color (0,0,255);
  
}
