#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // adjust pin numbers to match your wiring

void setup() {
  lcd.begin(16, 2);  // Set up the LCD's number of columns and rows
  displayText("Ujjawal Singh", "Volksgeist"); // msg that is to be shown on the display
}

void loop() {
   // leaving it empty, as it has no use as of now
}

void displayText(String line1, String line2 = "") {
  // Clear the LCD screen
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(line1); // prints the first line
  
  if (line2 != "") {
    // Set the cursor to the first column, second row
    lcd.setCursor(0, 1);
    lcd.print(line2);
  }
}

void scrollText(String text, int row) { // func to scroll long text
  lcd.setCursor(0, row);
  for (int i = 0; i < text.length() - 15; i++) {
    lcd.clear();
    lcd.setCursor(0, row);
    lcd.print(text.substring(i, i+16));
    delay(300);  // scroll speed
  }
}
