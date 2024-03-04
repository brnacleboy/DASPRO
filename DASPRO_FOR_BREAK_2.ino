void setup() {
Serial.begin(9600);
for (byte n = 1; n <=50; n = n + 2) {
  Serial.println(n);
}
}

void loop() {
}
