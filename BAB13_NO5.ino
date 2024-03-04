void setup() {
Serial.begin(9600);

int P = 2201010075 % 100;
int akar2 = sqrt(75);
int pangkat3 = pow(75,3);
int y = (1 / pow(P, 3)) + sqrt(2 * P) - P;
float nilaiSIN = sin(y);
float nilaiCOS = cos(y);
float nilaiTAN = tan(y);

Serial.print("2 digit NIM = ");
Serial.println(P);
Serial.print("Nilai kalkulasi rumus = ");
Serial.println(y);
Serial.print("nilai SIN = ");
Serial.println(nilaiSIN);
Serial.print("nilai COS = ");
Serial.println(nilaiCOS);
Serial.print("nilai TAN = ");
Serial.println(nilaiTAN);
}

void loop() {
}
