
#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() 
{
  lcd.begin(16, 2);
  lcd.print("Hello, Word!");
}

void loop() 
{
  delay(2000);
  lcd.setCursor(0, 0);
  lcd.print("Im Mohammed saud       ");
  lcd.setCursor(0, 1);
  lcd.print("I study IT");
  delay(2000);
}
