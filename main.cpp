int PULM1=7; //define Pulse pin
int DIRM1=6; //define Direction pin
int ENAM1=5; //define Enable Pin

int PULM2=13; //define Pulse pin
int DIRM2=11; //define Direction pin
int ENAM2=10; //define Enable Pin
void setup() {
  pinMode (PULM1, OUTPUT);
  pinMode (DIRM1, OUTPUT);
  pinMode (ENAM1, OUTPUT);

  pinMode (PULM2, OUTPUT);
  pinMode (DIRM2, OUTPUT);
  pinMode (ENAM2, OUTPUT);

}

void loop() {
  for (int i=0; i<6400; i++)    //Forward 5000 steps
  {
    digitalWrite(DIRM1,LOW);
    digitalWrite(ENAM1,HIGH);
    digitalWrite(PULM1,HIGH);
    delayMicroseconds(50);
    digitalWrite(PULM1,LOW);
    delayMicroseconds(50);
 
  }

  for (int i=0; i<6400; i++)    //Forward 5000 steps
  {
    digitalWrite(DIRM2,LOW);
    digitalWrite(ENAM2,HIGH);
    digitalWrite(PULM2,HIGH);
    delayMicroseconds(50);
    digitalWrite(PULM2,LOW);
    delayMicroseconds(50);
  }
}

// Set Micro Step: 32 , Connect a 9~42V DC power supply //