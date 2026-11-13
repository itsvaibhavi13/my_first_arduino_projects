void setup() {
  pinMode(LED3_R, OUTPUT); // set up as an output pin


  digitalWrite(LED3_R, HIGH); // this is active high so 
}

void loop() {
  digitalWrite(LED3_R, LOW);
  delay(1000);
  digitalWrite(LED3_R, HIGH);
  delay(1000);

}