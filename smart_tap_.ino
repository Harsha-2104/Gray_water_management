
const int trigpin = 5;
const int echopin = 4;
const int irpin = 3;
const int relaypin = 8;

void setup() {
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  pinMode(irpin, INPUT);
  pinMode(relaypin, OUTPUT);

  Serial.begin(9600);
}
void loop() {
  digitalWrite(trigpin, LOW);
  
  digitalWrite(trigpin, HIGH);
  
  digitalWrite(trigpin, LOW);
  long time = pulseIn(echopin, HIGH);
  long distance = (time * 0.0343) / 2;
  Serial.println("distance= ");
  Serial.println(distance);
  
  int sensor = 0;
  sensor = digitalRead(irpin);
  Serial.println("sensor= ");
  Serial.println(sensor);
  
  if (distance < 70 && sensor == 0) {
    digitalWrite(relaypin, LOW);


  } else {
    digitalWrite(relaypin, HIGH);
  }
  delay(200);
}
