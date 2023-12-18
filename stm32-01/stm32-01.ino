int L1 = 5;

void setup() {
  Serial.begin(9600);
  pinMode(PC13, OUTPUT);
  pinMode(L1, OUTPUT);
}

void loop() {
  digitalWrite(PC13, HIGH);
  digitalWrite(L1, HIGH);
  delay(200);
  digitalWrite(PC13, LOW);
  delay(200);
  Serial.println("Hello World");

  for (int x = 0; x < 255; x++) {
    analogWrite(L1, x);
    delay(10);
    Serial.println(x);
  }
  delay(500);
  for (int x = 255; x > 0; x--) {
    analogWrite(L1, x);
    delay(10);
    Serial.println(x);
  }
  delay(500);

}
