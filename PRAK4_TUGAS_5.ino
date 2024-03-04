void setup() {
  Serial.begin(9600);
}

void loop() {
  int celcius;
  int fahrenheit, reamur;
  
  while (!Serial.available()) {}
  celcius = Serial.parseInt();

  fahrenheit = (celcius * 9.0 / 5.0) + 32.0;
  reamur = celcius * 4.0 / 5.0;

  Serial.print("Suhu dalam Celcius: ");
  Serial.println(celcius);

  Serial.print("Suhu dalam Fahrenheit: ");
  Serial.println(fahrenheit);

  Serial.print("Suhu dalam Reamur: ");
  Serial.println(reamur);
}
