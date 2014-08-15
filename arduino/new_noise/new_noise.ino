int sensorValue;
int sensorLow = 1023;
int sensorHigh = 0;
int tempo = 135;

const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);
  
  while (millis() < 5000) {
    sensorValue = analogRead(A0);
    if (sensorValue > sensorHigh) {
      sensorHigh = sensorValue;
    }
    if (sensorValue < sensorLow) {
      sensorLow = sensorValue;
    }
  }
  
  digitalWrite(ledPin, LOW);
}

void loop() {
  sensorValue = analogRead(A0);
  
  // REP 1
  
  // D
  tone(8, 1175, 20);
  delay(tempo);
  
    // E
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
  // D
  tone(8, 1175, 20);
  delay(tempo);
  
    // E
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
   // D
  tone(8, 1175, 20);
  delay(tempo);
  
    // E
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1397, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
    
    
    // REP 2
  
  // D
  tone(8, 1175, 20);
  delay(tempo);
  
    // E
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
  // D
  tone(8, 1175, 20);
  delay(tempo);
  
    // E
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
   // D
  tone(8, 1175, 20);
  delay(tempo);
  
    // E
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1397, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
    
    // REP 3
  
  // D
  tone(8, 1175, 20);
  delay(tempo);
  
    // E
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
  // D
  tone(8, 1175, 20);
  delay(tempo);
  
    // E
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
   // D
  tone(8, 1175, 20);
  delay(tempo);
  
    // E
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1397, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
       
       
    // REP 4
  
  // D
  tone(8, 1175, 20);
  delay(tempo);
  
    // E
    tone(8, 1319, 20);
    delay(tempo);   

  // E
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);
    
    tone(8, 1319, 20);
    delay(tempo);   

    tone(8, 1319, 20);
      delay(tempo);       
      
      
     // E
    tone(8, 1339, 20);
    delay(tempo);
    
    tone(8, 1339, 20);
    delay(tempo);
    
    tone(8, 1339, 20);
    delay(tempo);   

  // E
    tone(8, 1339, 20);
    delay(tempo);
    
    tone(8, 1339, 20);
    delay(tempo);
    
    tone(8, 1339, 20);
    delay(tempo);   

    tone(8, 1339, 20);
      delay(tempo);       
    
      tone(8, 1339, 20);
    delay(tempo);
    
    tone(8, 1339, 20);
    delay(tempo);
    
    tone(8, 1339, 20);
    delay(tempo);   

    tone(8, 1339, 20);
      delay(tempo);  
      
        tone(8, 1339, 20);
      delay(tempo);    
  
  
  delay(10);
}
