#define PI 3.14 //konstanta bernama PI bernilai 3.14
#define pinLED 4 //konstanta bernama pinLED bernilai 4
#define nilai=3.43 //konstanta bernama nilai bernilai 3.14
#define konstanta 7 //konstanta bernama konstanta bernilai 7
#define P, R 3.14, 5 //konstanta bernama P dan R bernilai 3.14 dan 5

void setup() { //function yang bermanfaat untuk mengeksekusi jalannya program selama sekali (tidak berulang)
  Serial.begin(9600); //mengatur kecepatan bit rate sebesar 9600 bit
  Serial.println(PI); //mencetak konstanta PI (3.14) dan membuat garis baru
  Serial.println(pinLED); //mencetak konstanta pinLed (4) dan membuat garis baru
  Serial.println(nilai); //mencetak konstanta nilai (3.43) dan membuat garis baru
  Serial.println(konstanta); //mencetak konstanta konstanta (7) dan membuat garis baru
  Serial.println(P, R); //mencetak konstanta P dan R (3.14 dan 5) dan membuat garis baru
} //tanda tutup kurung kurawal (}) berfungsi untuk menutup blok kode difunction void setup.

void loop(){ //function yang bermanfaat untuk mengeksekusi jalannya program secara berulang 
} //tanda tutup kurung kurawal (}) berfungsi untuk menutup blok kode difunction void loop.
