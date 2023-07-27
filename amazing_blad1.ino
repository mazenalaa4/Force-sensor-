// C++ code
//
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(39,16,2);
int forcevalue=0;
void setup()
{

}

void loop()
{
 lcd.init();
lcd.backlight();
  
  forcevalue=analogRead(14);
lcd.setCursor(0,0);
  lcd.print("Reading=");
  lcd.print(forcevalue);
  delay(50);
  

}