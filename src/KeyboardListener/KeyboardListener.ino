// Courtesy of James Fleming and James Burns - Jan, 2024

#define joyX A1
#define joyY A0

#define aButton 6
#define bButton 3
#define spaceButton 5
#define nukeButton 4

const int keyCount = 4;

int keyPins[] = { aButton, bButton, spaceButton, nukeButton };
int keyStates[] = {1, 1, 1, 1};
int previousKeyStates[] = {1, 1, 1, 1};

void setup() {
  Serial.begin(9600);
  
  for (int keyPin : keyPins){
    pinMode(keyPin, INPUT_PULLUP);
  }
}

void loop(){
  // Mouse:
  const int xValue = analogRead(joyX);
  const int yValue = analogRead(joyY);
  // Buttons:
  for (int i = 0; i < keyCount; i++){
    const int state = digitalRead(keyPins[i]);
    keyStates[i] = state;
    const int prevState = previousKeyStates[i];

    if (state == prevState) continue;
    previousKeyStates[i] = state;

    if (state == HIGH) continue;

    const int pin = keyPins[i];

    switch (pin){
      case aButton:
        Serial.println("A");
        break;
      case bButton:
        Serial.println("B");
        break;
    }
  }
}