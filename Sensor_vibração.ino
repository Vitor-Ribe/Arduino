
float variacao = 0.0;
void setup() {

  pinMode(6, INPUT);
  Serial.begin(9600);

}

void loop() {
  variacao = digitalRead(6);
  Serial.println(variacao);
  delay(10); 
}
