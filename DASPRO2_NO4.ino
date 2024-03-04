bool contohBoolean = false; //variabel contohBoolean bertipe data Boolean diinisialisasi dengan nilai false
int contohInteger = 13; //variabel contohInteger bertipe data Integer diinisialisasi dengan nilai 13
unsigned int ann = 1054 ; //variabel ann bertipe data unsigned int diinisialisasi dengan nilai 1054
unsigned long arr = 21561460; //variabel arr bertipe data unsigned long diinisialisasi dengan nilai 21561460
float harga = 3.25; //variabel harga bertipe data float diinisialisasi dengan nilai 3.25
char inisial = 'P'; //variabel inisial bertipe data Character diinisialisasi dengan nilai 'P'
String myName = "Ikhsan Arief Armansyah"; //variabel myName bertipe data String diinisialisasi dengan nilai "Ikhsan Arief Armansyah"

void setup() { //function yang bermanfaat untuk mengeksekusi jalannya program selama sekali (tidak berulang)
  Serial.begin(9600); //mengatur kecepatan bit rate sebesar 9600 bit
  Serial.println(contohBoolean); //mencetak variabel contohBoolean (false) dan membuat garis baru
  Serial.println(contohInteger); //mencetak variabel contohInteger (13) dan membuat garis baru
  Serial.println(ann); //mencetak variabel ann (1054) dan membuat garis baru
  Serial.println(arr); //mencetak variabel arr (21561460) dan membuat garis baru
  Serial.println(harga); //mencetak variabel harga (3.25) dan membuat garis baru
  Serial.println(inisial); //mencetak variabel inisial (P) dan membuat garis baru
  Serial.println(myName); //mencetak variabel myName (Ikhsan Arief Armansyah) dan membuat garis baru
} //tanda tutup kurung kurawal (}) berfungsi untuk menutup blok kode difunction void setup.

void loop(){ //function yang bermanfaat untuk mengeksekusi jalannya program secara berulang 
} //tanda tutup kurung kurawal (}) berfungsi untuk menutup blok kode difunction void loop.


