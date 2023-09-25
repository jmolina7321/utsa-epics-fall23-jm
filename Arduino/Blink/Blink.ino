int LED_BUILTIN1 = 13;
int LED_BUILTIN2 = 12;
int blink_duration1 = 1000;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN1, OUTPUT);
  pinMode(LED_BUILTIN2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(blink_duration1);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(blink_duration1);                      // wait for a second

  digitalWrite(LED_BUILTIN2, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(blink_duration1);                      // wait for a second
  digitalWrite(LED_BUILTIN2, LOW);   // turn the LED off by making the voltage LOW
  delay(blink_duration1);                      // wait for a second
}
