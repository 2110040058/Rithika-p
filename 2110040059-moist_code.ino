
int SensorPin = A5;
int motor = 8 ;
void setup() {
  pinMode(SensorPin,INPUT);
  pinMode(motor,OUTPUT);
}

void loop() {

  int SensorValue = analogRead(SensorPin);
  
  if(SensorValue<300){
    digitalWrite(motor,HIGH);
    delay(1000);
  }
  else{
    digitalWrite(motor,LOW);
    delay(1000);
  }

//  sensorValue = analogRead(sensorPin);
//  lcd.setCursor(4,2);
//  lcd.print(sensorValue);
//  delay(1000);
  
}
