int whiteLedPin = 12;
int redLedPin = 11;

int whiteLedTimeOn = 200;
int whiteLedTimeOff = 100;
int redLedTimeOn = 400;
int redLedTimeOff = 200;

void setup() {
  pinMode(whiteLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
}

void loop() {
  // turn on or turn off white led
  if(millis() % (whiteLedTimeOn + whiteLedTimeOff) < whiteLedTimeOn){
    digitalWrite(whiteLedPin, HIGH);
  }else{
    digitalWrite(whiteLedPin, LOW);
  }
  
  // turn on or turn off red led
  if(millis() % (redLedTimeOn + redLedTimeOff) < redLedTimeOn){
    digitalWrite(redLedPin, HIGH);
  }else{
    digitalWrite(redLedPin, LOW);
  }
}
