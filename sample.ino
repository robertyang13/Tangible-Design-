


// #include <FastLED.h>
// #define NUM_LEDS 256
// #define DATA_PIN 11
// #include "pitches.h"
// int inpt = 9999;
// CRGB leds[NUM_LEDS];
// CRGB leds2[NUM_LEDS];
// void setup() {
//   FastLED.addLeds<WS2812,DATA_PIN,RGB>(leds,NUM_LEDS);
//   FastLED.addLeds<WS2812,6,RGB>(leds2,NUM_LEDS);
//   FastLED.setBrightness(150);
//   randomSeed(analogRead(0));
//   // put your setup code here, to run once:
//   pinMode(5, INPUT);
//   pinMode(12, INPUT);
//   pinMode(3, INPUT);
//   pinMode(4, INPUT);
//   pinMode(2, INPUT);
//   pinMode(13, OUTPUT);
//   Serial.begin(9600);
// }

// void loop() {

//   lightupall();

//   FastLED.clear();
// }
// void lightupall () {
//   leds[0] = CRGB::Black;
//   FastLED.clear();
//   FastLED.show();
//   int value1 = digitalRead(5);
//   int value2 = digitalRead(12);
//   int value3 = digitalRead(3);
//   int value4 = digitalRead(4);
//   int value5 = digitalRead(2);

//   int j = random(-2, 2);
//   if (j == 0) {
//     j = 1;
//   }
//   for (int i = random(1, 255); i < 256 && i >= 0; i+=j) {
//     if (Serial.available()) {
//       inpt = Serial.read();
//       // Serial.read() only gets one char even if string is passed
//     }  else {
//       // inpt = 9999;
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//       digitalWrite(5, LOW);
//       digitalWrite(11, LOW);
//       // digitalWrite(13, HIGH);
//       // delay(500);
//       // digitalWrite(13, LOW);
//       // delay(500);
//     }
//     // if (inpt != 0) {
//     //   FastLED.show();
//     //   FastLED.clear();
//     //   FastLED.show();
//     //   digitalWrite(5, LOW);
//     //   digitalWrite(11, LOW);
//     //   digitalWrite(13, HIGH);
//     //   delay(500);
//     //   digitalWrite(13, LOW);
//     //   delay(500);
//     // }
//     if (inpt == 0) {
//       digitalWrite(5, HIGH);
//       digitalWrite(11, HIGH); // sets the digital pin 13 on
//       // delay(1000);            // waits for a second    
//       Serial.print("S");
//       leds[(i * 10) % 256] = CRGB::Violet;
//       leds[((i-1) * 10) % 256] = CRGB::Violet;
//       leds[((i-2) * 10) % 256] = CRGB::Violet;
//       leds[((i-3) * 10) % 256] = CRGB::Violet;
//       digitalWrite(5, LOW);
//       digitalWrite(11, LOW);  // sets the digital pin 13 off
//       // delay(50);  
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//     } 
//     if (value2 == HIGH) {
//       int jj = random(-2, 2);
//       digitalWrite(11, HIGH); // sets the digital pin 13 on
//       // delay(1000);            // waits for a second    
//       Serial.print("D");
//       if (i <= 128) {
//         leds[(16 * (i) + i) % 256] = CRGB::Green;
//         leds[(16 * (i+1) + i) % 256] = CRGB::Green;
//         leds[(16 * (i+2) + i) % 256] = CRGB::Green;
//         leds[(16 * (i+3) + i) % 256] = CRGB::Green;
//         digitalWrite(11, LOW);  // sets the digital pin 13 off
//         // delay(50);  
//         FastLED.show();
//         FastLED.clear();
//         FastLED.show();
//       } else {
//         leds[(16 * (i) - i) % 256] = CRGB::Green;
//         leds[(16 * (i-1) - i) % 256] = CRGB::Green;
//         leds[(16 * (i-2) - i) % 256] = CRGB::Green;
//         leds[(16 * (i-3) - i) % 256] = CRGB::Green;
//         digitalWrite(11, LOW);  // sets the digital pin 13 off
//         // delay(50);  
//         FastLED.show();
//         FastLED.clear();
//         FastLED.show();
//       }
//     }
//     if (value3 == HIGH) {
//       int jj = random(-2, 2);
//       digitalWrite(11, HIGH); // sets the digital pin 13 on
//       // delay(1000);            // waits for a second    
//       Serial.print("D");
//       if (i <= 64) {
//         leds[(i - 3) % 256] = CRGB::Red;
//         leds[(i - 6) % 256] = CRGB::Red;
//         leds[(i - 9) % 256] = CRGB::Red;
//         leds[(i - 12) % 256] = CRGB::Red;
//         digitalWrite(11, LOW);  // sets the digital pin 13 off
//         // delay(50);  
//         FastLED.show();
//         FastLED.clear();
//         FastLED.show();
//       } else if (i <= 128) {
//         leds[(256 - i - 3) % 256] = CRGB::Red;
//         leds[(256 - i - 6) % 256] = CRGB::Red;
//         leds[(256 - i - 9) % 256] = CRGB::Red;
//         leds[(256 - i - 12) % 256] = CRGB::Red;
//         digitalWrite(11, LOW);  // sets the digital pin 13 off
//         // delay(50);  
//         FastLED.show();
//         FastLED.clear();
//         FastLED.show();
//       } else if (i <= 192) {
//         leds[(i - 4) % 256] = CRGB::Red;
//         leds[(i - 8) % 256] = CRGB::Red;
//         leds[(i - 12) % 256] = CRGB::Red;
//         leds[(i - 16) % 256] = CRGB::Red;
//         digitalWrite(11, LOW);  // sets the digital pin 13 off
//         // delay(50);  
//         FastLED.show();
//         FastLED.clear();
//         FastLED.show();
//       } else {
//         leds[(256 - i - 4) % 256] = CRGB::Red;
//         leds[(256 - i - 8) % 256] = CRGB::Red;
//         leds[(256 - i - 12) % 256] = CRGB::Red;
//         leds[(256 - i - 16) % 256] = CRGB::Red;
//         digitalWrite(11, LOW);  // sets the digital pin 13 off
//         // delay(50);  
//         FastLED.show();
//         delay(5);
//         FastLED.clear();
//         FastLED.show();
//       }
//     }
//     if (value4 == HIGH) {
//       int jj = random(-2, 2);
//       digitalWrite(11, HIGH); // sets the digital pin 13 on
//       // delay(1000);            // waits for a second    
//       Serial.print("D");
//       leds[i + 10 % 256] = CRGB::Blue;
//       leds[round(pow(i, 1)) % 256] = CRGB::Blue;
//       leds[round(pow(i, 2)) % 256] = CRGB::Blue;
//       leds[round(pow(i, 3)) % 256] = CRGB::Blue;
//       digitalWrite(11, LOW);  // sets the digital pin 13 off
//       // delay(50);  
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//     }
//     if (value5 == HIGH) {
//       int jj = random(-2, 2);
//       digitalWrite(11, HIGH); // sets the digital pin 13 on
//       // delay(1000);            // waits for a second    
//       Serial.print("D");
//       leds[(i * 3 + 1) % 256] = CRGB::Orange;
//       leds[(i * 3) % 256] = CRGB::Orange;
//       leds[(i * 2 + 1) % 256] = CRGB::Orange;
//       leds[(i * 2) % 256] = CRGB::Orange;
//       leds[(i * 4 + 1) % 256] = CRGB::Orange;
//       leds[(i * 4) % 256] = CRGB::Orange;
//       digitalWrite(11, LOW);  // sets the digital pin 13 off
//       // delay(50);  
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//     }
//     if (value1 == LOW && value2 == LOW && value3 == LOW && value4 == LOW && value5 == LOW) {
//       FastLED.clear();
//       FastLED.show();
//       digitalWrite(11, LOW);

//     }
//     value1 = digitalRead(5);
//     value2 = digitalRead(12);
//     value3 = digitalRead(3);
//     value4 = digitalRead(4);
//     value5 = digitalRead(2);
//   }

// }




