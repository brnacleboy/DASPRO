int nilai -2500; //variabel nilai bertipe data integer diinisialisasi dengan nilai -2500
unsignet long waktu; //variabel waktu bertipe data unsigned long namun tidak memiliki nilai
                     //penulisan tipe data yang benar ialah unsigned (menggunakan d bukan t)
float tegangan; //variabel tegangan bertipe data float, tidak memiliki nilai  
char karakter="a"; //variabel karakter bertipe data Character diinisialisasi dengan nilai a
                   //untuk mencetak karakter menggunakan tanda petik (satu) bukan tanda petik (dua)
String kalimat; //variabel kalimat bertipe data string, tidak memiliki nilai

void setup() { //function yang bermanfaat untuk mengeksekusi jalannya program selama sekali (tidak berulang)
 Serial.begin(9600); //mengatur kecepatan bit rate sebesar 9600 bit
 Serial.println(nilai); //mencetak variabel nilai (-2500) dan membuat garis baru
 Serial.println(waktu); //mencetak variabel waktu dan membuat garis baru
                       //hasil yg dikeluarkan 0 karna variabel waktu tidak memiliki nilai
 Serial.println(tegangan); //mencetak variabel tegangan dan membuat garis baru
                         //hasil yg dikeluarkan 0.00 karna variabel tegangan tidak memiliki nilai
 Serial.println(karakter); //mencetak variabel karakter (a) dan membuat garis baru
 Serial.println(kalimat); //mencetak variabel kalimat dan membuat garis baru
                         //tidak mencetak apapun karna variabel kalimat tidak memiliki nilai
} //tanda tutup kurung kurawal (}) berfungsi untuk menutup blok kode difunction void setup.

void loop(){ //function yang bermanfaat untuk mengeksekusi jalannya program secara berulang 
} //tanda tutup kurung kurawal (}) berfungsi untuk menutup blok kode difunction void loop.
