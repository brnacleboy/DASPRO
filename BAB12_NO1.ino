void setup() {
Serial.begin(9600); 
String name = "ikhsanariefarmansyah"; 
int arr = name.length();
Serial.print("Nama Lengkap = ");
Serial.println(name);
Serial.print("Karakter pada indeks genap = ");

for (int p = 2; p < arr; p += 2) {
Serial.print(name[p]);}
}

void loop() {
}
