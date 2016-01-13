String inputString = "";         // a string to hold incoming data
boolean receivedMessage = false;  // whether the string is complete

void setup() {  
  Serial.begin(9600);
}


void loop() {
  if (receivedMessage) {
    Serial.println("Message received");        
    inputString = "";
    receivedMessage = false;
  }   
}

void serialEvent() {
  Serial.println("serialEvent);    
  inputString = Serial.readStringUntil('\n');  
  receivedMessage = true;
}

