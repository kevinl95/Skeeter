int speaker = D0;

void setup() {
  pinMode(speaker, OUTPUT);
  Particle.function("tone", toneToggle);
  digitalWrite(speaker, LOW);
}

void loop() {

}

int toneToggle(String command) {
  if (command == "17") {
    tone(speaker, 17400, 0);
    return 1;
  }
  if (command == "8") {
    tone(speaker, 8000, 0);
    return 1;
  }
  else if (command == "off") {
    digitalWrite(speaker, LOW);
    return 0;
  }
  else {
    return -1;
  }
}
