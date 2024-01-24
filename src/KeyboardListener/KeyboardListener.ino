int ButtonState2 = 0;
int lastButtonState2 = 0;
int ButtonState3 = 0;
int lastButtonState3 = 0;
int ButtonState4 = 0;
int lastButtonState4 = 0;
int ButtonState5 = 0;
int lastButtonState5 = 0;

const int aButton = 2;
const int bButton = 3;
const int spaceButton = 5;
const int nukeButton = 4;

void setup() {
  Serial.begin(9600);
  pinMode(aButton, INPUT_PULLUP);
  pinMode(bButton, INPUT_PULLUP);
  pinMode(spaceButton, INPUT_PULLUP);
  pinMode(nukeButton, INPUT_PULLUP);
}

void loop(){
  ButtonState2 = digitalRead(aButton);
  if(ButtonState2 != lastButtonState2)
  {
    if(ButtonState2 == LOW)
    {
      Serial.println('A');
    }
  }
  lastButtonState2 = ButtonState2;

  ButtonState3 = digitalRead(bButton);
  if(ButtonState3 != lastButtonState3)
  {
    if(ButtonState3 == LOW)
    {
      Serial.println('B');
    }
  }
  lastButtonState3 = ButtonState3; 

  ButtonState4 = digitalRead(nukeButton);
  if(ButtonState4 != lastButtonState4)
  {
    if(ButtonState4 == LOW)
    {
      Serial.println(' ');
      Serial.println("LAUNCHING NUKE");
      delay(1000);
      Serial.println('5');
      delay(1000);
      Serial.println('4');
      delay(1000);
      Serial.println('3');
      delay(1000);
      Serial.println('2');
      delay(1000);
      Serial.println('1');
      delay(100);
      Serial.println("BOOM");
      Serial.println(' ');
    }
  }
  lastButtonState4 = ButtonState4;

  ButtonState5 = digitalRead(spaceButton);
  if (ButtonState5 != lastButtonState5)
  {
    if (ButtonState5 == LOW)
    {
      Serial.println(' ');
    }
  }
  lastButtonState5 = ButtonState5;
}