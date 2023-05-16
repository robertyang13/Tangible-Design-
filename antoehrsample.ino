// #include <FastLED.h>
// #define NUM_LEDS 256
// #define DATA_PIN 11
// #include "pitches.h"
// String inpt = "";
// char val;
// const byte numChars = 32;
// char receivedChars[numChars]; 
// // char[] receivedChars = new char[32];   // an array to store the received data
// boolean newData = false;
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
//   // Serial.println("LLLjj");
//   // receivedChars[0] = 'l';
//   // Serial.println(receivedChars[0]);

//   // Serial.println("pppp");
//   // Serial.println(receivedChars[0]);
// }

// void loop() {
//   lightupall();
//   FastLED.clear();
// }
// void recvWithEndMarker() {
//     static byte ndx = 0;
//     char endMarker = '\n';
//     char rc;
//     if (Serial.available()) {
//     for (int jj = 0; jj < 32; jj++) {
//           receivedChars[jj] = "";
//     }
//     while (Serial.available() > 0 && newData == false) {
//         rc = Serial.read();

//         if (rc != endMarker) {
//             receivedChars[ndx] = rc;
//             ndx++;
//             if (ndx >= numChars) {
//                 ndx = numChars - 1;
//             }
//         }
//         else {
//             receivedChars[ndx] = '\0'; // terminate the string
//             ndx = 0;
//             newData = true;
//         }
//     }
//   }
// }
// void lightupall () {
//   leds[0] = CRGB::Black;
//   FastLED.clear();
//   FastLED.show();
//   // int value1 = digitalRead(5);
//   // int value2 = digitalRead(12);
//   int value3 = digitalRead(3);
//   int value4 = digitalRead(4);
//   int value5 = digitalRead(2);

//   int j = random(-2, 2);
//   if (j == 0) {
//     j = 1;
//   }
//   for (int i = random(1, 255); i < 256 && i >= 0; i+=j) {
//     //inpt = "";
//     // if (Serial.available()) {
//     //   val = Serial.read();
//     //   // Serial.read() only gets one char even if string is passed
//     // } 
//     // if (inpt == 100) {
//     //   FastLED.show();
//     //   FastLED.clear();
//     //   digitalWrite(5, LOW);
//     //   digitalWrite(11, LOW);
//     // }

//     recvWithEndMarker();
//     boolean contains = false;
//     for (char c : receivedChars) {
//     if (c == 'a') {
//       //  Serial.print("e");
//         contains = true;
//         break;
//       }
//     }
//     boolean contains100 = false;
//     for (char c : receivedChars) {
//     if (c == '1') {
//      //   Serial.print("ff");
//         contains100 = true;
//         break;
//       }
//     }
//     if (contains100) {
//       // for (int jj = 0; jj < 32; jj++) {
//       //   if (receivedChars[jj] = 'a'){
//       //     receivedChars[jj] = "";
//       //   }
//       // }
//       // receivedChars.find('a');
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//       digitalWrite(5, LOW);
//       digitalWrite(11, LOW);
//       digitalWrite(13, HIGH);
//       delay(500);
//       digitalWrite(13, LOW);
//       delay(500);
//     }
//     if (contains) {
//       digitalWrite(5, HIGH);
//       digitalWrite(11, HIGH); // sets the digital pin 13 on
//       // delay(1000);            // waits for a second    
//       //Serial.print("S");
//       leds[(i * 10) % 256] = CRGB::Violet;
//       leds[((i-1) * 10) % 256] = CRGB::Violet;
//       leds[((i-2) * 10) % 256] = CRGB::Violet;
//       leds[((i-3) * 10) % 256] = CRGB::Violet;
//       // digitalWrite(5, LOW);
//       digitalWrite(11, LOW);  // sets the digital pin 13 off
//       // delay(50);  
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//     } 
//     boolean contains2 = false;
//     for (char c2 : receivedChars) {
//     if (c2 == 'b') {
//         contains2 = true;
//         break;
//       }
//     }
//     if (contains2) {
//       int jj = random(-2, 2);
//       digitalWrite(12, HIGH);
//       digitalWrite(11, HIGH); // sets the digital pin 13 on
//       // delay(1000);            // waits for a second    
//       //Serial.print("D");
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
//     // if (value1 == LOW && value2 == LOW && value3 == LOW && value4 == LOW && value5 == LOW) {
//     //   FastLED.clear();
//     //   FastLED.show();
//     //   digitalWrite(11, LOW);
//     // // do this now if serial not available!
//     // }
//     // value1 = digitalRead(5);
//     // value2 = digitalRead(12);
//     value3 = digitalRead(3);
//     value4 = digitalRead(4);
//     value5 = digitalRead(2);
//   }

// }




