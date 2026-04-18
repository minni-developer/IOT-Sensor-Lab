int ledPin=5;
int ldrPin=A0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledPin,OUTPUT);
pinMode(ldrPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int ldrStatus=analogRead(ldrPin);
if(ldrStatus<=1)
{
digitalWrite (ledPin,HIGH);
Serial.println("darkness over here, turn on LED");  
Serial.println(ldrStatus);
}
else 
{
  digitalWrite(ledPin,LOW);
  Serial.println("there is sufficiant light, turn off the LED");
   Serial.print(ldrStatus);
}
}
