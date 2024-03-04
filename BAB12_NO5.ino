void setup() {
Serial.begin(9600);
String ar = "AT + COPS = 0,\"Telkomsel\"";
String arr = ar.substring(15, 24);
Serial.println(arr);
String an = "AT + CREG = 1";
String ann = an.substring(12);
Serial.println(ann);
String ai = "AT + CSQ = 18";
String aii = ai.substring(11, 13);
Serial.println(aii);
String na = "+CNACT: 1,\"10.7.146.243\"";
String nai = na.substring(11, 23);
Serial.println(nai);
}

void loop() {
}
