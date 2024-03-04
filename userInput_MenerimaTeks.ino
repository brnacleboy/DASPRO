String nilai1 = "";
char nilai2;

void setup() {
  Serial.begin(9600);
}

void loop() {
  while (nilai2 != '\n') {
    while (Serial.available() > 0) {
      nilai2 = Serial.read();
      nilai1 += nilai2;
    }
  }
  Serial.println(nilai1);
  nilai1 = "";
  nilai2 = '\0';
}
