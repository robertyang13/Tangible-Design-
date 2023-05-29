/* COMMENTS

So first thing is that I realized I didn't even need a few booleans. I put this file in the same folder
as the original. But I got rid of all of the contains (contains100 - contains125) since draw_line doesn't need 
to get rid of its lights at the end of each draw iteration. But check to make sure this current file still works.

ex: Got rid of the lines (x 25):
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

But we keep contains - contains25 since this checks to see if the char input is in the char array. 

So contains is a boolean that checks to see if 'a' is in the char input array. If it is, then contains will
be set to true and C3 will draw line for as long as 'a' is in the char array. 

onNoteOn: When a key is pressed (serial will read and write lower case characters)
'a' - contains
.
.
.
'y' - contains25

onNoteOff: When a key is let go (serial will read and write upper case characters)
'A' - switch1
.
.
.
'Y' - switch25
*/
#include <FastLED.h>
#define NUM_LEDS 768
#define DATA_PIN 11
#include "Location.h"
#include "Note.h"
#define PRINT_ENABLED false
// dont use string below
String inpt = "";
// dont use char below
char val;
const byte numChars = 200;
char receivedChars[numChars]; 

// !!!!!!
// crap, I don't think I every finished the array boolean instead so we can just get rid of the 25 index array boolean below oops :p
bool switchArray[25] = {false};
// :x


CRGB leds[NUM_LEDS];

// Dont use any CHSV value below
CHSV paleBlue( 160, 128, 128);
CHSV paleRed(87, 180, 180);
CHSV medRed(96, 210, 210);
CHSV brightRed(160, 244, 244);
//
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
  FastLED.setBrightness(10);
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



/*

the switch booleans essentially are used to check that if the onNoteOff key (a key is let go) is lifted up,
then the switch corresponding to the note (pitch of the note) is true. 

1. We set it = true if the key is let go (onNoteOff occurs). 

2. If it is true, then we go and check our character 
buffer for all instances of the corresponding character (note) to the switch, and set all instances of that 
character in our buffer to be "" (just make sure that our character input buffer does not have the corresponding
character of the note because the key is let go).

3. This is needed because without it, some characters in the character buffer would just stay there (like
if you played a 10 note chord, there would be 10 inputs in the character buffer even if you let go of all 10 notes).
The lights would keep showing and moving because the character is still in the character buffer when we do the checks
with the contain booleans.

4. recVWithEndMarker will be called in the draw/ update loop. switch will by default set to false at the
start of every iteration. You will see in lines 330+ that when the switch is true, that it will get rid 
of the corresponding character input in the buffer. Thus, it must be set to false at 
the start of every loop else the corresponding character will continue to be set to "". 
*/


// Again, we are setting each switch to be false, because it should only be true when a key is let go
// The moment a switch is true, it will loop through the character array as shown in line 330 and change all 
// instances of the corresponding lower case character for when the key is pressed down and set each
// instance to be "". But we don't want that to keep happening. We only want that to happen once the moment
// onNoteOff occurs/ the key is let go, so we at the start set switch to be false. 

// switch 1 is to check to see if 'A', the note with pitch 48 has been let go (onNoteOff has occurred for pitch 48)
// has been read from the Serial Port.
  bool switch1 = false;
// switch 2 is to check to see if 'B', the note with pitch 49 has been let go (onNoteOff has occurred for pitch 49)
// has been read from the Serial Port.
  bool switch2 = false;
// switch 3 is to check to see if 'C', the note with pitch 50 has been let go (onNoteOff has occurred for pitch 50)
// has been read from the Serial Port.
  bool switch3 = false;
// switch 4 is to check to see if 'D', the note with pitch 51 has been let go (onNoteOff has occurred for pitch 51)
// has been read from the Serial Port.
  bool switch4 = false;
// switch 5 is to check to see if 'E', the note with pitch 52 has been let go (onNoteOff has occurred for pitch 52)
// has been read from the Serial Port.
  bool switch5 = false;
// switch 6 is to check to see if 'F', the note with pitch 53 has been let go (onNoteOff has occurred for pitch 53)
// has been read from the Serial Port.
  bool switch6 = false;
// switch 7 is to check to see if 'G', the note with pitch 54 has been let go (onNoteOff has occurred for pitch 54)
// has been read from the Serial Port.
  bool switch7 = false;
// switch 8 is to check to see if 'H', the note with pitch 55 has been let go (onNoteOff has occurred for pitch 55)
// has been read from the Serial Port.
  bool switch8 = false;
// switch 9 is to check to see if 'I', the note with pitch 56 has been let go (onNoteOff has occurred for pitch 56)
// has been read from the Serial Port.
  bool switch9 = false;
// switch 10 is to check to see if 'J', the note with pitch 57 has been let go (onNoteOff has occurred for pitch 57)
// has been read from the Serial Port.
  bool switch10 = false;
// switch 11 is to check to see if 'K', the note with pitch 58 has been let go (onNoteOff has occurred for pitch 58)
// has been read from the Serial Port.
  bool switch11 = false;
// switch 12 is to check to see if 'L', the note with pitch 59 has been let go (onNoteOff has occurred for pitch 59)
// has been read from the Serial Port.
  bool switch12 = false;
// switch 13 is to check to see if 'M', the note with pitch 60 has been let go (onNoteOff has occurred for pitch 60)
// has been read from the Serial Port.
  bool switch13 = false;
// switch 14 is to check to see if 'N', the note with pitch 61 has been let go (onNoteOff has occurred for pitch 61)
// has been read from the Serial Port.
  bool switch14 = false;
// switch 15 is to check to see if 'O', the note with pitch 62 has been let go (onNoteOff has occurred for pitch 62)
// has been read from the Serial Port.
  bool switch15 = false;
// switch 16 is to check to see if 'P', the note with pitch 63 has been let go (onNoteOff has occurred for pitch 63)
// has been read from the Serial Port.
  bool switch16 = false;
// switch 17 is to check to see if 'Q', the note with pitch 64 has been let go (onNoteOff has occurred for pitch 64)
// has been read from the Serial Port.
  bool switch17 = false;
// switch 18 is to check to see if 'R', the note with pitch 65 has been let go (onNoteOff has occurred for pitch 65)
// has been read from the Serial Port.
  bool switch18 = false;
// switch 19 is to check to see if 'S', the note with pitch 66 has been let go (onNoteOff has occurred for pitch 66)
// has been read from the Serial Port.
  bool switch19 = false;
// switch 20 is to check to see if 'T', the note with pitch 67 has been let go (onNoteOff has occurred for pitch 67)
// has been read from the Serial Port.
  bool switch20 = false;
// switch 21 is to check to see if 'U', the note with pitch 68 has been let go (onNoteOff has occurred for pitch 68)
// has been read from the Serial Port.
  bool switch21 = false;
// switch 22 is to check to see if 'V', the note with pitch 69 has been let go (onNoteOff has occurred for pitch 69)
// has been read from the Serial Port.
  bool switch22 = false;
// switch 23 is to check to see if 'W', the note with pitch 70 has been let go (onNoteOff has occurred for pitch 70)
// has been read from the Serial Port.
  bool switch23 = false;
// switch 24 is to check to see if 'X', the note with pitch 71 has been let go (onNoteOff has occurred for pitch 71)
// has been read from the Serial Port.
  bool switch24 = false;
// switch 25 is to check to see if 'Y', the note with pitch 72 has been let go (onNoteOff has occurred for pitch 72)
// has been read from the Serial Port.
  bool switch25 = false;
  for (int jj = 0; jj < 200; jj++) {
// if the character array/ buffer has a capital character (which means that onNoteOff has occurred for a 
// specific note/ pitch), then we want to set the boolean of switch to be true. I won't do individual comments
// for this one as the mappings are the exact same as above 'A' - switch 1 .... 'Y' to switch 25.
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

  /*

  So here, we see if there is an input character still lingering/ in the receivedChars array. But we also check
  now to see if the switch boolean for that pitch is true. (Note: same mappings for lower and upper case letters:
  'a' - character read from serial port when note pitch 48 is pressed down -> onNoteOn 
  'A' - character read from serial port when note pitch 48 is let go -> onNoteOff
  switch - boolean to determine whether or not onNoteOff has occurred for a specific note
  :true if note has been let go, false otherwise)

  If both a character for a specific note (lowercase) is in the input array (which means onNoteOn for the 
  key occurred/ the key of corresponding pitch was pressed down) and the corresponding switch is true
  (which means that now the key of corresponding pitch was let go and onNoteOff has just occurred), then
  we will set all instances of that lower case character to be "" so that when we do our contain checks,
  it will see that the corresponding lower case character is not present in the char array and will not
  call draw_line on the corresponding note. 

  The switch will be set to false at the start of every update loop, so the lines below will occur once
  only when the key is let go.
  */
  for (int jj = 0; jj < 200; jj++) {
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
    // this is the reset_button on the keyboard. This will reset all the lights when the corresponding button is 
    // pressed.
    int reset_val = digitalRead(7);
    if (reset_val == HIGH) {
      resetFunc();

    }
    //recVWithEndMarker is called in lightupall, which is called in draw/ update
    recvWithEndMarker();


    // here is the start of the contains check. Explanation is in the first few lines of this file
    // TLDR: we see if character is in input array; if it is, contains is set to true -> we draw line
    // for coresponding note. contains is by default set to false at the start of every loop so only occurs
    // when lower case note in char array. 
    boolean contains = false;
    for (char c : receivedChars) {
    if (c == 'a') {

        contains = true;
        break;
      }
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
    if (contains25) {
      C5.draw_line();
    }
  
}
// loop here
void loop() {
  lightupall();
}


