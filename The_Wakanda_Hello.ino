/*
Body Centric Technologies - OCAD U - Winter 2021
The Wakanda Hello : By Patricia Mwenda
Created Feb 3rd 2021

Based on:
LilyPad Tri-Color LED: Basic Color Mixing
SparkFun Electronics
https://www.sparkfun.com/products/8467

Input Pull-up Serial
created 14 Mar 2012
by Scott Fitzgerald

******************************************************************************/

// This example uses a tri-color, also known as an RGB 
// (Red / Green / Blue) LED.


// Create integer variables for our LED pins:

int Switch = 13;
int RGB_red = 12;
int RGB_green = 11;
int RGB_blue = 10;



void setup()
{
   //start serial connection
  Serial.begin(9600);

  pinMode(Switch, INPUT_PULLUP);
  pinMode(RGB_red, OUTPUT);
  pinMode(RGB_green, OUTPUT);
  pinMode(RGB_blue, OUTPUT);

}

void loop()
{

  //read the pushbutton value into a variable
  int sensorVal = digitalRead(Switch);
  //print out the value of the pushbutton
  Serial.println(sensorVal);

  // Black (all LEDs off)

  // RGB LEDs:
  if (sensorVal == HIGH) {
  digitalWrite(RGB_red, HIGH);
  digitalWrite(RGB_green, HIGH);
  digitalWrite(RGB_blue, HIGH);
  delay(100);

  // Yellow (Yellow LED on)
  }else {
  digitalWrite(RGB_red, HIGH);
  digitalWrite(RGB_green, LOW);
  digitalWrite(RGB_blue, LOW);
  delay(100);
  }
}

 
