int Wval = 0;  // Water level sensor value pre-defined
int Wpin = A0;  // Water level sensor pin 
int Rpin_fl = 10; // Relay pin for soloniod valve connected to the flush tank
int Rpin_rp = 9;  // Relay pin for soloniod valve connected to the Recharge pit

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
