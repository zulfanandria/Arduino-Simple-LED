const int PIN_R = 11;
const int PIN_Y = 10;
const int PIN_G = 9;

const int DURA_R = 5;
const int DURA_Y = 1;
const int DURA_G = 3;

void setup() {
  pinMode(PIN_R, OUTPUT);
  pinMode(PIN_Y, OUTPUT);
  pinMode(PIN_G, OUTPUT);

}

void loop() {
  digitalWrite(PIN_R, HIGH);
  delay(DURA_R * 1000);
  digitalWrite(PIN_R, LOW);
  digitalWrite(PIN_Y, HIGH);
  delay(DURA_Y * 1000);
  digitalWrite(PIN_Y, LOW);
  digitalWrite(PIN_G, HIGH);
  delay(DURA_G * 1000);
  digitalWrite(PIN_G, LOW);
  
}
