/*
Body Centric Technologies - OCAD U - Winter 2021
The Elbow Hello : By Patricia Mwenda
Created Feb 3rd 2021

Based on:
Input Pull-up Serial
created 14 Mar 2012
by Scott Fitzgerald
*/

void setup() {
  //start serial connection
  Serial.begin(9600);
  //configure pin 2 as an input and enable the internal pull-up resistor
  pinMode(13, INPUT_PULLUP);
  pinMode(12, OUTPUT);
 

}

void loop() {
  //read the pushbutton value into a variable
  int sensorVal = digitalRead(13);
  //print out the value of the pushbutton
  Serial.println(sensorVal);

  // Keep in mind the pull-up means the pushbutton's logic is inverted. It goes
  // HIGH when it's open, and LOW when it's pressed. Turn on pin 13 when the
  // button's pressed, and off when it's not:
  if (sensorVal == HIGH) {
    digitalWrite(12, LOW);
  } else {
    digitalWrite(12, HIGH);
  }
}
