
const int ledPin = 13;

const int onDelay = 1000;
const int offDelay = 1000;

void setup() {

  // Initialize LED pin as OUTPUT
  pinMode(ledPin, OUTPUT);

  // Initialize Serial Communication
  Serial.begin(9600);

  Serial.println("Arduino LED Blinking System Started");
  Serial.println("LED Pin Configuration Verified");
}

void loop() {

  // Turn LED ON
  digitalWrite(ledPin, HIGH);
  Serial.println("LED ON");

  delay(onDelay);

  // Turn LED OFF
  digitalWrite(ledPin, LOW);
  Serial.println("LED OFF");

  delay(offDelay);
}
