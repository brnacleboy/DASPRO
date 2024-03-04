void setup() {
  Serial.begin(9600); 
  for (int tahun = 1900; tahun <= 2000; ++tahun) {
    if (tahun % 4 == 0 && (tahun % 100 != 0 || tahun % 400 == 0)) {
      Serial.println(tahun);
    }
  }
}

void loop() {
}
