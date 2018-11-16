 float temp;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
temp=analogRead(A1);
temp=temp*0.48828125;
Serial.print("TEMPRATURE:");
Serial.print(temp);
Serial.print("*C");
Serial.println();
delay(1000);




if (temp>=25)
  {
    Serial.print("HIGH TEMPRATURE");
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(2,LOW);
  }
  else if (temp>=23&&temp<25){
    
    Serial.print("NORMAL TEMPRATURE");
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(2,HIGH);
  }
  else{
    
    Serial.print("LOW TEMPRATURE");
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(2,HIGH);
  }
  delay(1000);

}
