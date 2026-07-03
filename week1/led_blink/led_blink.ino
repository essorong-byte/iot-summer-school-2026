/**
 * @file led_blink.ino
 * @author essorong
 * @date July 2026
 * @brief Dynamic potentiometer-controlled LED blink system with logging metrics.
 */

unsigned long blinkCount = 0;
const int potPin = A0;

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  int delayVal = analogRead(potPin);

  digitalWrite(13, HIGH);
  delay(delayVal);
  digitalWrite(13, LOW);
  delay(delayVal);

  blinkCount++;
  Serial.print("Blink count: ");
  Serial.println(blinkCount);
}
