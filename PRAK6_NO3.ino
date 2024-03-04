int nilai = 5; //1 digit terakhir NIM

void setup() {
Serial.begin(9600);
byte modulo = nilai % 3;
switch (modulo) {
  case 1:
  Serial.println("Sisa 1");
  break;

  case 2:
  Serial.println("Sisa 2");
  break;

  default:
  Serial.println("Sisa 0");
  break;
}
}

void loop() {
}
