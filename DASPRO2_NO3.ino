const char brnacle = 'p'; //konstanta bertipe data Character bernama brnacle bernilai 'P'
#define brnacleBoy 326423 //konstanta bertipe data Character bernama brnacleBoy bernilai 236423

void setup() { //function yang bermanfaat untuk mengeksekusi jalannya program selama sekali (tidak berulang)
  Serial.begin(9600); //mengatur kecepatan bit rate sebesar 9600 bit
  Serial.println(brnacle); //mencetak konstanta brnacle (P) dan membuat garis baru
  Serial.print(brnacleBoy); //mencetak konstanta brnacleBoy (326423)
} //tanda tutup kurung kurawal (}) berfungsi untuk menutup blok kode difunction void setup.

void loop(){ //function yang bermanfaat untuk mengeksekusi jalannya program secara berulang 
} //tanda tutup kurung kurawal (}) berfungsi untuk menutup blok kode difunction void loop.
