int st1 = 3;
int st2 = 5;
int dr1 = 6;
int dr2 = 9;
int sensorStangaPin = A2;
int sensorMijlocPin = A1;
int sensorDreaptaPin = A0;
int sensorStanga;
int sensorMijloc;
int sensorDreapta;
int viteza_croaziera = 130;
int viteza_rotire = 120;

void setup() {
  pinMode(sensorStangaPin, INPUT);
  pinMode(sensorMijlocPin, INPUT);
  pinMode(sensorDreaptaPin, INPUT);
 
  pinMode(st1, OUTPUT);
  pinMode(st2, OUTPUT);
  pinMode(dr1, OUTPUT);
  pinMode(dr2, OUTPUT);
 
  digitalWrite(st1, LOW);
  digitalWrite(st2, LOW);
  digitalWrite(dr1, LOW);
  digitalWrite(dr2, LOW);
  Serial.begin(9600);
}

void loop() {
  sensorStanga = digitalRead(sensorStangaPin);
  sensorMijloc = digitalRead(sensorMijlocPin);
  sensorDreapta = digitalRead(sensorDreaptaPin);
  if(sensorDreapta == LOW){
    //oprim mootrul drept
    analogWrite(st1, viteza_rotire);
    analogWrite(st2, LOW);
    analogWrite(dr1, viteza_rotire);
    analogWrite(dr2, LOW);
    delay(15);
  }else if(sensorStanga == LOW){
    //oprim mootrul stang
    analogWrite(st1, LOW);
    analogWrite(st2, viteza_rotire);
    analogWrite(dr1, LOW);
    analogWrite(dr2, viteza_rotire);
    delay(15);
  }else{
    //mergem in fata
    analogWrite(st1, viteza_croaziera);
    analogWrite(st2, LOW);
    analogWrite(dr1, LOW);
    analogWrite(dr2, viteza_croaziera);
    delay(15);
  }
 
  Serial.print(sensorStanga);
  Serial.print(" ");
  Serial.print(sensorMijloc);
  Serial.print(" ");
  Serial.print(sensorDreapta);
  Serial.print(" ");
  Serial.println();
  delay(100);
}
