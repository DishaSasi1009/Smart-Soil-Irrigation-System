int RelayPin = 13;  
int sensorPin = 0;  
int val;            

void setup() {
  pinMode(RelayPin, OUTPUT);   
  pinMode(sensorPin, INPUT); 
}

void loop() {
  val = digitalRead(sensorPin);   

 
  if (val == LOW) {
    digitalWrite(RelayPin, LOW);  
  } else {
    digitalWrite(RelayPin, HIGH); 
  }

  delay(1000);   
}
