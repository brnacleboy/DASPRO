void setup() { //function yang bermanfaat untuk mengeksekusi jalannya program selama sekali (tidak berulang)
  int hasil = -20; //variabel hasil bertipe data integer diinisialisasi dengan nilai -20
  unsigned long waktuAwal; //variabel waktuAwal bertipe data unsigned long, tidak memiliki nilai
  float daya; //variabel daya bertipe data float, tidak memiliki nilai
  String output; //variabel output bertipe data string, tidak memiliki nilai

  Serial.begin(9600); //mengatur kecepatan bit rate sebesar 9600 bit
  Serial.println(hasil); //mencetak variabel hasil (-20) dan membuat garis baru
  Serial.println(waktuAwal); //mencetak variabel waktuAwal dan membuat garis baru
  Serial.println(daya); //mencetak variabel daya dan membuat garis baru
  Serial.println(output); ////mencetak variabel string dan membuat garis baru
} //tanda tutup kurung kurawal (}) berfungsi untuk menutup blok kode difunction void setup.

void loop() { //function yang bermanfaat untuk mengeksekusi jalannya program secara berulang 
} //tanda tutup kurung kurawal (}) berfungsi untuk menutup blok kode difunction void loop.
