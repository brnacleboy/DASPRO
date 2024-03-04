void setup() { //function yang bermanfaat untuk mengeksekusi jalannya program selama sekali (tidak berulang)
  Serial.begin(9600); //mengatur kecepatan bit rate sebesar 9600 bit
  int nilai = penjumlahan(2, 3); //variabel nilai bertipe data integer berisi penjumlahan bernilai 2,3
  Serial.print("Hasil penjumlahan"); //mencetak kalimat "Hasil penjumlahan"
  Serial.println(nilai); //mencetak variabel nilai dan membuat garis baru
} //tanda tutup kurung kurawal (}) berfungsi untuk menutup blok kode difunction void setup.

void loop() { //function yang bermanfaat untuk mengeksekusi jalannya program secara berulang 
} //tanda tutup kurung kurawal (}) berfungsi untuk menutup blok kode difunction void loop.

int penjumlahan (int a, int b) { //function baru bernama penjumlahan berisi dua parameter (int a, int b)
  int hasil = a + b; //variabel hasil bertipe data integer dengan isi penjumlhan a + b
  return a; //sintaks yang berfungsi untuk mengembalikan nilai dari variabel
            //disini nilai variabel a adalah output dari function ini
} //tanda tutup kurung kurawal (}) berfungsi untuk menutup blok kode difunction baru ini.
