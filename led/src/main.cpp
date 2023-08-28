/**
 * @file main.cpp
 * @author Krisna Pranav aka (krishpranav)
 * @brief open satellite LED functioalities.
 * @version 1.0
 * @date 2023-08-28
 * 
 * @copyright Copyright (c) 2023 Krisna Pranav, OpenSatelliteNetwork Developers
 * 
 */

#include <Arduino.h>

#define LED_PIN 9 // LED_PIN

/// @breif: setup
void setup() {
    Serial.begin(9600);        
    pinMode(LED_PIN, OUTPUT);
}

/// @brief loop
void loop()  {
	
  	digitalWrite(LED_PIN, HIGH);   

  	Serial.println ("On");  
  	delay(500);                       
    
  	digitalWrite(LED_PIN, LOW);    
  	Serial.println ("Off");

  	delay(500);                       
} 