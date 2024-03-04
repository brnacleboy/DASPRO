int batasKecerahan = 99; 

void setup() {
  Serial.begin(9600);
    for(int n = 0; n <= 100; ++n) { 
    Serial.print("Nilai kecerahan: ");
    Serial.println(n);
    if(n > batasKecerahan) { 
      Serial.println("Nilai kecerahan melebihi ketentuan");
      break; 
    }
  }
}

void loop() {
}
