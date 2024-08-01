// C++ code
// Variable Defination
int A = 5;
int B = 4;
int C = 9;
int D = 10;
int E = 11;
int F = 6;
int G = 7;
int DP = 8;

void zero()
{
	digitalWrite(A, HIGH);
  	digitalWrite(B, HIGH);
  	digitalWrite(C, HIGH);
  	digitalWrite(D, HIGH);
	digitalWrite(E, HIGH);
	digitalWrite(F, HIGH);
	digitalWrite(G, LOW);
	digitalWrite(DP, HIGH);
}

void one()
{
	digitalWrite(A, LOW);
  	digitalWrite(B, HIGH);
  	digitalWrite(C, HIGH);
  	digitalWrite(D, LOW);
	digitalWrite(E, LOW);
	digitalWrite(F, LOW);
	digitalWrite(G, LOW);
	digitalWrite(DP, HIGH);
}

void two()
{
	digitalWrite(A, HIGH);
  	digitalWrite(B, HIGH);
  	digitalWrite(C, LOW);
  	digitalWrite(D, HIGH);
	digitalWrite(E, HIGH);
	digitalWrite(F, LOW);
	digitalWrite(G, HIGH);
	digitalWrite(DP, HIGH);
}

void three()
{
	digitalWrite(A, HIGH);
  	digitalWrite(B, HIGH);
  	digitalWrite(C, HIGH);
  	digitalWrite(D, HIGH);
	digitalWrite(E, LOW);
	digitalWrite(F, LOW);
	digitalWrite(G, HIGH);
	digitalWrite(DP, HIGH);
}

void four()
{
	digitalWrite(A, LOW);
  	digitalWrite(B, HIGH);
  	digitalWrite(C, HIGH);
  	digitalWrite(D, LOW);
	digitalWrite(E, LOW);
	digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
	digitalWrite(DP, LOW);
}

void five()
{
	digitalWrite(A, HIGH);
  	digitalWrite(B, LOW);
  	digitalWrite(C, HIGH);
  	digitalWrite(D, HIGH);
	digitalWrite(E, LOW);
	digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
	digitalWrite(DP, LOW);
}

void six()
{
	digitalWrite(A, HIGH);
  	digitalWrite(B, LOW);
  	digitalWrite(C, HIGH);
  	digitalWrite(D, HIGH);
	digitalWrite(E, HIGH);
	digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
	digitalWrite(DP, LOW);
}

void seven()
{
	digitalWrite(A, HIGH);
  	digitalWrite(B, HIGH);
  	digitalWrite(C, HIGH);
  	digitalWrite(D, LOW);
	digitalWrite(E, LOW);
	digitalWrite(F, LOW);
	digitalWrite(G, LOW);
	digitalWrite(DP, HIGH);
}

void eight()
{
	digitalWrite(A, HIGH);
  	digitalWrite(B, HIGH);
  	digitalWrite(C, HIGH);
  	digitalWrite(D, HIGH);
	digitalWrite(E, HIGH);
	digitalWrite(F, HIGH);
	digitalWrite(G, HIGH);
	digitalWrite(DP, HIGH);
}

void setup()
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(DP, OUTPUT);

}

void loop()
{
  	zero();
  	delay(1000);
	one();
    delay(1000);
  	two();
    delay(1000);
  	three();
    delay(1000);
  	four();
    delay(1000);
  	five();
    delay(1000);
  	five();
    delay(1000);
  	six();
    delay(1000);
  	seven();
    delay(1000);  	
  	eight();
    delay(1000);
}