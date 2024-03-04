String string = "program";

void setup() {
  Serial.begin(9600);
  Serial.println(string);
  string.setCharAt(0, 'P');
  string[6]= 'M';
  Serial.println(string);
}

void loop() {
}
