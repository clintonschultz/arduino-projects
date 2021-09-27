#define LED_PIN       3
#define BUTTON_PIN    4

int currentState;
int debounceState;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
}

void loop() {
  currentState = digitalRead(BUTTON_PIN);
  delay(10);
  debounceState = digitalRead(BUTTON_PIN);

  if (currentState == debounceState) {
    if (currentState == HIGH) {
      digitalWrite(LED_PIN, HIGH);
    }
    if (currentState == LOW) {
      digitalWrite(LED_PIN, LOW);
    }
  }
}
