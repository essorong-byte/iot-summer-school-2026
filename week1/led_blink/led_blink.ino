unsigned long blinkCount = 0;
const int potPin = A0; // Potentiometer wiper terminal connected to Analog Pin 0

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  int delayVal = analogRead(potPin); // Read raw analog data (0 to 1023)

  digitalWrite(13, HIGH);
  delay(delayVal); // Use potentiometer reading as the delay time
  digitalWrite(13, LOW);
  delay(delayVal);

  blinkCount++;
  Serial.print("Blink count: ");
  Serial.println(blinkCount);
}
