// C++ code
//

// Global Variables for Program 1A (P1-A)
int delay_1 = 500;
int PIN_A = 11;

void setup()
{
  // For P1-A
  pinMode(PIN_A, OUTPUT);

  
}

void loop()
{
  
  // Logic Sketch for P-1A
  digitalWrite(PIN_A, HIGH);
  delay(delay_1);
  digitalWrite(PIN_A, LOW);
  delay(delay_1);	
  	
}
