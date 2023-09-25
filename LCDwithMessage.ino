#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);

  // Print a message to the LCD.
  lcd.setCursor(15, 1);
}

void loop() {
  String word;
  lcd.autoscroll();
  word = "Please endorse my profile               ";
  for(static int i; i < word.length(); i++){
    lcd.print(word.charAt(i));
    delay(600);
    
  }


}