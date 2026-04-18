int  replayin=3;
int  relayin=6;
void setup() {
pinMode ( replayin,OUTPUT); // put your setup code here, to run once:
pinMode ( relayin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(replayin,HIGH);
   digitalWrite(relayin,HIGH);
  
  delay(1000);
   digitalWrite(replayin,LOW);
     digitalWrite(relayin,LOW);
   delay(1000);
}
