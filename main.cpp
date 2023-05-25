#include <FastLED.h>
#define NUM_LEDS 256
#define DATA_PIN 11
#include "Location.h"
#include "Note.h"
#define PRINT_ENABLED false
String inpt = "";
char val;
const byte numChars = 200;
char receivedChars[numChars]; 
bool switchArray[25] = {false};
CRGB leds[NUM_LEDS];
CHSV paleBlue( 160, 128, 128);
CHSV paleRed(87, 180, 180);
CHSV medRed(96, 210, 210);
CHSV brightRed(160, 244, 244);
Note C3 = Note(0x12EE12, &leds);
Note D3b = Note(0x7CF42F, &leds);
Note D3 = Note(0xE9EC4F, &leds);
Note E3b = Note(0xC48C3F, &leds);
Note E3 = Note(0xBE6C44, &leds);
Note F3 = Note(0xC06B7B, &leds);

Note G3b = Note(0xC967D4, &leds);
Note G3 = Note(0x7735BE, &leds);
Note A3b = Note(0x5626A5, &leds);
Note A = Note(0x4F5CA2, &leds);
Note B3b = Note(0x5AA6A4, &leds);
Note B3 = Note(0x2FEE7E, &leds);

Note C4 = Note(0x12EE12, &leds);
Note D4b = Note(0x7CF42F, &leds);
Note D4 = Note(0xE9EC4F, &leds);
Note E4b = Note(0xC48C3F, &leds);
Note E4 = Note(0xBE6C44, &leds);
Note F4 = Note(0xC06B7B, &leds);
Note G4b = Note(0xC967D4, &leds);
Note G4 = Note(0x7735BE, &leds);
Note A4b = Note(0x5626A5, &leds);
Note AFour = Note(0x4F5CA2, &leds);
Note B4b = Note(0x5AA6A4, &leds);
Note B4 = Note(0x2FEE7E, &leds);

Note C5 = Note(0x12EE12, &leds);
// char[] receivedChars = new char[32];   // an array to store the received data
// ONE ISSUE IS THAT IF THERE ARE 64+ SERIAL READS THEN ALL LIGHTS WILL BREAK
boolean newData = false;

void setup() {
  FastLED.addLeds<WS2812,DATA_PIN,RGB>(leds,NUM_LEDS);
  FastLED.setBrightness(2);
  randomSeed(analogRead(0));
  pinMode(13, OUTPUT);
  pinMode(7, INPUT);
  Serial.begin(9600);
  FastLED.clear();
  FastLED.show();
  // Serial.println(65 + '0');
}

void(* resetFunc) (void) = 0;




// start here


// end here
// void recvWithEndMarker() {
//     int ndx = 0;
//     char endMarker = '\n';
//     char rc;

//     while (Serial.available() > 0 && newData == false) {
//       rc = Serial.read();

//       if (rc != endMarker && ndx < numChars) {
//         receivedChars[ndx++] = rc;
//       }
//       else {
//         receivedChars[ndx] = '\0'; // terminate the string
//             newData = true;
//         }
//     }
void recvWithEndMarker() {
    static byte ndx = 0;
    char endMarker = '\n';
    char rc;
    while (Serial.available() > 0 && newData == false) {
        rc = Serial.read();

        if (rc != endMarker) {
            receivedChars[ndx] = rc;
            ndx++;
            if (ndx >= numChars) {
                // ndx = numChars - 1;
                ndx = 0;
            }
        }
        else {
            receivedChars[ndx] = '\0'; // terminate the string
            ndx = 0;
            newData = true;
        }
    }
  bool switch1 = false;
  bool switch2 = false;
  bool switch3 = false;
  bool switch4 = false;
  bool switch5 = false;
  bool switch6 = false;
  bool switch7 = false;
  bool switch8 = false;
  bool switch9 = false;
  bool switch10 = false;
  bool switch11 = false;
  bool switch12 = false;
  bool switch13 = false;
  bool switch14 = false;
  bool switch15 = false;
  bool switch16 = false;
  bool switch17 = false;
  bool switch18 = false;
  bool switch19 = false;
  bool switch20 = false;
  bool switch21 = false;
  bool switch22 = false;
  bool switch23 = false;
  bool switch24 = false;
  bool switch25 = false;
  for (int jj = 0; jj < 200; jj++) {
    // if receivedChar
      // if (receivedChars[jj] >= 65 && receivedChars[jj] <= 89) {
      //   // Serial.println(receivedChars[jj] - 65);
      //   switchArray[(receivedChars[jj] - 65)] = true;
      // }
      if (receivedChars[jj] == 'A') {
        switch1 = true;
      } 
      else if (receivedChars[jj] == 'B') {
        switch2 = true;
      }
      else if (receivedChars[jj] == 'C') {
        switch3 = true;
      } 
      else if (receivedChars[jj] == 'D') {
        switch4 = true;
      }
      else if (receivedChars[jj] == 'E') {
        switch5 = true;
      } 
      else if (receivedChars[jj] == 'F') {
        switch6 = true;
      }
      else if (receivedChars[jj] == 'G') {
        switch7 = true;
      } 
      else if (receivedChars[jj] == 'H') {
        switch8 = true;
      }
      else if (receivedChars[jj] == 'I') {
        switch9 = true;
      } 
      else if (receivedChars[jj] == 'J') {
        switch10 = true;
      }
      else if (receivedChars[jj] == 'K') {
        switch11 = true;
      } 
      else if (receivedChars[jj] == 'L') {
        switch12 = true;
      }
      else if (receivedChars[jj] == 'M') {
        switch13 = true;
      } 
      else if (receivedChars[jj] == 'N') {
        switch14 = true;
      }
      else if (receivedChars[jj] == 'O') {
        switch15 = true;
      } 
      else if (receivedChars[jj] == 'P') {
        switch16 = true;
      }
      else if (receivedChars[jj] == 'Q') {
        switch17 = true;
      }
      else if (receivedChars[jj] == 'R') {
        switch18 = true;
      } 
      else if (receivedChars[jj] == 'S') {
        switch19 = true;
      }
      else if (receivedChars[jj] == 'T') {
        switch20 = true;
      } 
      else if (receivedChars[jj] == 'U') {
        switch21 = true;
      }
      else if (receivedChars[jj] == 'V') {
        switch22 = true;
      } 
      else if (receivedChars[jj] == 'W') {
        switch23 = true;
      }
      else if (receivedChars[jj] == 'X') {
        switch24 = true;
      } 
      else if (receivedChars[jj] == 'Y') {
        switch25 = true;
      }
      else if (receivedChars[jj] == 'Z') {
        resetFunc();
      }
  }
  for (int jj = 0; jj < 200; jj++) {
    /*
      for (int hh = 0; hh < 25; hh++) {
        if (receivedChars[jj] == ((hh + 65) + '0') && switch[hh] == True) {
          receivedChars[jj] = "";
        }
      }
    */
      if (receivedChars[jj] == 'a' && switch1) {
        receivedChars[jj] = "";
      } 
      if (receivedChars[jj] == 'b' && switch2) {
        receivedChars[jj] = "";
      }
      if (receivedChars[jj] == 'A' && switch1) {
        receivedChars[jj] = "";
      } 
      if (receivedChars[jj] == 'B' && switch2) {
        receivedChars[jj] = "";
      }
      if (receivedChars[jj] == 'c' && switch3) {
        receivedChars[jj] = "";
      } 
      if (receivedChars[jj] == 'd' && switch4) {
        receivedChars[jj] = "";
      }
      if (receivedChars[jj] == 'C' && switch3) {
        receivedChars[jj] = "";
      } 
      if (receivedChars[jj] == 'D' && switch4) {
        receivedChars[jj] = "";
      }
      if (receivedChars[jj] == 'e' && switch5) {
        receivedChars[jj] = "";
      } 
      if (receivedChars[jj] == 'f' && switch6) {
        receivedChars[jj] = "";
      }
      if (receivedChars[jj] == 'E' && switch5) {
        receivedChars[jj] = "";
      } 
      if (receivedChars[jj] == 'F' && switch6) {
        receivedChars[jj] = "";
      }
      if (receivedChars[jj] == 'g' && switch7) {
        receivedChars[jj] = "";
      } 
      if (receivedChars[jj] == 'h' && switch8) {
        receivedChars[jj] = "";
      }
      if (receivedChars[jj] == 'G' && switch7) {
        receivedChars[jj] = "";
      } 
      if (receivedChars[jj] == 'H' && switch8) {
        receivedChars[jj] = "";
      }
      if (receivedChars[jj] == 'i' && switch9) {
        receivedChars[jj] = "";
      } 
      if (receivedChars[jj] == 'j' && switch10) {
        receivedChars[jj] = "";
      }
      if (receivedChars[jj] == 'I' && switch9) {
        receivedChars[jj] = "";
      } 
      if (receivedChars[jj] == 'J' && switch10) {
        receivedChars[jj] = "";
      }
      if (receivedChars[jj] == 'k' && switch11) {
        receivedChars[jj] = "";
      } 
      if (receivedChars[jj] == 'l' && switch12) {
        receivedChars[jj] = "";
      }
      if (receivedChars[jj] == 'K' && switch11) {
        receivedChars[jj] = "";
      } 
      if (receivedChars[jj] == 'L' && switch12) {
        receivedChars[jj] = "";
      }
      if (receivedChars[jj] == 'm' && switch13) {
        receivedChars[jj] = "";
      } 
      if (receivedChars[jj] == 'n' && switch14) {
        receivedChars[jj] = "";
      }
      if (receivedChars[jj] == 'M' && switch13) {
        receivedChars[jj] = "";
      } 
      if (receivedChars[jj] == 'N' && switch14) {
        receivedChars[jj] = "";
      }
      if (receivedChars[jj] == 'o' && switch15) {
        receivedChars[jj] = "";
      } 
      if (receivedChars[jj] == 'p' && switch16) {
        receivedChars[jj] = "";
      }
      if (receivedChars[jj] == 'O' && switch15) {
        receivedChars[jj] = "";
      } 
      if (receivedChars[jj] == 'P' && switch16) {
        receivedChars[jj] = "";
      }
      if (receivedChars[jj] == 'q' && switch17) {
        receivedChars[jj] = "";
      } 
      if (receivedChars[jj] == 'r' && switch18) {
        receivedChars[jj] = "";
      }
      if (receivedChars[jj] == 'Q' && switch17) {
        receivedChars[jj] = "";
      } 
      if (receivedChars[jj] == 'R' && switch18) {
        receivedChars[jj] = "";
      }
      if (receivedChars[jj] == 's' && switch19) {
        receivedChars[jj] = "";
      } 
      if (receivedChars[jj] == 't' && switch20) {
        receivedChars[jj] = "";
      }
      if (receivedChars[jj] == 'S' && switch19) {
        receivedChars[jj] = "";
      } 
      if (receivedChars[jj] == 'T' && switch20) {
        receivedChars[jj] = "";
      }
      if (receivedChars[jj] == 'u' && switch21) {
        receivedChars[jj] = "";
      } 
      if (receivedChars[jj] == 'v' && switch22) {
        receivedChars[jj] = "";
      }
      if (receivedChars[jj] == 'U' && switch21) {
        receivedChars[jj] = "";
      } 
      if (receivedChars[jj] == 'V' && switch22) {
        receivedChars[jj] = "";
      }
      if (receivedChars[jj] == 'w' && switch23) {
        receivedChars[jj] = "";
      } 
      if (receivedChars[jj] == 'x' && switch24) {
        receivedChars[jj] = "";
      }
      if (receivedChars[jj] == 'W' && switch23) {
        receivedChars[jj] = "";
      } 
      if (receivedChars[jj] == 'X' && switch24) {
        receivedChars[jj] = "";
      }
      if (receivedChars[jj] == 'y' && switch25) {
        receivedChars[jj] = "";
      }
      if (receivedChars[jj] == 'Y' && switch25) {
        receivedChars[jj] = "";
      } 
  }
}
void lightupall () {
  leds[0] = CRGB::Black;

    int reset_val = digitalRead(7);
    if (reset_val == HIGH) {
      resetFunc();
        // digitalWrite(13, HIGH);
        // delay(500);
        // digitalWrite(13, LOW);
        // delay(500);
    }
    recvWithEndMarker();
    boolean contains = false;
    for (char c : receivedChars) {
    if (c == 'a') {
      //  Serial.print("e");
        contains = true;
        break;
      }
    }
    boolean contains100 = false;
    for (char c : receivedChars) {
    if (c == 'A') {
     //   Serial.print("ff");
        contains100 = true;
        break;
      }
    }
    if (contains100) {

    }
    if (contains) {
      C3.draw_line();
    } 
    boolean contains2 = false;
    for (char c2 : receivedChars) {
    if (c2 == 'b') {
        contains2 = true;
        break;
      }
    }
    boolean contains102 = false;
    for (char c : receivedChars) {
    if (c == 'B') {
     //   Serial.print("ff");
        contains102 = true;
        break;
      }
    }
    if (contains102) {

    }
    if (contains2) {
      D3b.draw_line();
    }
    boolean contains3 = false;
    for (char c3 : receivedChars) {
    if (c3 == 'c') {
        contains3 = true;
        break;
      }
    }
    boolean contains103 = false;
    for (char c : receivedChars) {
    if (c == 'C') {
     //   Serial.print("ff");
        contains103 = true;
        break;
      }
    }
    if (contains103) {

    }
    if (contains3) {
      D3.draw_line();
    }
    boolean contains4 = false;
    for (char c4 : receivedChars) {
    if (c4 == 'd') {
        contains4 = true;
        break;
      }
    }
    boolean contains104 = false;
    for (char c : receivedChars) {
    if (c == 'D') {
     //   Serial.print("ff");
        contains104 = true;
        break;
      }
    }
    if (contains104) {

    }
    if (contains4) {
      E3b.draw_line();
    }
    //START

    
    boolean contains5 = false;
    for (char c5 : receivedChars) {
    if (c5 == 'e') {
        contains5 = true;
        break;
      }
    }
    boolean contains105 = false;
    for (char c : receivedChars) {
    if (c == 'E') {
     //   Serial.print("ff");
        contains105 = true;
        break;
      }
    }
    if (contains105) {

    }
    if (contains5) {
      E3.draw_line();
    }
    boolean contains6 = false;
    for (char c6 : receivedChars) {
    if (c6 == 'f') {
        contains6 = true;
        break;
      }
    }
    boolean contains106 = false;
    for (char c : receivedChars) {
    if (c == 'F') {
     //   Serial.print("ff");
        contains106 = true;
        break;
      }
    }
    if (contains106) {

    }
    if (contains6) {
      F3.draw_line();
    }
    boolean contains7 = false;
    for (char c7 : receivedChars) {
    if (c7 == 'g') {
        contains7 = true;
        break;
      }
    }
    boolean contains107 = false;
    for (char c : receivedChars) {
    if (c == 'G') {
     //   Serial.print("ff");
        contains107 = true;
        break;
      }
    }
    if (contains107) {

    }
    if (contains7) {
      G3b.draw_line();
    }
    boolean contains8 = false;
    for (char c8 : receivedChars) {
    if (c8 == 'h') {
        contains8 = true;
        break;
      }
    }
    boolean contains108 = false;
    for (char c : receivedChars) {
    if (c == 'H') {
     //   Serial.print("ff");
        contains108 = true;
        break;
      }
    }
    if (contains108) {

    }
    if (contains8) {
        G3.draw_line();
    }
    boolean contains9 = false;
    for (char c9 : receivedChars) {
    if (c9 == 'i') {
        contains9 = true;
        break;
      }
    }
    boolean contains109 = false;
    for (char c : receivedChars) {
    if (c == 'I') {
     //   Serial.print("ff");
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        contains109 = true;
        break;
      }
    }
    if (contains109) {
      
    }
    if (contains9) {
      A3b.draw_line();
    }
    boolean contains10 = false;
    for (char c10 : receivedChars) {
    if (c10 == 'j') {
        // digitalWrite(13, HIGH);
        // delay(500);
        // digitalWrite(13, LOW);
        // delay(500);
        contains10 = true;
        break;
      }
    }
    boolean contains110 = false;
    for (char c : receivedChars) {
    if (c == 'J') {
     //   Serial.print("ff");
        contains110 = true;
        break;
      }
    }
    if (contains110) {
      // for (int jj = 0; jj < 32; jj++) {

    }
    if (contains10) {
      A.draw_line();
    }

    boolean contains11 = false;
    for (char c11 : receivedChars) {
    if (c11 == 'k') {
        contains11 = true;
        // digitalWrite(13, HIGH);
        // delay(500);
        // digitalWrite(13, LOW);
        // delay(500);
        break;
      }
    }
    boolean contains111 = false;
    for (char c : receivedChars) {
    if (c == 'K') {
     //   Serial.print("ff");
        contains111 = true;
        break;
      }
    }
    if (contains111) {
      // for (int jj = 0; jj < 32; jj++) {
      //   if (receivedChars[jj] = 'a'){
      //     receivedChars[jj] = "";

    }
    if (contains11) {
      B3b.draw_line();
    }

    //END
    // if (value1 == LOW && value2 == LOW && value3 == LOW && value4 == LOW && value5 == LOW) {
    //   FastLED.clear();
    //   FastLED.show();
    //   digitalWrite(11, LOW);
    // // do this now if serial not available!
    // }
    // value1 = digitalRead(5);
    // value2 = digitalRead(12);
    // value3 = digitalRead(3);
    // value4 = digitalRead(4);
    // value5 = digitalRead(2);
    boolean contains12 = false;
    for (char c12 : receivedChars) {
    if (c12 == 'l') {
        contains12 = true;
        break;
      }
    }
    boolean contains112 = false;
    for (char c : receivedChars) {
    if (c == 'L') {
     //   Serial.print("ff");
        contains112 = true;
        break;
      }
    }
    if (contains112) {


    }
    if (contains12) {
      B3.draw_line();
    }
    boolean contains13 = false;
    for (char c13 : receivedChars) {
    if (c13 == 'm') {
        contains13 = true;
        break;
      }
    }
    boolean contains113 = false;
    for (char c : receivedChars) {
    if (c == 'M') {
     //   Serial.print("ff");
        contains113 = true;
        break;
      }
    }
    if (contains113) {

    }
    if (contains13) {
      C4.draw_line();
    }
    boolean contains14 = false;
    for (char c14 : receivedChars) {
    if (c14 == 'n') {
        contains14 = true;
        break;
      }
    }
    boolean contains114 = false;
    for (char c : receivedChars) {
    if (c == 'N') {
     //   Serial.print("ff");
        contains114 = true;
        break;
      }
    }
    if (contains114) {
      
    }
    if (contains14) {
      D4b.draw_line();
    }
    boolean contains15 = false;
    for (char c15 : receivedChars) {
    if (c15 == 'o') {
        contains15 = true;
        break;
      }
    }
    boolean contains115 = false;
    for (char c : receivedChars) {
    if (c == 'O') {
     //   Serial.print("ff");
        contains115 = true;
        break;
      }
    }
    if (contains115) {

    }
    if (contains15) {
      D4.draw_line();
    }
    boolean contains16 = false;
    for (char c16 : receivedChars) {
    if (c16 == 'p') {
        contains16 = true;
        break;
      }
    }
    boolean contains116 = false;
    for (char c : receivedChars) {
    if (c == 'P') {
     //   Serial.print("ff");
        contains116 = true;
        break;
      }
    }
    if (contains116) {
   
    }
    if (contains16) {
      E4b.draw_line();
    }
    boolean contains17 = false;
    for (char c17 : receivedChars) {
    if (c17 == 'q') {
        contains17 = true;
        break;
      }
    }
    boolean contains117 = false;
    for (char c : receivedChars) {
    if (c == 'Q') {
     //   Serial.print("ff");
        contains117 = true;
        break;
      }
    }
    if (contains117) {
    
    }
    if (contains17) {
     E4.draw_line();
    }
    boolean contains18 = false;
    for (char c18 : receivedChars) {
    if (c18 == 'r') {
        contains18 = true;
        break;
      }
    }
    boolean contains118 = false;
    for (char c : receivedChars) {
    if (c == 'R') {
     //   Serial.print("ff");
        contains118 = true;
        break;
      }
    }
    if (contains118) {

    }
    if (contains18) {
      F4.draw_line();
    }
    boolean contains19 = false;
    for (char c19 : receivedChars) {
    if (c19 == 's') {
        contains19 = true;
        break;
      }
    }
    boolean contains119 = false;
    for (char c : receivedChars) {
    if (c == 'S') {
     //   Serial.print("ff");
        contains119 = true;
        break;
      }
    }
    if (contains119) {
     
    }
    if (contains19) {
     G4b.draw_line();
    }
    boolean contains20 = false;
    for (char c20 : receivedChars) {
    if (c20 == 't') {
        contains20 = true;
        break;
      }
    }
    boolean contains120 = false;
    for (char c : receivedChars) {
    if (c == 'T') {
     //   Serial.print("ff");
        contains120 = true;
        break;
      }
    }
    if (contains120) {
     
    }
    if (contains20) {
      G4.draw_line();
    }
    boolean contains21 = false;
    for (char c21 : receivedChars) {
    if (c21 == 'u') {
        contains21 = true;
        break;
      }
    }
    boolean contains121 = false;
    for (char c : receivedChars) {
    if (c == 'U') {
     //   Serial.print("ff");
        contains121 = true;
        break;
      }
    }
    if (contains121) {
   
    }
    if (contains21) {
      A4b.draw_line();
    }
    boolean contains22 = false;
    for (char c22 : receivedChars) {
    if (c22 == 'v') {
        contains22 = true;
        break;
      }
    }
    boolean contains122 = false;
    for (char c : receivedChars) {
    if (c == 'V') {
     //   Serial.print("ff");
        contains122 = true;
        break;
      }
    }
    if (contains122) {
     
    }
    if (contains22) {
     AFour.draw_line();
    }
    boolean contains23 = false;
    for (char c23 : receivedChars) {
    if (c23 == 'w') {
        contains23 = true;
        break;
      }
    }
    boolean contains123 = false;
    for (char c : receivedChars) {
    if (c == 'W') {
     //   Serial.print("ff");
        contains123 = true;
        break;
      }
    }
    if (contains123) {
     
    }
    if (contains23) {
     B4b.draw_line();
    }
    boolean contains24 = false;
    for (char c24 : receivedChars) {
    if (c24 == 'x') {
        contains24 = true;
        break;
      }
    }
    boolean contains124 = false;
    for (char c : receivedChars) {
    if (c == 'X') {
     //   Serial.print("ff");
        contains124 = true;
        break;
      }
    }
    if (contains124) {
     
    }
    if (contains24) {
     B4.draw_line();
    }
    boolean contains25 = false;
    for (char c25 : receivedChars) {
    if (c25 == 'y') {
        contains25 = true;
        break;
      }
    }
    boolean contains125 = false;
    for (char c : receivedChars) {
    if (c == 'Y') {
     //   Serial.print("ff");
        contains125 = true;
        break;
      }
    }
    if (contains125) {
      
    }     
    if (contains25) {
      C5.draw_line();
    }
  
}
void loop() {
  lightupall();
}


