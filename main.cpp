///int PUL=5; //define Pulse pin
int DIR=6; //define Direction pin
int ENA=5; //define Enable Pin
void setup() {
  pinMode (PUL, OUTPUT);
  pinMode (DIR, OUTPUT);
  pinMode (ENA, OUTPUT);

}

void loop() {
  for (int i=0; i<6400; i++)    //Forward 5000 steps
  {
    digitalWrite(DIR,LOW);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(50);
  }
  for (int i=0; i<6400; i++)   //Backward 5000 steps
  {
    digitalWrite(DIR,HIGH);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(50);
  }
}////


--------------------------------------------------------
// intento de codigo //


int PULM1=5; //define Pulse pin Motor 1
int DIRM1=6; //define Direction pin Motor 1
int ENAM1=7; //define Enable Pin Motor 1

int PULM2=9; //define Pulse pin Motor 2
int DIRM2=10; //define Direction pin Motor 2
int ENAM2=8; //define Enable Pin Motor 2

void setup() {
  pinMode (PULM1, OUTPUT);
  pinMode (DIRM1, OUTPUT);
  pinMode (ENAM1, OUTPUT);
  digitalWrite(DIRM1,LOW);

  pinMode (PULM2, OUTPUT);
  pinMode (DIRM2, OUTPUT);
  pinMode (ENAM2, OUTPUT);
  digitalWrite(DIRM2,LOW);

}

void loop() {
  for (int i=0; i<6400; i++)    //Forward 5000 steps -- calcular tiempo
  {
  
    digitalWrite(ENAM1,HIGH);
    digitalWrite(PULM1,HIGH);
    delayMicroseconds(50);
    digitalWrite(PULM1,LOW);
    delayMicroseconds(50);
    }

    for (int i=0; i<6400; i++)    //Forward 5000 steps --- calcular tiempo

    
    digitalWrite(ENAM2,HIGH);
    digitalWrite(PULM2,HIGH);
    delayMicroseconds(50);
    digitalWrite(PULM2,LOW);
    delayMicroseconds(50)


  }
  
}