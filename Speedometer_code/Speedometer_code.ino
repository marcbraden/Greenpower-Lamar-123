int timeInterval=0;
int oldTime=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(2),getTimeInterval,FALLING);
}

void loop(){
  delay(10); 
}

void getTimeInterval(){
  timeInterval=millis()-oldTime;
  oldTime=millis();
  Serial.println(timeInterval);
}
