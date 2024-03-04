void setup() {
Serial.begin(9600);
String namaVariabel = "nama lengkap kalian";
String namaVariabel2 = "22010100";

namaVariabel.concat(namaVariabel2);

Serial.println(namaVariabel);
}

void loop() {
}
