int switchState = 0;

void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  switchState = digitalRead(2);
  if (switchState == LOW) {
    digitalWrite(3, HIGH); //Green
    digitalWrite(4, LOW); //Red
    digitalWrite(5, LOW); //Red
    delay(250);
    digitalWrite(3, LOW);
    delay(250);
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    
    delay(250);
    
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    
    delay(250);  
    
  }
}
