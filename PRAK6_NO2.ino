int nilai1 = 22, nilai2 = 75; //2 digit pertama dan terakhir NIM

void setup() {
Serial.begin(9600);
int nilai;
if (nilai > 80) Serial.println("Kamu Lulus");
else Serial.println("Kamu Tidak Lulus");

int hasil;
if (nilai1 > nilai2) hasil = nilai1-nilai2;
else if (nilai1 >= nilai2) hasil = nilai1 - nilai2 / nilai1;
else if (nilai1 == nilai2) hasil = nilai1 + nilai2;
else if (nilai1 <= nilai2) hasil = nilai1 * nilai2;
else if (nilai1 < nilai2) hasil = nilai1 / nilai2 + nilai1;
else if (nilai1 != nilai2) hasil = nilai1/nilai2; 

else { 
Serial.println("Tidak ada relasi"); 
Serial.println(hasil);
}

Serial.println(hasil);
}

void loop() {
}
