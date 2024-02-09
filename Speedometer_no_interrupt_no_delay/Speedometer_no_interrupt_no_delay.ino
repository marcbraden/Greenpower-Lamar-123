int timeInterval=0;
int oldTime=0;
bool detection=0;  //A variable to "remember" if the magnet has been detected already

void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);  //The circuitry makes it so that the pin will read HIGH (a high voltage) if the magnet is NOT present, and LOW (near ground) when the magnet IS present.
  Serial.begin(9600);
  
}

void loop() {
  if (detection==1 && digitalRead(2)==HIGH){  //if the magnet was detected (detection was set to 1 previously), but the sensor does NOT currently detect the magnet
    detection=0;    //This will allow a future detection to occur.  
  }
  if (digitalRead(2)==LOW && detection==0){   //The magnet is detected, but it wasn't recently
    timeInterval=millis()-oldTime;
    oldTime=millis();
    Serial.println(timeInterval);
    detection=1;
    
  }
  // put your main code here, to run repeatedly:

}
