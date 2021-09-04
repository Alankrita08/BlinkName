/**
 * Task-2.1P (EMBEDDED SYSTEMS)
 * Student Name- Alankrita
 * Student ID- 2010993003
 * 
 * Code for blinking my name on Arduino Nano with the help of Morse Code.
 */
void Dot()
{
   digitalWrite(LED_BUILTIN, HIGH);      // set pin on ON state
   delay(300);                           // delay for 0.3 second
   digitalWrite(LED_BUILTIN, LOW);       // set pin on OFF state
   delay(300);                           // delay for 0.3 second
}
void Dash()
{
   digitalWrite(LED_BUILTIN, HIGH);       // set pin on ON state
   delay(1500);                           // delay for 1.5 seconds
   digitalWrite(LED_BUILTIN, LOW);        // set pin on OFF state
   delay(1500);                           // delay for 1.5 seconds
}

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // A - (.-)
    Dot();                          // Dot function
    Dash();                         // Dash function
    delay(3000);

  //L - (.-..)
    Dot();
    Dash();
    Dot();
    Dot();
   delay(3000);

  //A - (.-)
  Dot();
  Dash();
  delay(3000);

  //N - (-.)
   Dash();
   Dot();
   
   delay(3000);

  //K - (-.-)
   Dash();
   Dot();
   Dash();
   delay(3000);   

  //R - (.-.)
   Dot();
   Dash();
   Dot();
   delay(3000);

  //I - (..)
   Dot();
   Dot();
   delay(3000);


  //T - (-)
  Dash();
  delay(3000);

  //A - (.-)
  Dot();
  Dash();
  delay(3000);
}
