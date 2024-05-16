// C++ code
//


// Global Variables for Program 1B (P1-B)
int delay_2 = 1000;
int PIN_A = 2;
int PIN_B = 3;
int PIN_C = 4;
int total_loop = 10;
int current_loop = 0;

void setup()
{
  // For P1-B
  pinMode(PIN_A, OUTPUT);
  pinMode(PIN_B, OUTPUT);
  pinMode(PIN_C, OUTPUT);
}

void loop()
{
  // Logic Sketch for P-1B

  if(current_loop < total_loop){
  	blinking_function(PIN_A, delay_2);
  	blinking_function(PIN_B, delay_2);
  	blinking_function(PIN_C, delay_2);
  	
    current_loop++ ;
  }
  

}

// Function for P-1B
void blinking_function (int PIN_NUMBER, int DELAY){
    digitalWrite(PIN_NUMBER,HIGH);
    delay(DELAY);
    digitalWrite(PIN_NUMBER, LOW);
}