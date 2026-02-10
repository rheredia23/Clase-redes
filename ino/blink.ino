void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("LED_ON");
  Serial.println("OK:LED_ON");
  delay(1000);

  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("LED_OFF");
  Serial.println("OK:LED_OFF");
  delay(1000);
}

