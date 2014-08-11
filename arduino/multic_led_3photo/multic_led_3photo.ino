const int redLEDPin = 11;
const int blueLEDPin = 10;
const int greenLEDPin = 9;

const int redSensorPin = A2;
const int blueSensorPin = A1;
const int greenSensorPin = A0;

int redValue = 0;
int blueValue = 0;
int greenValue = 0;

int redSensorValue = 0;
int blueSensorValue = 0;
int greenSensorValue = 0;

void setup() {
  Serial.begin(9600);
  
  pinMode(redLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);
  pinMode(greenLEDPin, OUTPUT);
}

void loop() {
  
  redSensorValue = analogRead(redSensorPin);
  delay(5);
  blueSensorValue = analogRead(blueSensorPin);
  delay(5);
  greenSensorValue = analogRead(greenSensorPin);
  
  Serial.print("Red: ");
  Serial.print(redSensorValue);
  Serial.print("Blue: ");
  Serial.print(blueSensorValue);
  Serial.print("Green: ");
  Serial.print(greenSensorValue);
  Serial.println(" ");
  
  redValue = redSensorValue/4;
  blueValue = blueSensorValue/4;
  greenValue = greenSensorValue/4;
  
  int r = random(0, 30);
  
  analogWrite(redLEDPin, redValue);
  analogWrite(blueLEDPin, blueValue);
  analogWrite(greenLEDPin, greenValue);
  delay(500);
}

