
int LED = 12;
init BUTTON = 4;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  if(digitalRead(BUTTON) == HIGH){
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}
