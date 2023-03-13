#define pot A0


void setup() {
  Serial.begin(9600);
  pinMode (pot, INPUT);
}
void loop() {
 int po = analogRead(pot);  
 Serial.print("Nilai yang terbaca adalah = ");
 Serial.println(po);
 delay(100);
}
