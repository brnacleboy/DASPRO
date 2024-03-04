//Penjang Karakter String
String var1 = "vin diesel";
char var2[6] = {'f', 'a', 'm', 'i', 'l', 'y'};

void setup() {
Serial.begin(9600);
byte hasil1 = var1.length();
byte hasil2 = strlen(var2);

Serial.print("Panjang karakter variabel 1 : ");
Serial.println(hasil1);
Serial.print("Panjang karakter variabel 2 : ");
Serial.println(hasil2);
}

void loop() {
}
