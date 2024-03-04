int Hasil1, Hasil2, Hasil3, Hasil4;
byte input = 10;
void setup() {
Serial.begin(9600);
Hasil1 = (input > 3) && (6 > input);
Hasil2 = (input > 3) && (6 < input);
Hasil3 = (input < 3) && (6 > input);
Hasil4 = (input < 3) && (6 < input);

Serial.print("Hasil 1 : ");
Serial.println(Hasil1);
Serial.print("Hasil 2 : ");
Serial.println(Hasil2);
Serial.print("Hasil 3 : ");
Serial.println(Hasil3);
Serial.print("Hasil 4 : ");
Serial.println(Hasil4);
}

void loop() {
}
