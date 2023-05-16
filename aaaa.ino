// #include <FastLED.h>
// #define NUM_LEDS 256
// #define DATA_PIN 11
// #include "pitches.h"
// String inpt = "";
// char val;
// const byte numChars = 40;
// char receivedChars[numChars]; 
// // char[] receivedChars = new char[32];   // an array to store the received data
// // ONE ISSUE IS THAT IF THERE ARE 64+ SERIAL READS THEN ALL LIGHTS WILL BREAK
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
//   // pinMode(9, INPUT);
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
//     while (Serial.available() > 0 && newData == false) {
//         rc = Serial.read();

//         if (rc != endMarker) {
//             receivedChars[ndx] = rc;
//             ndx++;
//             if (ndx >= numChars) {
//                 // ndx = numChars - 1;
//                 ndx = 0;
//             }
//         }
//         else {
//             receivedChars[ndx] = '\0'; // terminate the string
//             ndx = 0;
//             newData = true;
//         }
//     }
//   bool switch1 = false;
//   bool switch2 = false;
//   bool switch3 = false;
//   bool switch4 = false;
//   bool switch5 = false;
//   bool switch6 = false;
//   bool switch7 = false;
//   bool switch8 = false;
//   bool switch9 = false;
//   bool switch10 = false;
//   bool switch11 = false;
//   bool switch12 = false;
//   bool switch13 = false;
//   bool switch14 = false;
//   bool switch15 = false;
//   bool switch16 = false;
//   bool switch17 = false;
//   bool switch18 = false;
//   bool switch19 = false;
//   bool switch20 = false;
//   bool switch21 = false;
//   bool switch22 = false;
//   bool switch23 = false;
//   bool switch24 = false;
//   bool switch25 = false;
//   for (int jj = 0; jj < 40; jj++) {
//       if (receivedChars[jj] == '1') {
//         switch1 = true;
//       } 
//       else if (receivedChars[jj] == '2') {
//         switch2 = true;
//       }
//       else if (receivedChars[jj] == '3') {
//         switch3 = true;
//       } 
//       else if (receivedChars[jj] == '4') {
//         switch4 = true;
//       }
//       else if (receivedChars[jj] == '5') {
//         switch5 = true;
//       } 
//       else if (receivedChars[jj] == '6') {
//         switch6 = true;
//       }
//       else if (receivedChars[jj] == '7') {
//         switch7 = true;
//       } 
//       else if (receivedChars[jj] == '8') {
//         switch8 = true;
//       }
//       else if (receivedChars[jj] == 'A') {
//         switch9 = true;
//       } 
//       else if (receivedChars[jj] == '9') {
//         switch10 = true;
//       }
//       else if (receivedChars[jj] == 'B') {
//         switch11 = true;
//       } 
//       else if (receivedChars[jj] == 'C') {
//         switch12 = true;
//       }
//       else if (receivedChars[jj] == 'D') {
//         switch13 = true;
//       } 
//       else if (receivedChars[jj] == 'E') {
//         switch14 = true;
//       }
//       else if (receivedChars[jj] == 'F') {
//         switch15 = true;
//       } 
//       else if (receivedChars[jj] == 'G') {
//         switch16 = true;
//       }
//       else if (receivedChars[jj] == 'H') {
//         switch17 = true;
//       }
//       else if (receivedChars[jj] == 'I') {
//         switch18 = true;
//       } 
//       else if (receivedChars[jj] == 'J') {
//         switch19 = true;
//       }
//       else if (receivedChars[jj] == 'K') {
//         switch20 = true;
//       } 
//       else if (receivedChars[jj] == 'L') {
//         switch21 = true;
//       }
//       else if (receivedChars[jj] == 'M') {
//         switch22 = true;
//       } 
//       else if (receivedChars[jj] == 'N') {
//         switch23 = true;
//       }
//       else if (receivedChars[jj] == 'O') {
//         switch24 = true;
//       } 
//       else if (receivedChars[jj] == 'P') {
//         switch25 = true;
//       }
      
//   }
//   for (int jj = 0; jj < 40; jj++) {
//       if (receivedChars[jj] == 'a' && switch1) {
//         receivedChars[jj] = "";
//       } 
//       if (receivedChars[jj] == 'b' && switch2) {
//         receivedChars[jj] = "";
//       }
//       if (receivedChars[jj] == '1' && switch1) {
//         receivedChars[jj] = "";
//       } 
//       if (receivedChars[jj] == '2' && switch2) {
//         receivedChars[jj] = "";
//       }
//       if (receivedChars[jj] == 'c' && switch3) {
//         receivedChars[jj] = "";
//       } 
//       if (receivedChars[jj] == 'd' && switch4) {
//         receivedChars[jj] = "";
//       }
//       if (receivedChars[jj] == '3' && switch3) {
//         receivedChars[jj] = "";
//       } 
//       if (receivedChars[jj] == '4' && switch4) {
//         receivedChars[jj] = "";
//       }
//       if (receivedChars[jj] == 'e' && switch5) {
//         receivedChars[jj] = "";
//       } 
//       if (receivedChars[jj] == 'f' && switch6) {
//         receivedChars[jj] = "";
//       }
//       if (receivedChars[jj] == '5' && switch5) {
//         receivedChars[jj] = "";
//       } 
//       if (receivedChars[jj] == '6' && switch6) {
//         receivedChars[jj] = "";
//       }
//       if (receivedChars[jj] == 'g' && switch7) {
//         receivedChars[jj] = "";
//       } 
//       if (receivedChars[jj] == 'h' && switch8) {
//         receivedChars[jj] = "";
//       }
//       if (receivedChars[jj] == '7' && switch7) {
//         receivedChars[jj] = "";
//       } 
//       if (receivedChars[jj] == '8' && switch8) {
//         receivedChars[jj] = "";
//       }
//       if (receivedChars[jj] == 'i' && switch9) {
//         receivedChars[jj] = "";
//       } 
//       if (receivedChars[jj] == 'j' && switch10) {
//         receivedChars[jj] = "";
//       }
//       if (receivedChars[jj] == 'A' && switch9) {
//         receivedChars[jj] = "";
//       } 
//       if (receivedChars[jj] == '9' && switch10) {
//         receivedChars[jj] = "";
//       }
//       if (receivedChars[jj] == 'k' && switch11) {
//         receivedChars[jj] = "";
//       } 
//       if (receivedChars[jj] == 'l' && switch12) {
//         receivedChars[jj] = "";
//       }
//       if (receivedChars[jj] == 'B' && switch11) {
//         receivedChars[jj] = "";
//       } 
//       if (receivedChars[jj] == 'C' && switch12) {
//         receivedChars[jj] = "";
//       }
//       if (receivedChars[jj] == 'm' && switch13) {
//         receivedChars[jj] = "";
//       } 
//       if (receivedChars[jj] == 'n' && switch14) {
//         receivedChars[jj] = "";
//       }
//       if (receivedChars[jj] == 'D' && switch13) {
//         receivedChars[jj] = "";
//       } 
//       if (receivedChars[jj] == 'E' && switch14) {
//         receivedChars[jj] = "";
//       }
//       if (receivedChars[jj] == 'o' && switch15) {
//         receivedChars[jj] = "";
//       } 
//       if (receivedChars[jj] == 'p' && switch16) {
//         receivedChars[jj] = "";
//       }
//       if (receivedChars[jj] == 'F' && switch15) {
//         receivedChars[jj] = "";
//       } 
//       if (receivedChars[jj] == 'G' && switch16) {
//         receivedChars[jj] = "";
//       }
//       if (receivedChars[jj] == 'q' && switch17) {
//         receivedChars[jj] = "";
//       } 
//       if (receivedChars[jj] == 'r' && switch18) {
//         receivedChars[jj] = "";
//       }
//       if (receivedChars[jj] == 'H' && switch17) {
//         receivedChars[jj] = "";
//       } 
//       if (receivedChars[jj] == 'I' && switch18) {
//         receivedChars[jj] = "";
//       }
//       if (receivedChars[jj] == 's' && switch19) {
//         receivedChars[jj] = "";
//       } 
//       if (receivedChars[jj] == 't' && switch20) {
//         receivedChars[jj] = "";
//       }
//       if (receivedChars[jj] == 'J' && switch19) {
//         receivedChars[jj] = "";
//       } 
//       if (receivedChars[jj] == 'K' && switch20) {
//         receivedChars[jj] = "";
//       }
//       if (receivedChars[jj] == 'u' && switch21) {
//         receivedChars[jj] = "";
//       } 
//       if (receivedChars[jj] == 'v' && switch22) {
//         receivedChars[jj] = "";
//       }
//       if (receivedChars[jj] == 'L' && switch21) {
//         receivedChars[jj] = "";
//       } 
//       if (receivedChars[jj] == 'M' && switch22) {
//         receivedChars[jj] = "";
//       }
//       if (receivedChars[jj] == 'w' && switch23) {
//         receivedChars[jj] = "";
//       } 
//       if (receivedChars[jj] == 'x' && switch24) {
//         receivedChars[jj] = "";
//       }
//       if (receivedChars[jj] == 'N' && switch23) {
//         receivedChars[jj] = "";
//       } 
//       if (receivedChars[jj] == 'O' && switch24) {
//         receivedChars[jj] = "";
//       }
//       if (receivedChars[jj] == 'y' && switch25) {
//         receivedChars[jj] = "";
//       }
//       if (receivedChars[jj] == 'P' && switch25) {
//         receivedChars[jj] = "";
//       } 
//   }
// }
// void lightupall () {
//   leds[0] = CRGB::Black;
//   FastLED.clear();
//   FastLED.show();
//   // int value1 = digitalRead(5);
//   // int value2 = digitalRead(12);
//   // int value3 = digitalRead(3);
//   // int value4 = digitalRead(4);
//   // int value5 = digitalRead(2);

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
//       // digitalWrite(5, LOW);
//       digitalWrite(11, LOW);
//       digitalWrite(13, HIGH);
//       delay(500);
//       digitalWrite(13, LOW);
//       delay(500);
//     }
//     if (contains) {
//       // digitalWrite(5, HIGH);
//       digitalWrite(11, HIGH); // sets the digital pin 13 on
//       // delay(1000);            // waits for a second    
//       //Serial.print("S");
//       // leds[(i * 10) % 256] = CRGB::Violet;
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
//     boolean contains102 = false;
//     for (char c : receivedChars) {
//     if (c == '2') {
//      //   Serial.print("ff");
//         contains102 = true;
//         break;
//       }
//     }
//     if (contains102) {
//       // for (int jj = 0; jj < 32; jj++) {
//       //   if (receivedChars[jj] = 'a'){
//       //     receivedChars[jj] = "";
//       //   }
//       // }
//       // receivedChars.find('a');
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//       digitalWrite(11, LOW);
//       digitalWrite(13, HIGH);
//       delay(500);
//       digitalWrite(13, LOW);
//       delay(500);
//     }
//     if (contains2) {
//       int jj = random(-2, 2);
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
//     boolean contains3 = false;
//     for (char c3 : receivedChars) {
//     if (c3 == 'c') {
//         contains3 = true;
//         break;
//       }
//     }
//     boolean contains103 = false;
//     for (char c : receivedChars) {
//     if (c == '3') {
//      //   Serial.print("ff");
//         contains103 = true;
//         break;
//       }
//     }
//     if (contains103) {
//       // for (int jj = 0; jj < 32; jj++) {
//       //   if (receivedChars[jj] = 'a'){
//       //     receivedChars[jj] = "";
//       //   }
//       // }
//       // receivedChars.find('a');
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//       digitalWrite(11, LOW);
//       digitalWrite(13, HIGH);
//       delay(500);
//       digitalWrite(13, LOW);
//       delay(500);
//     }
//     if (contains3) {
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
//     boolean contains4 = false;
//     for (char c4 : receivedChars) {
//     if (c4 == 'd') {
//         contains4 = true;
//         break;
//       }
//     }
//     boolean contains104 = false;
//     for (char c : receivedChars) {
//     if (c == '4') {
//      //   Serial.print("ff");
//         contains104 = true;
//         break;
//       }
//     }
//     if (contains104) {
//       // for (int jj = 0; jj < 32; jj++) {
//       //   if (receivedChars[jj] = 'a'){
//       //     receivedChars[jj] = "";
//       //   }
//       // }
//       // receivedChars.find('a');
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//       digitalWrite(11, LOW);
//       digitalWrite(13, HIGH);
//       delay(500);
//       digitalWrite(13, LOW);
//       delay(500);
//     }
//     if (contains4) {
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
//     //START

    
//     boolean contains5 = false;
//     for (char c5 : receivedChars) {
//     if (c5 == 'e') {
//         contains5 = true;
//         break;
//       }
//     }
//     boolean contains105 = false;
//     for (char c : receivedChars) {
//     if (c == '5') {
//      //   Serial.print("ff");
//         contains105 = true;
//         break;
//       }
//     }
//     if (contains105) {
//       // for (int jj = 0; jj < 32; jj++) {
//       //   if (receivedChars[jj] = 'a'){
//       //     receivedChars[jj] = "";
//       //   }
//       // }
//       // receivedChars.find('a');
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//       digitalWrite(11, LOW);
//       delay(500);
//     }
//     if (contains5) {
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
//     boolean contains6 = false;
//     for (char c6 : receivedChars) {
//     if (c6 == 'f') {
//         contains6 = true;
//         break;
//       }
//     }
//     boolean contains106 = false;
//     for (char c : receivedChars) {
//     if (c == '6') {
//      //   Serial.print("ff");
//         contains106 = true;
//         break;
//       }
//     }
//     if (contains106) {
//       // for (int jj = 0; jj < 32; jj++) {
//       //   if (receivedChars[jj] = 'a'){
//       //     receivedChars[jj] = "";
//       //   }
//       // }
//       // receivedChars.find('a');
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//       digitalWrite(11, LOW);
//       delay(500);
//     }
//     if (contains6) {
//       int jj = random(-2, 2);
//       digitalWrite(11, HIGH); // sets the digital pin 13 on
//       // delay(1000);            // waits for a second    
//       // leds[(i * 6 + 1) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 2) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 3) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 4) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 5) % 256] = CRGB::Indigo;
//       // leds[(i * 3 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 3) % 256] = CRGB::Maroon;
//       leds[(i * 2 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 2) % 256] = CRGB::Maroon;
//       leds[(i * 4 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 4) % 256] = CRGB::Maroon;
//       digitalWrite(11, LOW);  // sets the digital pin 13 off
//       // delay(50);  
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//     }
//     boolean contains7 = false;
//     for (char c7 : receivedChars) {
//     if (c7 == 'g') {
//         contains7 = true;
//         break;
//       }
//     }
//     boolean contains107 = false;
//     for (char c : receivedChars) {
//     if (c == '7') {
//      //   Serial.print("ff");
//         contains107 = true;
//         break;
//       }
//     }
//     if (contains107) {
//       // for (int jj = 0; jj < 32; jj++) {
//       //   if (receivedChars[jj] = 'a'){
//       //     receivedChars[jj] = "";
//       //   }
//       // }
//       // receivedChars.find('a');
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//       digitalWrite(11, LOW);
//       delay(500);
//     }
//     if (contains7) {
//       int jj = random(-2, 2);
//       digitalWrite(11, HIGH); // sets the digital pin 13 on
//       // delay(1000);            // waits for a second    
//       // leds[(i * 6 + 1) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 2) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 3) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 4) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 5) % 256] = CRGB::Indigo;
//       // leds[(i * 3 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 3) % 256] = CRGB::Maroon;
//       leds[(i * 2 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 2) % 256] = CRGB::Maroon;
//       leds[(i * 4 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 4) % 256] = CRGB::Maroon;
//       digitalWrite(11, LOW);  // sets the digital pin 13 off
//       // delay(50);  
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//     }
//     boolean contains8 = false;
//     for (char c8 : receivedChars) {
//     if (c8 == 'h') {
//         contains8 = true;
//         break;
//       }
//     }
//     boolean contains108 = false;
//     for (char c : receivedChars) {
//     if (c == '8') {
//      //   Serial.print("ff");
//         contains108 = true;
//         break;
//       }
//     }
//     if (contains108) {
//       // for (int jj = 0; jj < 32; jj++) {
//       //   if (receivedChars[jj] = 'a'){
//       //     receivedChars[jj] = "";
//       //   }
//       // }
//       // receivedChars.find('a');
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//       digitalWrite(11, LOW);
//       delay(500);
//     }
//     if (contains8) {
//         digitalWrite(13, HIGH);
//         delay(500);
//         digitalWrite(13, LOW);
//         delay(500);
//       int jj = random(-2, 2);
//       digitalWrite(11, HIGH); // sets the digital pin 13 on
//       // delay(1000);            // waits for a second    
//       // leds[(i * 6 + 1) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 2) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 3) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 4) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 5) % 256] = CRGB::Indigo;
//       // leds[(i * 3 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 3) % 256] = CRGB::Maroon;
//       leds[(i * 2 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 2) % 256] = CRGB::Maroon;
//       leds[(i * 4 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 4) % 256] = CRGB::Maroon;
//       digitalWrite(11, LOW);  // sets the digital pin 13 off
//       // delay(50);  
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//     }

//     boolean contains10 = false;
//     for (char c10 : receivedChars) {
//     if (c10 == 'j') {
//         // digitalWrite(13, HIGH);
//         // delay(500);
//         // digitalWrite(13, LOW);
//         // delay(500);
//         contains10 = true;
//         break;
//       }
//     }
//     boolean contains110 = false;
//     for (char c : receivedChars) {
//     if (c == '9') {
//      //   Serial.print("ff");
//         contains110 = true;
//         break;
//       }
//     }
//     if (contains110) {
//       // for (int jj = 0; jj < 32; jj++) {
//       //   if (receivedChars[jj] = 'a'){
//       //     receivedChars[jj] = "";
//       //   }
//       // }
//       // receivedChars.find('a');
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//       digitalWrite(11, LOW);
//       delay(500);
//     }
//     if (contains10) {
//       int jj = random(-2, 2);
//       digitalWrite(11, HIGH); // sets the digital pin 13 on
//       // delay(1000);            // waits for a second    
//       // leds[(i * 6 + 1) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 2) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 3) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 4) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 5) % 256] = CRGB::Indigo;
//       // leds[(i * 3 + 1) % 256] = CRGB::Maroon;
//         leds[(16 * (i) + i) % 256] = CRGB::Green;
//         leds[(16 * (i+1) + i) % 256] = CRGB::Green;
//         leds[(16 * (i+2) + i) % 256] = CRGB::Green;
//         leds[(16 * (i+3) + i) % 256] = CRGB::Green;
//       digitalWrite(11, LOW);  // sets the digital pin 13 off
//       // delay(50);  
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//     }

//     boolean contains11 = false;
//     for (char c11 : receivedChars) {
//     if (c11 == 'k') {
//         contains11 = true;
//         // digitalWrite(13, HIGH);
//         // delay(500);
//         // digitalWrite(13, LOW);
//         // delay(500);
//         break;
//       }
//     }
//     boolean contains111 = false;
//     for (char c : receivedChars) {
//     if (c == 'B') {
//      //   Serial.print("ff");
//         contains111 = true;
//         break;
//       }
//     }
//     if (contains111) {
//       // for (int jj = 0; jj < 32; jj++) {
//       //   if (receivedChars[jj] = 'a'){
//       //     receivedChars[jj] = "";
//       //   }
//       // }
//       // receivedChars.find('a');
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//       digitalWrite(11, LOW);
//       delay(500);
//     }
//     if (contains11) {
//       // digitalWrite(13, HIGH);
//       // delay(500);
//       // digitalWrite(13, LOW);
//       // delay(500);
//       int jj = random(-2, 2);
//       digitalWrite(11, HIGH); // sets the digital pin 13 on
//       // delay(1000);            // waits for a second    
//       // leds[(i * 6 + 1) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 2) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 3) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 4) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 5) % 256] = CRGB::Indigo;
//       // leds[(i * 3 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 3 - 10) % 256] = CRGB::Blue;
//       leds[(i * 2 - 4) % 256] = CRGB::Blue;
//       leds[(i * 2 - 6) % 256] = CRGB::Blue;
//       leds[(i * 4 - 2) % 256] = CRGB::Blue;
//       leds[(i * 4 - 1) % 256] = CRGB::Blue;
//       digitalWrite(11, LOW);  // sets the digital pin 13 off
//       // delay(50);  
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//     }
//     boolean contains9 = false;
//     for (char c9 : receivedChars) {
//     if (c9 == 'i') {
//         contains9 = true;
//         break;
//       }
//     }
//     boolean contains109 = false;
//     for (char c : receivedChars) {
//     if (c == 'A') {
//      //   Serial.print("ff");
//         digitalWrite(13, HIGH);
//         delay(500);
//         digitalWrite(13, LOW);
//         delay(500);
//         contains109 = true;
//         break;
//       }
//     }
//     if (contains109) {
//       // for (int jj = 0; jj < 32; jj++) {
//       //   if (receivedChars[jj] = 'a'){
//       //     receivedChars[jj] = "";
//       //   }
//       // }
//       // receivedChars.find('a');
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//       digitalWrite(11, LOW);
//       delay(500);
//     }
//     if (contains9) {
//       // digitalWrite(13, HIGH);
//       // delay(500);
//       // digitalWrite(13, LOW);
//       // delay(500);
//       int jj = random(-2, 2);
//       digitalWrite(11, HIGH); // sets the digital pin 13 on
//       // delay(1000);            // waits for a second    
//       // leds[(i * 6 + 1) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 2) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 3) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 4) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 5) % 256] = CRGB::Indigo;
//       // leds[(i * 3 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 3) % 256] = CRGB::Maroon;
//       leds[(i * 2 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 2) % 256] = CRGB::Maroon;
//       leds[(i * 4 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 4) % 256] = CRGB::Maroon;
//       digitalWrite(11, LOW);  // sets the digital pin 13 off
//       // delay(50);  
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//     }
//     //END
//     // if (value1 == LOW && value2 == LOW && value3 == LOW && value4 == LOW && value5 == LOW) {
//     //   FastLED.clear();
//     //   FastLED.show();
//     //   digitalWrite(11, LOW);
//     // // do this now if serial not available!
//     // }
//     // value1 = digitalRead(5);
//     // value2 = digitalRead(12);
//     // value3 = digitalRead(3);
//     // value4 = digitalRead(4);
//     // value5 = digitalRead(2);
//     boolean contains12 = false;
//     for (char c12 : receivedChars) {
//     if (c12 == 'l') {
//         contains12 = true;
//         break;
//       }
//     }
//     boolean contains112 = false;
//     for (char c : receivedChars) {
//     if (c == 'C') {
//      //   Serial.print("ff");
//         contains112 = true;
//         break;
//       }
//     }
//     if (contains112) {
//       // for (int jj = 0; jj < 32; jj++) {
//       //   if (receivedChars[jj] = 'a'){
//       //     receivedChars[jj] = "";
//       //   }
//       // }
//       // receivedChars.find('a');
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//       digitalWrite(11, LOW);
//       delay(500);
//     }
//     if (contains12) {
//       // digitalWrite(13, HIGH);
//       // delay(500);
//       // digitalWrite(13, LOW);
//       // delay(500);
//       int jj = random(-2, 2);
//       digitalWrite(11, HIGH); // sets the digital pin 13 on
//       // delay(1000);            // waits for a second    
//       // leds[(i * 6 + 1) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 2) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 3) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 4) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 5) % 256] = CRGB::Indigo;
//       // leds[(i * 3 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 3) % 256] = CRGB::Maroon;
//       leds[(i * 2 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 2) % 256] = CRGB::Maroon;
//       leds[(i * 4 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 4) % 256] = CRGB::Maroon;
//       digitalWrite(11, LOW);  // sets the digital pin 13 off
//       // delay(50);  
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//     }
//     boolean contains13 = false;
//     for (char c13 : receivedChars) {
//     if (c13 == 'm') {
//         contains13 = true;
//         break;
//       }
//     }
//     boolean contains113 = false;
//     for (char c : receivedChars) {
//     if (c == 'D') {
//      //   Serial.print("ff");
//         contains113 = true;
//         break;
//       }
//     }
//     if (contains113) {
//       // for (int jj = 0; jj < 32; jj++) {
//       //   if (receivedChars[jj] = 'a'){
//       //     receivedChars[jj] = "";
//       //   }
//       // }
//       // receivedChars.find('a');
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//       digitalWrite(11, LOW);
//       delay(500);
//     }
//     if (contains13) {
//       // digitalWrite(13, HIGH);
//       // delay(500);
//       // digitalWrite(13, LOW);
//       // delay(500);
//       int jj = random(-2, 2);
//       digitalWrite(11, HIGH); // sets the digital pin 13 on
//       // delay(1000);            // waits for a second    
//       // leds[(i * 6 + 1) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 2) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 3) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 4) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 5) % 256] = CRGB::Indigo;
//       // leds[(i * 3 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 3) % 256] = CRGB::Maroon;
//       leds[(i * 2 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 2) % 256] = CRGB::Maroon;
//       leds[(i * 4 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 4) % 256] = CRGB::Maroon;
//       digitalWrite(11, LOW);  // sets the digital pin 13 off
//       // delay(50);  
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//     }
//     boolean contains14 = false;
//     for (char c14 : receivedChars) {
//     if (c14 == 'n') {
//         contains14 = true;
//         break;
//       }
//     }
//     boolean contains114 = false;
//     for (char c : receivedChars) {
//     if (c == 'E') {
//      //   Serial.print("ff");
//         contains114 = true;
//         break;
//       }
//     }
//     if (contains114) {
//       // for (int jj = 0; jj < 32; jj++) {
//       //   if (receivedChars[jj] = 'a'){
//       //     receivedChars[jj] = "";
//       //   }
//       // }
//       // receivedChars.find('a');
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//       digitalWrite(11, LOW);
//       delay(500);
//     }
//     if (contains14) {
//       // digitalWrite(13, HIGH);
//       // delay(500);
//       // digitalWrite(13, LOW);
//       // delay(500);
//       int jj = random(-2, 2);
//       digitalWrite(11, HIGH); // sets the digital pin 13 on
//       // delay(1000);            // waits for a second    
//       // leds[(i * 6 + 1) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 2) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 3) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 4) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 5) % 256] = CRGB::Indigo;
//       // leds[(i * 3 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 3) % 256] = CRGB::Maroon;
//       leds[(i * 2 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 2) % 256] = CRGB::Maroon;
//       leds[(i * 4 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 4) % 256] = CRGB::Maroon;
//       digitalWrite(11, LOW);  // sets the digital pin 13 off
//       // delay(50);  
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//     }
//     boolean contains15 = false;
//     for (char c15 : receivedChars) {
//     if (c15 == 'o') {
//         contains15 = true;
//         break;
//       }
//     }
//     boolean contains115 = false;
//     for (char c : receivedChars) {
//     if (c == 'F') {
//      //   Serial.print("ff");
//         contains115 = true;
//         break;
//       }
//     }
//     if (contains115) {
//       // for (int jj = 0; jj < 32; jj++) {
//       //   if (receivedChars[jj] = 'a'){
//       //     receivedChars[jj] = "";
//       //   }
//       // }
//       // receivedChars.find('a');
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//       digitalWrite(11, LOW);
//       delay(500);
//     }
//     if (contains15) {
//       // digitalWrite(13, HIGH);
//       // delay(500);
//       // digitalWrite(13, LOW);
//       // delay(500);
//       int jj = random(-2, 2);
//       digitalWrite(11, HIGH); // sets the digital pin 13 on
//       // delay(1000);            // waits for a second    
//       // leds[(i * 6 + 1) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 2) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 3) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 4) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 5) % 256] = CRGB::Indigo;
//       // leds[(i * 3 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 3) % 256] = CRGB::Maroon;
//       leds[(i * 2 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 2) % 256] = CRGB::Maroon;
//       leds[(i * 4 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 4) % 256] = CRGB::Maroon;
//       digitalWrite(11, LOW);  // sets the digital pin 13 off
//       // delay(50);  
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//     }
//     boolean contains16 = false;
//     for (char c16 : receivedChars) {
//     if (c16 == 'p') {
//         contains16 = true;
//         break;
//       }
//     }
//     boolean contains116 = false;
//     for (char c : receivedChars) {
//     if (c == 'G') {
//      //   Serial.print("ff");
//         contains116 = true;
//         break;
//       }
//     }
//     if (contains116) {
//       // for (int jj = 0; jj < 32; jj++) {
//       //   if (receivedChars[jj] = 'a'){
//       //     receivedChars[jj] = "";
//       //   }
//       // }
//       // receivedChars.find('a');
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//       digitalWrite(11, LOW);
//       delay(500);
//     }
//     if (contains16) {
//       // digitalWrite(13, HIGH);
//       // delay(500);
//       // digitalWrite(13, LOW);
//       // delay(500);
//       int jj = random(-2, 2);
//       digitalWrite(11, HIGH); // sets the digital pin 13 on
//       // delay(1000);            // waits for a second    
//       // leds[(i * 6 + 1) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 2) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 3) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 4) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 5) % 256] = CRGB::Indigo;
//       // leds[(i * 3 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 3) % 256] = CRGB::Maroon;
//       leds[(i * 2 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 2) % 256] = CRGB::Maroon;
//       leds[(i * 4 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 4) % 256] = CRGB::Maroon;
//       digitalWrite(11, LOW);  // sets the digital pin 13 off
//       // delay(50);  
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//     }
//     boolean contains17 = false;
//     for (char c17 : receivedChars) {
//     if (c17 == 'q') {
//         contains17 = true;
//         break;
//       }
//     }
//     boolean contains117 = false;
//     for (char c : receivedChars) {
//     if (c == 'H') {
//      //   Serial.print("ff");
//         contains117 = true;
//         break;
//       }
//     }
//     if (contains117) {
//       // for (int jj = 0; jj < 32; jj++) {
//       //   if (receivedChars[jj] = 'a'){
//       //     receivedChars[jj] = "";
//       //   }
//       // }
//       // receivedChars.find('a');
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//       digitalWrite(11, LOW);
//       delay(500);
//     }
//     if (contains17) {
//       // digitalWrite(13, HIGH);
//       // delay(500);
//       // digitalWrite(13, LOW);
//       // delay(500);
//       int jj = random(-2, 2);
//       digitalWrite(11, HIGH); // sets the digital pin 13 on
//       // delay(1000);            // waits for a second    
//       // leds[(i * 6 + 1) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 2) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 3) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 4) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 5) % 256] = CRGB::Indigo;
//       // leds[(i * 3 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 3) % 256] = CRGB::Maroon;
//       leds[(i * 2 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 2) % 256] = CRGB::Maroon;
//       leds[(i * 4 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 4) % 256] = CRGB::Maroon;
//       digitalWrite(11, LOW);  // sets the digital pin 13 off
//       // delay(50);  
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//     }
//     boolean contains18 = false;
//     for (char c18 : receivedChars) {
//     if (c18 == 'r') {
//         contains18 = true;
//         break;
//       }
//     }
//     boolean contains118 = false;
//     for (char c : receivedChars) {
//     if (c == 'I') {
//      //   Serial.print("ff");
//         contains118 = true;
//         break;
//       }
//     }
//     if (contains118) {
//       // for (int jj = 0; jj < 32; jj++) {
//       //   if (receivedChars[jj] = 'a'){
//       //     receivedChars[jj] = "";
//       //   }
//       // }
//       // receivedChars.find('a');
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//       digitalWrite(11, LOW);
//       delay(500);
//     }
//     if (contains18) {
//       // digitalWrite(13, HIGH);
//       // delay(500);
//       // digitalWrite(13, LOW);
//       // delay(500);
//       int jj = random(-2, 2);
//       digitalWrite(11, HIGH); // sets the digital pin 13 on
//       // delay(1000);            // waits for a second    
//       // leds[(i * 6 + 1) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 2) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 3) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 4) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 5) % 256] = CRGB::Indigo;
//       // leds[(i * 3 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 3) % 256] = CRGB::Maroon;
//       leds[(i * 2 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 2) % 256] = CRGB::Maroon;
//       leds[(i * 4 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 4) % 256] = CRGB::Maroon;
//       digitalWrite(11, LOW);  // sets the digital pin 13 off
//       // delay(50);  
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//     }
//     boolean contains19 = false;
//     for (char c19 : receivedChars) {
//     if (c19 == 's') {
//         contains19 = true;
//         break;
//       }
//     }
//     boolean contains119 = false;
//     for (char c : receivedChars) {
//     if (c == 'J') {
//      //   Serial.print("ff");
//         contains119 = true;
//         break;
//       }
//     }
//     if (contains119) {
//       // for (int jj = 0; jj < 32; jj++) {
//       //   if (receivedChars[jj] = 'a'){
//       //     receivedChars[jj] = "";
//       //   }
//       // }
//       // receivedChars.find('a');
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//       digitalWrite(11, LOW);
//       delay(500);
//     }
//     if (contains19) {
//       // digitalWrite(13, HIGH);
//       // delay(500);
//       // digitalWrite(13, LOW);
//       // delay(500);
//       int jj = random(-2, 2);
//       digitalWrite(11, HIGH); // sets the digital pin 13 on
//       // delay(1000);            // waits for a second    
//       // leds[(i * 6 + 1) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 2) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 3) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 4) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 5) % 256] = CRGB::Indigo;
//       // leds[(i * 3 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 3) % 256] = CRGB::Maroon;
//       leds[(i * 2 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 2) % 256] = CRGB::Maroon;
//       leds[(i * 4 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 4) % 256] = CRGB::Maroon;
//       digitalWrite(11, LOW);  // sets the digital pin 13 off
//       // delay(50);  
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//     }
//     boolean contains20 = false;
//     for (char c20 : receivedChars) {
//     if (c20 == 't') {
//         contains20 = true;
//         break;
//       }
//     }
//     boolean contains120 = false;
//     for (char c : receivedChars) {
//     if (c == 'K') {
//      //   Serial.print("ff");
//         contains120 = true;
//         break;
//       }
//     }
//     if (contains120) {
//       // for (int jj = 0; jj < 32; jj++) {
//       //   if (receivedChars[jj] = 'a'){
//       //     receivedChars[jj] = "";
//       //   }
//       // }
//       // receivedChars.find('a');
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//       digitalWrite(11, LOW);
//       delay(500);
//     }
//     if (contains20) {
//       // digitalWrite(13, HIGH);
//       // delay(500);
//       // digitalWrite(13, LOW);
//       // delay(500);
//       int jj = random(-2, 2);
//       digitalWrite(11, HIGH); // sets the digital pin 13 on
//       // delay(1000);            // waits for a second    
//       // leds[(i * 6 + 1) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 2) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 3) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 4) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 5) % 256] = CRGB::Indigo;
//       // leds[(i * 3 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 2) % 256] = CRGB::LawnGreen;
//       leds[(i * 2 + 1) % 256] = CRGB::LawnGreen;
//       leds[(i * 2) % 256] = CRGB::LawnGreen;
//       leds[(i * 4 + 1) % 256] = CRGB::LawnGreen;
//       leds[(i * 4) % 256] = CRGB::LawnGreen;
//       digitalWrite(11, LOW);  // sets the digital pin 13 off
//       // delay(50);  
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//     }
//     boolean contains21 = false;
//     for (char c21 : receivedChars) {
//     if (c21 == 'u') {
//         contains21 = true;
//         break;
//       }
//     }
//     boolean contains121 = false;
//     for (char c : receivedChars) {
//     if (c == 'L') {
//      //   Serial.print("ff");
//         contains121 = true;
//         break;
//       }
//     }
//     if (contains121) {
//       // for (int jj = 0; jj < 32; jj++) {
//       //   if (receivedChars[jj] = 'a'){
//       //     receivedChars[jj] = "";
//       //   }
//       // }
//       // receivedChars.find('a');
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//       digitalWrite(11, LOW);
//       delay(500);
//     }
//     if (contains21) {
//       // digitalWrite(13, HIGH);
//       // delay(500);
//       // digitalWrite(13, LOW);
//       // delay(500);
//       int jj = random(-2, 2);
//       digitalWrite(11, HIGH); // sets the digital pin 13 on
//       // delay(1000);            // waits for a second    
//       // leds[(i * 6 + 1) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 2) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 3) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 4) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 5) % 256] = CRGB::Indigo;
//       // leds[(i * 3 + 1) % 256] = CRGB::Maroon;
//       leds[(i * 16 + 12) % 256] = CRGB::Snow;
//       leds[(i * 16 + 24) % 256] = CRGB::Snow;
//       leds[(i * 16 + 36) % 256] = CRGB::Snow;
//       leds[(i * 16 + 48) % 256] = CRGB::Snow;
//       digitalWrite(11, LOW);  // sets the digital pin 13 off
//       // delay(50);  
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//     }
//     boolean contains22 = false;
//     for (char c22 : receivedChars) {
//     if (c22 == 'v') {
//         contains22 = true;
//         break;
//       }
//     }
//     boolean contains122 = false;
//     for (char c : receivedChars) {
//     if (c == 'M') {
//      //   Serial.print("ff");
//         contains122 = true;
//         break;
//       }
//     }
//     if (contains122) {
//       // for (int jj = 0; jj < 32; jj++) {
//       //   if (receivedChars[jj] = 'a'){
//       //     receivedChars[jj] = "";
//       //   }
//       // }
//       // receivedChars.find('a');
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//       digitalWrite(11, LOW);
//       delay(500);
//     }
//     if (contains22) {
//       // digitalWrite(13, HIGH);
//       // delay(500);
//       // digitalWrite(13, LOW);
//       // delay(500);
//       int jj = random(-2, 2);
//       digitalWrite(11, HIGH); // sets the digital pin 13 on
//       // delay(1000);            // waits for a second    
//       // leds[(i * 6 + 1) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 2) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 3) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 4) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 5) % 256] = CRGB::Indigo;
//       // leds[(i * 3 + 1) % 256] = CRGB::Maroon;
//       leds[(round(pow(i, 2)) + 2) % 256] = CRGB::PeachPuff;
//       leds[(round(pow(i, 2)) + 3) % 256] = CRGB::PeachPuff;
//       leds[(round(pow(i, 2)) + 4) % 256] = CRGB::PeachPuff;
//       leds[(round(pow(i, 3)) + 2) % 256] = CRGB::PeachPuff;
//       leds[(round(pow(i, 3)) + 3) % 256] = CRGB::PeachPuff;
//       leds[(round(pow(i, 3)) + 4) % 256] = CRGB::PeachPuff;
//       digitalWrite(11, LOW);  // sets the digital pin 13 off
//       // delay(50);  
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//     }
//     boolean contains23 = false;
//     for (char c23 : receivedChars) {
//     if (c23 == 'w') {
//         contains23 = true;
//         break;
//       }
//     }
//     boolean contains123 = false;
//     for (char c : receivedChars) {
//     if (c == 'N') {
//      //   Serial.print("ff");
//         contains123 = true;
//         break;
//       }
//     }
//     if (contains123) {
//       // for (int jj = 0; jj < 32; jj++) {
//       //   if (receivedChars[jj] = 'a'){
//       //     receivedChars[jj] = "";
//       //   }
//       // }
//       // receivedChars.find('a');
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//       digitalWrite(11, LOW);
//       delay(500);
//     }
//     if (contains23) {
//       // digitalWrite(13, HIGH);
//       // delay(500);
//       // digitalWrite(13, LOW);
//       // delay(500);
//       int jj = random(-2, 2);
//       digitalWrite(11, HIGH); // sets the digital pin 13 on
//       // delay(1000);            // waits for a second    
//       // leds[(i * 6 + 1) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 2) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 3) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 4) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 5) % 256] = CRGB::Indigo;
//       // leds[(i * 3 + 1) % 256] = CRGB::Maroon;
//       leds[abs(50 - i) % 256] = CRGB::FireBrick;
//       leds[abs(i - 50) % 256] = CRGB::FireBrick;
//       leds[abs(49 - i) % 256] = CRGB::FireBrick;
//       leds[abs(i - 49) % 256] = CRGB::FireBrick;
//       digitalWrite(11, LOW);  // sets the digital pin 13 off
//       // delay(50);  
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//     }
//     boolean contains24 = false;
//     for (char c24 : receivedChars) {
//     if (c24 == 'x') {
//         contains24 = true;
//         break;
//       }
//     }
//     boolean contains124 = false;
//     for (char c : receivedChars) {
//     if (c == 'O') {
//      //   Serial.print("ff");
//         contains124 = true;
//         break;
//       }
//     }
//     if (contains124) {
//       // for (int jj = 0; jj < 32; jj++) {
//       //   if (receivedChars[jj] = 'a'){
//       //     receivedChars[jj] = "";
//       //   }
//       // }
//       // receivedChars.find('a');
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//       digitalWrite(11, LOW);
//       delay(500);
//     }
//     if (contains24) {
//       // digitalWrite(13, HIGH);
//       // delay(500);
//       // digitalWrite(13, LOW);
//       // delay(500);
//       int jj = random(-2, 2);
//       digitalWrite(11, HIGH); // sets the digital pin 13 on
//       // delay(1000);            // waits for a second    
//       // leds[(i * 6 + 1) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 2) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 3) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 4) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 5) % 256] = CRGB::Indigo;
//       // leds[(i * 3 + 1) % 256] = CRGB::Maroon;
//       leds[(i + 10) % 256] = CRGB::MintCream;
//       leds[(i + 20) % 256] = CRGB::MintCream;
//       leds[(i + 30) % 256] = CRGB::MintCream;
//       leds[(i + 40) % 256] = CRGB::MintCream;
//       leds[(i + 50) % 256] = CRGB::MintCream;
//       digitalWrite(11, LOW);  // sets the digital pin 13 off
//       // delay(50);  
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//     }
//     boolean contains25 = false;
//     for (char c25 : receivedChars) {
//     if (c25 == 'y') {
//         contains25 = true;
//         break;
//       }
//     }
//     boolean contains125 = false;
//     for (char c : receivedChars) {
//     if (c == 'P') {
//      //   Serial.print("ff");
//         contains125 = true;
//         break;
//       }
//     }
//     if (contains125) {
//       // for (int jj = 0; jj < 32; jj++) {
//       //   if (receivedChars[jj] = 'a'){
//       //     receivedChars[jj] = "";
//       //   }
//       // }
//       // receivedChars.find('a');
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//       digitalWrite(11, LOW);
//       delay(500);
//     }
//     if (contains25) {
//       // digitalWrite(13, HIGH);
//       // delay(500);
//       // digitalWrite(13, LOW);
//       // delay(500);
//       int jj = random(-2, 2);
//       digitalWrite(11, HIGH); // sets the digital pin 13 on
//       // delay(1000);            // waits for a second    
//       // leds[(i * 6 + 1) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 2) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 3) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 4) % 256] = CRGB::Indigo;
//       // leds[(i * 6 + 5) % 256] = CRGB::Indigo;
//       // leds[(i * 3 + 1) % 256] = CRGB::Maroon;
//       leds[(i + 13) % 256] = CRGB::LightSalmon;
//       leds[(i + 15) % 256] = CRGB::LightSalmon;
//       leds[(i + 23) % 256] = CRGB::LightSalmon;
//       leds[(i + 25) % 256] = CRGB::LightSalmon;
//       leds[(i + 33) % 256] = CRGB::LightSalmon;
//       leds[(i + 35) % 256] = CRGB::LightSalmon;
//       digitalWrite(11, LOW);  // sets the digital pin 13 off
//       // delay(50);  
//       FastLED.show();
//       FastLED.clear();
//       FastLED.show();
//     }
//   }
// }




