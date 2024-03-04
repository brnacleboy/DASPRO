String teks1="dasar", teks2 = "pemrograman";
String teks3 ="arduino";
char str1 [10] = "fakultas ";
char str2 [7] = "teknik";

void setup() {
Serial.begin(9600);
teks2 = teks1+ " " + teks2 + " ";
teks2.concat(teks3);
Serial.print("Isi teks2 = ");
Serial.println(teks2);

strcat(str1, str2);
Serial.print ("Isi str1 = ");
Serial.println (str1);
}

void loop() {
}
