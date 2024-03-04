void setup() { //function yang bermanfaat untuk mengeksekusi jalannya program selama sekali (tidak berulang)
  Serial.begin(9600); //mengatur kecepatan bit rate sebesar 9600 bit
  float f = 3.6; //variabel f bertipe data float dengan nilai 3.6
  int i = (int) f; //pengkonversian tipe data float menjadi integer (bilangan pecahan menjadi bilangan bulat)
  Serial.println(f); //mencetak variabel f bernilai 3.6 dan membuat garis baru
  Serial.println(i); //mencetak variabel i dengan tipe data integer karna telah dikonversi sebelumnya
} //tanda tutup kurung kurawal (}) berfungsi untuk menutup blok kode difunction void setup.

void loop() { //function yang bermanfaat untuk mengeksekusi jalannya program secara berulang 
} //tanda tutup kurung kurawal (}) berfungsi untuk menutup blok kode difunction void loop.
