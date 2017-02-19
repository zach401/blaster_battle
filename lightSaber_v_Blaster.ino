// digital pin 2 has a pushbutton attached to it. Give it a name:
int reciever = 2;
int LEDpin = 3;
int MOTORpin = 4;
bool LEDstate = false;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(reciever, INPUT);
  pinMode(LEDpin, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int buttonState = digitalRead(reciever);

  if (!buttonState){
    actuate();
  }
  // print out the state of the button:
  Serial.println(buttonState);
  delay(1);        // delay in between reads for stability
}

void actuate(){
  digitalWrite(LEDpin, true);
  digitalWrite(MOTORpin, true);
  delay(500);
  digitalWrite(LEDpin, false);
  digitalWrite(MOTORpin, false);
  
}


