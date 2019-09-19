// ============================================================================
const int arduinoBoardLED = 13; // LED on pin 13
int led = 3; //sets up outside LED
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);               // Use Serial Monitor to debug
  pinMode(arduinoBoardLED, OUTPUT); // initialize the digital pin as an output.
  Serial.println("Running The Seup Function");
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly
  delay(1000); // just a small delay to slow the main loop down
  Serial.println("Starting Main Loop Code");
  // put your code between here
   for (int i = 13; i <= 99; i = i + 3) {
    if (i % 2 == 0) //detects if even
    {
      Serial.print("The loop counter "); //Says loop counter
      Serial.print (i); //Displays the variable
      Serial.println (" is EVEN"); //Says that it is even
      digitalWrite(LED_BUILTIN, HIGH); //turns on LED
      digitalWrite(led, LOW); //turns off LED
      delay(1000); //delays the counting
      }
        else if (i & 0x01) //Detects if Odd
        {
         Serial.print ("The loop counter "); ///Says loop counter
         Serial.print (i); //Displays the variable
         Serial.println (" is ODD"); //Says that it is odd
         digitalWrite(LED_BUILTIN, LOW); //turns off LED 
         digitalWrite(led, HIGH); //turns on LED
         delay(1000); //delays the counting
        }  
  } 

  // and here
  Serial.println("Ending Main Loop Code");
}
