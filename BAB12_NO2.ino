void setup() {
Serial.begin(9600); 
String name = "ikhsanariefarmansyah"; 
int arr = name.length();
Serial.print("Nama Lengkap = ");
Serial.println(name);
Serial.print("Karakter pada indeks genap = ");

for (int p = 2; p < arr; p += 2) {
Serial.print(name[p]);}
Serial.println("");
Serial.print("Karakter diubah menjadi huruf kapital = ");
name.setCharAt(2, 'H');
name.setCharAt(4, 'A');
name.setCharAt(6, 'A');
name[8] = 'I';
name[10] = 'F';
name[12] = 'R';
name.setCharAt(14, 'A');
name.setCharAt(16, 'S');
name.setCharAt(18, 'A');
Serial.println(name);
}

void loop() {
}
