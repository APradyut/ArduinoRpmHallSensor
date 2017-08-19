#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 6, 5, 4, 3);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 4);

  attachInterrupt(digitalPinToInterrupt(2), iterate2, RISING);
  Serial.begin(9600);
  //Serial.println("start");
}
volatile float rev2 = 0;

int Speed = 0;

int d = 21; //inches
void iterate2()
{
  rev2 = rev2 + 1.0;
}
void loop() {
  // put your main code here, to run repeatedly:

  rev2 = 0;

  //noInterrupts();
  interrupts();
  delay(1000);
  noInterrupts();
  //Serial.println((rev2/2));  
  Speed = int((rev2/8)*0.2826*d);
  Serial.println(Speed);//inch to km 
  lcd.setCursor(0,0);
  lcd.print(Speed);
  delay(1000);
}
