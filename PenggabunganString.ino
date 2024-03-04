//Penggabungan String
String teks1 = "ini", teks2 = "ibu", teks3 = "budi";
char var1[5] = {'C', 'o', 'b', 'a'};
char var2[5] = {'d', 'u', 'l', 'u'};
void setup() {
  Serial.begin(9600);
  teks2 = teks1 + " " + teks2 + " " ;
  teks2.concat(teks3);
  Serial.println(teks2);

  strcat(var1, var2);
  Serial.println(var1);
}

void loop() {
}
s