int timeInterval=0;
int oldTime=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(2),getTimeInterval,FALLING);  //interrupts the code based on input from a pin, immediately executing a function
  //In this case, everything gets interrupted if the voltage on pin 2 falls from HIGH to LOW, at which point the function getTimeInterval will be executed.
  //The main loop resumes as soon as getTimeInterval is done.
}

void loop(){
  delay(10); 
}

void getTimeInterval(){
  timeInterval=millis()-oldTime;
  oldTime=millis();
  Serial.println(timeInterval);
}
