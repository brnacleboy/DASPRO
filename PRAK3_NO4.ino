#define PI 3.14 //merupakan konstanta PI bernilai 3.14

void setup() { //function yang bermanfaat untuk mengeksekusi jalannya program selama sekali (tidak berulang)
  Serial.begin(9600); //mengatur kecepatan bit rate sebesar 9600 bit
  Serial.print("nilai PI = "); //mencetak kalimat "nilai PI ="  
  Serial.println(PI); //mencetak konstanta PI (3.14) dan membuat garis baru
} //tanda tutup kurung kurawal (}) berfungsi untuk menutup blok kode difunction void setup.

void loop() { //function yang bermanfaat untuk mengeksekusi jalannya program secara berulang 
} //tanda tutup kurung kurawal (}) berfungsi untuk menutup blok kode difunction void loop.
