#include <Arduino.h>
#ifndef LED_BUILTIN
#define LED_BUILTIN 13
#endif


const char text[] = "penis";

void setup() {
	Serial.begin(9600);
	while (!Serial);
}

void loop() {
	// send UTF-8 string
	Serial.println(text);

	Serial.println("\n");

	delay(1000);
}