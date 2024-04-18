int st1 = 3;
int st2 = 5;
int dr1 = 6;
int dr2 = 9;
int viteza_croaziera = 100;

void setup() {
  pinMode(st1, OUTPUT);
  pinMode(st2, OUTPUT);
  pinMode(dr1, OUTPUT);
  pinMode(dr2, OUTPUT);
 
  digitalWrite(st1, LOW);
  digitalWrite(st2, LOW);
  digitalWrite(dr1, LOW);
  digitalWrite(dr2, LOW);
}

void loop() {
  analogWrite(st1, viteza_croaziera);
  analogWrite(st2, viteza_croaziera);
  analogWrite(dr1, viteza_croaziera);
  analogWrite(dr2, viteza_croaziera);
  //analogWrite suporta valori pe pana la 255
}
