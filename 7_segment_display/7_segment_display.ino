void setup()
{
  // define pin modes
  
 pinMode(2,OUTPUT);
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT);
 
}

void loop() 
{
  // loop to turn leds od seven seg ON

 digitalWrite(4,HIGH);
 digitalWrite(3,HIGH); 
    delay(1000);

 digitalWrite(4,LOW);
 digitalWrite(3,LOW); 
    delay(1000);
    //digit 1
    
 digitalWrite(2,HIGH);
 digitalWrite(3,HIGH); 
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(8,HIGH);
    delay(1000);

 digitalWrite(2,LOW);
 digitalWrite(3,LOW); 
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 digitalWrite(8,LOW);
    delay(1000);
    // digit 2

 digitalWrite(2,HIGH);
 digitalWrite(3,HIGH); 
 digitalWrite(5,HIGH);
 digitalWrite(4,HIGH);
 digitalWrite(8,HIGH);
    delay(1000);

 digitalWrite(2,LOW);
 digitalWrite(3,LOW); 
 digitalWrite(5,LOW);
 digitalWrite(4,LOW);
 digitalWrite(8,LOW);
    delay(1000);
    //digit 3

 digitalWrite(7,HIGH);
 digitalWrite(3,HIGH); 
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(8,HIGH);
    delay(1000);

 digitalWrite(2,LOW);
 digitalWrite(3,LOW); 
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 digitalWrite(8,LOW);
    delay(1000);
    //digit 4

    
    
 /* for(int i=2;i<=8;i++)
  {
    digitalWrite(i,HIGH);
    delay(500);
  }
  
  // loop to turn leds od seven seg OFF
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,LOW);
    delay(500);   
  } */
  
  
  delay(1000);

}
