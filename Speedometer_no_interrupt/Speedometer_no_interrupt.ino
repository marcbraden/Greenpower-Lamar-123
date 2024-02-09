int timeInterval=0;
int oldTime=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  Serial.begin(9600);
  
}

void loop() {
  if (digitalRead(2)==LOW){
    timeInterval=millis()-oldTime;
    oldTime=millis();
    Serial.println(timeInterval);
    delay(50);  //Delay so that another event isn't triggered until the magnet has passed.
    
  }

  // put your main code here, to run repeatedly:

}
