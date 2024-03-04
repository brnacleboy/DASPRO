void setup() {
Serial.begin(9600);
byte celsius = 13;
float fahrenheit = celsiusKeFahrenheit(celsius); 
float reamur = celsiusKeReamur(celsius);
float kelvin = celsiusKeKelvin(celsius);
Serial.print("Suhu Celsius: ");
Serial.println(celsius);
Serial.print("Suhu Celcius dalam Fahrenheit: ");
Serial.println(fahrenheit);
Serial.print("Suhu Celcius dalam Reamur: ");
Serial.println(reamur);
Serial.print("Suhu Celcius dalam Kelvin: ");
Serial.println(kelvin);
}
float celsiusKeFahrenheit(byte celsius) {
  return celsius * 9.0 / 5.0 + 32;}
float celsiusKeReamur(byte celsius) {
  return celsius * 4.0 / 5.0;}
float celsiusKeKelvin(byte celsius) {
  return celsius + 273.15;}

void loop() {
}
