#include <LiquidCrystal.h>
#define botao1 7
#define botao2 6
#define botao3 1
#define botao4 0
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  pinMode(botao3, INPUT);
  pinMode(botao4, INPUT);
  lcd.begin(16, 2);
}
void loop() {
  if((digitalRead(botao1) == 1)||(digitalRead(botao2) == 1)){
  lcd.setCursor(0, 0);
  lcd.print("Motores CC");
  }
    else{
    lcd.setCursor(0, 0);
    lcd.print("                ");
}
  if((digitalRead(botao4) == 1)||(digitalRead(botao3) == 1)){
    lcd.setCursor(0, 1);
    lcd.print("Servo Motor");
  }
    else{
      lcd.setCursor(0, 1);
      lcd.print("                ");
    }
}