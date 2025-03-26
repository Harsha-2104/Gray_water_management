

int Wval = 0;
int Wpin = A0;
int Rpin_fl = 10;
int Rpin_rp = 9;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Rpin_fl,OUTPUT);
pinMode(Rpin_rp,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Wval = analogRead(Wpin);
  if(Wval>300){
    Serial.println("Detected");
                                                                                             
    digitalWrite(Rpin_fl,HIGH);
    digitalWrite(Rpin_rp,LOW);

    
  }
  else{
    Serial.println("Not detected");
     digitalWrite(Rpin_fl,LOW);
    digitalWrite(Rpin_rp,HIGH);
   

  }
 delay(1000);
  

}
