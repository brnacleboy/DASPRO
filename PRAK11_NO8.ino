void setup() {
  Serial.begin(9600); 
  String arr = "ikhsanariefarmansyah"; 
  int ar = arr.length();
  Serial.print("Nama Lengkap = ");
  Serial.println(arr);
  Serial.print("Karakter pada indeks genap = ");

  for (int p = 2; p < ar; p += 2) {
    Serial.print(arr[p]);}
}

void loop() {
}
