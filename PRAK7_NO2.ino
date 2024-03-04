void setup() {
Serial.begin(9600);
Serial.println("10 bilangan ganjil pertama");

for (byte i = 1; i < 20; i=i+2) {
Serial.println(i);
}
}

void loop() {
}
