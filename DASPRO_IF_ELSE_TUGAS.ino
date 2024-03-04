int nilai = 78;
char huruf_mutu;

void setup() {
    Serial.begin(9600);

      if (nilai > 85 && nilai <= 100) {
        huruf_mutu = 'A';
        Serial.print("Huruf Mutu = ");
        Serial.println(huruf_mutu);
    } 
    
    else if (nilai > 75 && nilai <= 85) {
        huruf_mutu = 'B';
        Serial.print("Huruf Mutu = ");
        Serial.println(huruf_mutu);
    } 
    
    else if (nilai > 50 && nilai <= 75) {
        huruf_mutu = 'C';
        Serial.print("Huruf Mutu = ");
        Serial.println(huruf_mutu);} 
    else if (nilai > 40 && nilai <= 50) {
        huruf_mutu = 'D';
        Serial.print("Huruf Mutu = ");
        Serial.println(huruf_mutu);} 
    else if (nilai > 0 && nilai <= 40) {
        huruf_mutu = 'E';
        Serial.print("Huruf Mutu = ");
        Serial.println(huruf_mutu);} 

}

void loop() {
}


