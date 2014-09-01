#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int columnCount = 16;
const int rowCount = 2;
int displayFlash = 300;
int count = 0;

void setup() {
  lcd.begin(columnCount, rowCount);
}

void loop() {
  randomSeed(millis());
  for (int s = 0; s < rowCount; s++) {
    for (int i = 0; i < columnCount; i++) {
      int randNumber = random(12000, 12500);
      lcd.setCursor(i,s);
      lcd.print((char)randNumber);
    }
  }
  
  delay(displayFlash);
  lcd.clear();
 
  count++;
}
