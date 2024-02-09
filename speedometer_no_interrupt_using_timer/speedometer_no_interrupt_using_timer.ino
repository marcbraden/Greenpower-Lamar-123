int timeInterval=0;
int oldTime=0;
int timer=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  Serial.begin(9600);
  
}

void loop() {
  if (timer>0){   //If a detection has occured and the timer has been set to a non-zero value, it will count down by one.
    timer=timer-1;
  }
  if (digitalRead(2)==LOW && timer==0){   //If the voltage drops below a certain value (that's how the magnetic sensor is usually set up), AND the timer has run out from a previous detection, do this stuff.
    timeInterval=millis()-oldTime;
    oldTime=millis();
    Serial.println(timeInterval);
    timer=50;  //What's the best value?  This starts the countdown until another detection is allowed to occur.
    
  }
  delay(1);  //for stability - it works better!


}
