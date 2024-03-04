#define pi 3.14

void setup() {
  byte jari = 4;
  Serial.begin(9600);
  float volume = 4 / 3 * pi * jari * jari * jari;

  Serial.print("Volume bola = ");
  Serial.println(volume);
}

void loop() {
}
