float x = 4.5;
float y = 5.4;

void setup() {
Serial.begin(9600);
int NIMakhir = 2201010075 % 100;
float Q = pow(x, y);
int hasill = max(NIMakhir, Q);
int nilaiRandom = random(12,Q);

Serial.print("2 digit NIM = ");
Serial.println(NIMakhir);
  
Serial.print("Hasil perbandingan maksimum = ");
Serial.println(hasill);

Serial.print("Hasil Random = ");
Serial.println(nilaiRandom);
}
void loop() {
}
