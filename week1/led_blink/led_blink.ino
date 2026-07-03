unsigned long blinkCount = 0;

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600); // Start serial communication at 9600 baud rate
}
void loop() {
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);

  blinkCount++; // Increment counter by 1
  Serial.print("Blink count: ");
  Serial.println(blinkCount); // Print current count to monitor
}
