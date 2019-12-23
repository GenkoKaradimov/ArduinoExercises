int ledTimeOn = 500;
int ledTimeOff = 200;
int ledPin = 12;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(ledTimeOn);
  
  digitalWrite(ledPin, LOW);
  delay(ledTimeOff);
}
