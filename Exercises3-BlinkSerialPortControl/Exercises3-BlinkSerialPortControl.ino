// Leds controlled by serial port
// List of commands:
// n200 - set working time to 200ms
// f100 - set not working time to 100ms
// p12 - set led pin to 12


int ledTimeOn = 500;
int ledTimeOff = 200;
int ledPin = 12;

void setup() {
  Serial.begin(9600); 
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if(Serial.available() != 0){
    readCommand(Serial.readString());
  }
  
  digitalWrite(ledPin, HIGH);
  delay(ledTimeOn);
  
  digitalWrite(ledPin, LOW);
  delay(ledTimeOff);
}

void readCommand(String command){  
  int time = 0;

  for(int i = 1; i < command.length() - 1; i++){
    time = time * 10;
    time = time + (int)command[i] - 48;
  }
  
  if(command[0] == 'n'){
    ledTimeOn = time;
    Serial.print("Led time on set to: ");
    Serial.print(time);
    Serial.println(" ms.");
  }

  if(command[0] == 'f'){
    ledTimeOff = time;
    Serial.print("Led time off set to: ");
    Serial.print(time);
    Serial.println(" ms.");    
  }

  if(command[0] == 'p'){
    ledPin = time;
    Serial.print("Led pin set to: ");
    Serial.println(time);    
  }
}
