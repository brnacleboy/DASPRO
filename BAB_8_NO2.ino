unsigned long nim = 2201010075;
unsigned long dibalik; 
  
  void setup() {
  Serial.begin(9600);
   Serial.print("NIM : ");
   Serial.println(nim);
   Serial.print("Setelah dibalik menjadi : ");
   while (nim != 0){
     dibalik = nim % 10;
     nim = nim / 10;
      Serial.print(dibalik);
   }
   return dibalik;
}

void loop() {
}
