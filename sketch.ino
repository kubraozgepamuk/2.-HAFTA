int led1=2;
int led2=3;
int led3=4;
int led4=5;
int led5=6;
int led6=7;
int led7=8;
int led8=9;
int pot=A1;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int led;
  int potime=map(analogRead(pot),0,250,0,1023);

  for(led=2; led<10; led++) {
  analogWrite(led, HIGH);
  delay (potime);
  analogWrite(led, LOW);
  delay(potime);
  }
  Serial.println(potime);
}
