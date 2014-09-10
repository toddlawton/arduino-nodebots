const int buttonPin = 4;

void setup() {
  // make the pushButton pin an input:
  pinMode(buttonPin, INPUT);
  // initialize control over the keyboard:
  Keyboard.begin();
}

void loop() {
  if (digitalRead(buttonPin) == HIGH) {
    Keyboard.press(32);
    delay(500);
  }
  Keyboard.releaseAll();
}
