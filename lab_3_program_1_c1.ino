// C++ code
//


// Global Variables for Program 1C (P1-C)
int delay_2 = 500;
int PIN_A = 2;
int PIN_B = 3;
int PIN_C = 4;


void setup()
{
  // For P1-B Pin Initialization
  pinMode(PIN_A, OUTPUT);
  pinMode(PIN_B, OUTPUT);
  pinMode(PIN_C, OUTPUT);
  
  //
  BLINK(PIN_A, 4);
  BLINK(PIN_B, 6);
  BLINK(PIN_C, 3);

  
}

void loop()
{
  // The function was instructed to call on setup() so this is empty
}

// Function for P-1C
void BLINK(int K, int M){
  for(int i=0; i<M; i++){
  	digitalWrite(K,HIGH);
    delay(delay_2);
    digitalWrite(K, LOW);
  	delay(delay_2);
  }
}