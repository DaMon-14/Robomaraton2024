int sensorStangaPin = A2;
int sensorMijlocPin = A1;
int sensorDreaptaPin = A0;
int sensorStanga;
int sensorMijloc;
int sensorDreapta;


void setup() {
  pinMode(sensorStangaPin, INPUT);
  pinMode(sensorMijlocPin, INPUT);
  pinMode(sensorDreaptaPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  sensorStanga = digitalRead(sensorStangaPin);
  sensorMijloc = digitalRead(sensorMijlocPin);
  sensorDreapta = digitalRead(sensorDreaptaPin);
  Serial.print(sensorStanga);
  Serial.print(" ");
  Serial.print(sensorMijloc);
  Serial.print(" ");
  Serial.print(sensorDreapta);
  Serial.print(" ");
  Serial.println();
  delay(250);
}
