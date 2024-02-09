int timeInterval=0;
int oldTime=0;
bool detection=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  Serial.begin(9600);
  
}

void loop() {
  if (detection==1 && digitalRead(2)==HIGH){
    detection=0;
  }
  if (digitalRead(2)==LOW && detection==0){
    timeInterval=millis()-oldTime;
    oldTime=millis();
    Serial.println(timeInterval);
    detection=1;
    
  }
  // put your main code here, to run repeatedly:

}
