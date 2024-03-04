void setup() {
Serial.begin(9600);
String ar = "2201010075";
ar.replace ('0', 'o');
int arr = ar.toInt();
Serial.println(ar);
Serial.println(arr);
}
void loop() {
}
