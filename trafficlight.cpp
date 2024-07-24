int led_green = 0; // the green LED is connected to Pin 0
int led_yellow = 1; // the yellow LED is connected to Pin 1
int led_red = 2; // the red LED is connected to Pin 2

void setup() {
	// set up all the LEDs as OUTPUT
	pinMode(led_red, OUTPUT);
	pinMode(led_yellow, OUTPUT);
	pinMode(led_green, OUTPUT);
}

void loop() {
	// turn the green LED on the other LEDs off
  	digitalWrite(led_red, LOW);
  	digitalWrite(led_yellow, LOW);
 	digitalWrite(led_green, HIGH);
  	delay(2000); // wait for 2 seconds
  
	// turn the yellow LED on the other LEDs off
  	digitalWrite(led_red, LOW);
  	digitalWrite(led_yellow, HIGH);
 	digitalWrite(led_yellow, LOW);
  	delay(2000); // wait for 2 seconds	
  
	// turn the yellow LED on the other LEDs off
  	digitalWrite(led_red, HIGH);
  	digitalWrite(led_yellow, LOW);
 	digitalWrite(led_yellow, LOW);
  	delay(2000); // wait for 2 seconds
}