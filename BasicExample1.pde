import themidibus.*; //Import the library
import processing.serial.*;
int channel = 0;
int pitch1 = 64;
int velocity1 = 0;
String strval = "";

// The serial port:
Serial myPort;
// pitches go from 48 - 72
// List all the available serial ports:

MidiBus myBus; // The MidiBus

void setup() {
  println("S");
  println("A");
  printArray(Serial.list());
  println("B");
// Open the port you are using at the rate you want:
  myPort = new Serial(this, Serial.list()[1], 9600);
  
// Send a capital "A" out the serial port
  myPort.write(65);
  size(400, 400);
  background(0);

  MidiBus.list(); // List all available Midi devices on STDOUT. This will show each device's index and name.
  
  // Either you can
  //                   Parent In Out
  //                     |    |  |
  //myBus = new MidiBus(this, 0, 1); // Create a new MidiBus using the device index to select the Midi input and output devices respectively.
  myBus = new MidiBus(this, 1, 1);
  // or you can ...
  //                   Parent         In                   Out
  //                     |            |                     |
  //myBus = new MidiBus(this, "IncomingDeviceName", "OutgoingDeviceName"); // Create a new MidiBus using the device names to select the Midi input and output devices respectively.

  // or for testing you could ...
  //                 Parent  In        Out
  //                   |     |          |
  //myBus = new MidiBus(this, -1, "Java Sound Synthesizer"); // Create a new MidiBus with no input device and the default Java Sound Synthesizer as the output device.
}

void draw() {
  //int channel = 0;
  //int pitch = 64;
  //int velocity = 0;
  
  myBus.sendNoteOn(channel, pitch1, velocity1);
   //println(pitch1);
   //println(velocity1);
  // Send a Midi noteOn
  //if (pitch1 == 48 && velocity1 > 0) {
  //   myPort.write(0);
  //}
  //if (pitch1 == 49 && velocity1 > 0) {
  //   myPort.write(1);
  //}
  delay(200);
  myBus.sendNoteOff(channel, pitch1, velocity1); // Send a Midi nodeOff

  int number = 0;
  int value = 90;

  myBus.sendControllerChange(channel, number, value); // Send a controllerChange
  delay(2000);
  //String test = myPort.readString();
  
}

void noteOn(int channel, int pitch, int velocity) {
  // Receive a noteOn
  println();
  println("Note On:");
  println("--------");
  println("Channel:"+channel);
  println("Pitch:"+pitch);
  println("Velocity:"+velocity);
  //velocity1 = velocity;
  //pitch1 = pitch;
  //strval = "";
  if (pitch == 49 && velocity > 0) {
     //myPort.write(0);
     //strval = strval + 'a';
     myPort.write('a');
  }
  if (pitch == 48 && velocity > 0) {
     //myPort.write(0);
     //strval = strval + 'a';
     myPort.write('c');
  }
  if (pitch == 50 && velocity > 0) {
     //myPort.write(1);
     //strval = strval + 'b';
     myPort.write('b');
  }
  if (pitch == 51 && velocity > 0) {
     //myPort.write(1);
     //strval = strval + 'b';
     myPort.write('d');
  }
  if (pitch == 52 && velocity > 0) {
     //myPort.write(1);
     //strval = strval + 'b';
     myPort.write('e');
  }
  if (pitch == 53 && velocity > 0) {
     //myPort.write(1);
     //strval = strval + 'b';
     myPort.write('f');
  }
  if (pitch == 54 && velocity > 0) {
     //myPort.write(1);
     //strval = strval + 'b';
     myPort.write('g');
  }
   if (pitch == 55 && velocity > 0) {
     //myPort.write(1);
     //strval = strval + 'b';
     myPort.write('h');
  }
  if (pitch == 56 && velocity > 0) {
     //myPort.write(1);
     //strval = strval + 'b';
     myPort.write('i');
  }
  if (pitch == 57 && velocity > 0) {
     //myPort.write(1);
     //strval = strval + 'b';
     myPort.write('j');
  }
   if (pitch == 58 && velocity > 0) {
     //myPort.write(1);
     //strval = strval + 'b';
     myPort.write('k');
  }
  if (pitch == 59 && velocity > 0) {
     //myPort.write(1);
     //strval = strval + 'b';
     myPort.write('l');
  }
  if (pitch == 60 && velocity > 0) {
     //myPort.write(1);
     //strval = strval + 'b';
     myPort.write('m');
  }
  if (pitch == 61 && velocity > 0) {
     //myPort.write(1);
     //strval = strval + 'b';
     myPort.write('n');
  }
  if (pitch == 62 && velocity > 0) {
     //myPort.write(1);
     //strval = strval + 'b';
     myPort.write('o');
  }
  if (pitch == 63 && velocity > 0) {
     //myPort.write(1);
     //strval = strval + 'b';
     myPort.write('p');
  }
  if (pitch == 64 && velocity > 0) {
     //myPort.write(1);
     //strval = strval + 'b';
     myPort.write('q');
  }
  if (pitch == 65 && velocity > 0) {
     //myPort.write(1);
     //strval = strval + 'b';
     myPort.write('r');
  }
  if (pitch == 66 && velocity > 0) {
     //myPort.write(1);
     //strval = strval + 'b';
     myPort.write('s');
  }
  if (pitch == 67 && velocity > 0) {
     //myPort.write(1);
     //strval = strval + 'b';
     myPort.write('t');
  }
  if (pitch == 68 && velocity > 0) {
     //myPort.write(1);
     //strval = strval + 'b';
     myPort.write('u');
  }
  if (pitch == 69 && velocity > 0) {
     //myPort.write(1);
     //strval = strval + 'b';
     myPort.write('v');
  }
  if (pitch == 70 && velocity > 0) {
     //myPort.write(1);
     //strval = strval + 'b';
     myPort.write('w');
  }
  if (pitch == 71 && velocity > 0) {
     //myPort.write(1);
     //strval = strval + 'b';
     myPort.write('x');
  }
  if (pitch == 72 && velocity > 0) {
     //myPort.write(1);
     //strval = strval + 'b';
     myPort.write('y');
  }
  //myPort.write(strval);
  // strval.replace('b', '');
  //println(strval);
  
  ////return pitch;
  //println(strval.indexOf('a'));
}

void noteOff(int channel, int pitch, int velocity) {
  // Receive a noteOff
  println();
  println("Note Off:");
  println("--------");
  println("Channel:"+channel);
  println("Pitch:"+pitch);
  println("Velocity:"+velocity);
  //myPort.clear();
   if (pitch == 48) {
     myPort.write('3');
    }
   if (pitch == 49) {
     myPort.write('1');
  }
   if (pitch == 50) {
     myPort.write('2');
  }
   if (pitch == 51) {
     myPort.write('4');
    }
   if (pitch == 52) {
     myPort.write('5');
  }
   if (pitch == 53) {
     myPort.write('6');
  }
   if (pitch == 54) {
     myPort.write('7');
    }
   if (pitch == 55) {
     myPort.write('8');
  }
   if (pitch == 56) {
     myPort.write('A');
  }
   if (pitch == 57) {
     myPort.write('9');
    }
   if (pitch == 58) {
     myPort.write('B');
  }
   if (pitch == 59) {
     myPort.write('C');
  }
   if (pitch == 60) {
     myPort.write('D');
  }
  if (pitch == 61) {
     myPort.write('E');
  }
  if (pitch == 62) {
     myPort.write('F');
  }
  if (pitch == 63) {
     myPort.write('G');
  }
  if (pitch == 64) {
     myPort.write('H');
  }
  if (pitch == 65) {
     myPort.write('I');
  }
  if (pitch == 66) {
     myPort.write('J');
  }
  if (pitch == 67) {
     myPort.write('K');
  }
  if (pitch == 68) {
     myPort.write('L');
  }
  if (pitch == 69) {
     myPort.write('M');
  }
  if (pitch == 70) {
     myPort.write('N');
  }
  if (pitch == 71) {
     myPort.write('O');
  }
  if (pitch == 72) {
     myPort.write('P');
  }

  // if (pitch == 49) {
  //   //myPort.write(0);
  //   //strval = strval + 'a';
  //   myPort.write('1');
  //}
  //if (pitch == 50) {
  //   //myPort.write(1);
  //   //strval = strval + 'b';
  //   myPort.write('2');
  //}
}

void controllerChange(int channel, int number, int value) {
  // Receive a controllerChange
  println();
  println("Controller Change:");
  println("--------");
  println("Channel:"+channel);
  println("Number:"+number);
  println("Value:"+value);
}

void delay(int time) {
  int current = millis();
  while (millis () < current+time) Thread.yield();
}
