#include <LiquidCrystal.h>
LiquidCrystal lcd(5,4,3,2,6,7);
void setup() {
  lcd.begin(16,2);
  lcd.print("UROOJ");

}

void loop() {
  lcd.setCursor(0,1);

  lcd.print(millis()/1000);

}
