int led=5;
int pot=A1;


void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  int potdeger=map(analogRead(pot),0,1023,0,255);
  analogWrite(led, potdeger);

}
