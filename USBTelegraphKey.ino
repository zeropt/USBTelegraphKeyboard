/*
 * MorseCode Key Example
 * For Trinket by Riley Mann
 */
#include <ProTrinketKeyboard.h>

#define BUTTON 12

#define LED    13

boolean active = false;
boolean state = HIGH;
boolean oldstate = HIGH;
boolean spaced = false;
int readstep = 0;
int num = 0;
int dotspeed = 0;
int dashspeed = 0;
int timer = 0;
char storage[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

String a = ".-      ";
String b = "-...    ";
String c = "-.-.    ";
String d = "-..     ";
String e = ".       ";
String f = "..-.    ";
String g = "--.     ";
String h = "....    ";
String i = "..      ";
String j = ".---    ";
String k = "-.-     ";
String l = ".-..    ";
String m = "--      ";
String n = "-.      ";
String o = "---     ";
String p = ".--.    ";
String q = "--.-    ";
String r = ".-.     ";
String s = "...     ";
String t = "-       ";
String u = "..-     ";
String v = "...-    ";
String w = ".--     ";
String x = "-..-    ";
String y = "-.--    ";
String z = "--..    ";
String one = ".----   ";
String two = "..---   ";
String three = "...--   ";
String four = "....-   ";
String five = ".....   ";
String six = "-....   ";
String seven = "--...   ";
String eight = "---..   ";
String nine = "----.   ";
String zero = "-----   ";
String period = ".-.-.-  ";
String comma = "--..--  ";
String colon = "---...  ";
String semicolon = "-.-.-.  ";
String equal = "-...-   ";
String dollar = "...-..- ";
String at = ".--.-.  ";
String question = "..--..  ";
String slash = "-..-.   ";
String leftparenthesis = "-.--.   ";
String rightparenthesis = "-.--.-  ";
String enter = ".-.-.   ";
String backspace = "........";
String endjob = "...-.-  ";


void setup() {
  //sets button as input w/ internal pullup resistor
  pinMode(BUTTON, INPUT);
  digitalWrite(BUTTON, HIGH);

  //sets LED as output and low
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);

  //initialize USB
  TrinketKeyboard.begin();
}

void loop() {
  oldstate = state;
  state = digitalRead(BUTTON);
  
  if (active) {
    switch (readstep) {
      case 0:
      if (timer > 7*dashspeed) {
        if (!spaced) {
          digitalWrite(LED, HIGH);
          delay(5);
          digitalWrite(LED, LOW);
          TrinketKeyboard.typeChar(' ');
          spaced = true;
        }
      } else {
        timer++;
      }
      if (timer == dashspeed) {
        num = 0;
        digitalWrite(LED, HIGH);
        delay(5);
        digitalWrite(LED, LOW);
        String mystring;
        for (int i = 0; i < 8; i++) {
          mystring += storage[i];
        }
        String code = String(mystring);
        if (code == (a)) {
          TrinketKeyboard.typeChar('a');
        }
        else if (code == b) {
          TrinketKeyboard.typeChar('b');
        }
        else if (code == c) {
          TrinketKeyboard.typeChar('c');
        }
        else if (code == d) {
          TrinketKeyboard.typeChar('d');
        }
        else if (code == e) {
          TrinketKeyboard.typeChar('e');
        }
        else if (code == f) {
          TrinketKeyboard.typeChar('f');
        }
        else if (code == g) {
          TrinketKeyboard.typeChar('g');
        }
        else if (code == h) {
          TrinketKeyboard.typeChar('h');
        }
        else if (code == i) {
          TrinketKeyboard.typeChar('i');
        }
        else if (code == j) {
          TrinketKeyboard.typeChar('j');
        }
        else if (code == k) {
          TrinketKeyboard.typeChar('k');
        }
        else if (code == l) {
          TrinketKeyboard.typeChar('l');
        }
        else if (code == m) {
          TrinketKeyboard.typeChar('m');
        }
        else if (code == n) {
          TrinketKeyboard.typeChar('n');
        }
        else if (code == o) {
          TrinketKeyboard.typeChar('o');
        }
        else if (code == p) {
          TrinketKeyboard.typeChar('p');
        }
        else if (code == q) {
          TrinketKeyboard.typeChar('q');
        }
        else if (code == r) {
          TrinketKeyboard.typeChar('r');
        }
        else if (code == (s)) {
          TrinketKeyboard.typeChar('s');
        }
        else if (code == (t)) {
          TrinketKeyboard.typeChar('t');
        }
        else if (code == (u)) {
          TrinketKeyboard.typeChar('u');
        }
        else if (code == (v)) {
          TrinketKeyboard.typeChar('v');
        }
        else if (code == (w)) {
          TrinketKeyboard.typeChar('w');
        }
        else if (code == (x)) {
          TrinketKeyboard.typeChar('x');
        }
        else if (code == (y)) {
          TrinketKeyboard.typeChar('y');
        }
        else if (code == (z)) {
          TrinketKeyboard.typeChar('z');
        }
        else if (code == (one)) {
          TrinketKeyboard.typeChar('1');
        }
        else if (code == (two)) {
          TrinketKeyboard.typeChar('2');
        }
        else if (code == (three)) {
          TrinketKeyboard.typeChar('3');
        }
        else if (code == (four)) {
          TrinketKeyboard.typeChar('4');
        }
        else if (code == (five)) {
          TrinketKeyboard.typeChar('5');
        }
        else if (code == (six)) {
          TrinketKeyboard.typeChar('6');
        }
        else if (code == (seven)) {
          TrinketKeyboard.typeChar('7');
        }
        else if (code == (eight)) {
          TrinketKeyboard.typeChar('8');
        }
        else if (code == (nine)) {
          TrinketKeyboard.typeChar('9');
        }
        else if (code == (zero)) {
          TrinketKeyboard.typeChar('0');
        }
        else if (code == (period)) {
          TrinketKeyboard.typeChar('.');
        }
        else if (code == (comma)) {
          TrinketKeyboard.typeChar(',');
        }
        else if (code == (colon)) {
          TrinketKeyboard.typeChar(':');
        }
        else if (code == (semicolon)) {
          TrinketKeyboard.typeChar(';');
        }
        else if (code == (equal)) {
          TrinketKeyboard.typeChar('=');
        }
        else if (code == (dollar)) {
          TrinketKeyboard.typeChar('$');
        }
        else if (code == (at)) {
          TrinketKeyboard.typeChar('@');
        }
        else if (code == (question)) {
          TrinketKeyboard.typeChar('?');
        }
        else if (code == (slash)) {
          TrinketKeyboard.typeChar('/');
        }
        else if (code == (leftparenthesis)) {
          TrinketKeyboard.typeChar('(');
        }
        else if (code == (rightparenthesis)) {
          TrinketKeyboard.typeChar(')');
        }
        else if (code == (backspace)) {
          TrinketKeyboard.pressKey(0, KEYCODE_BACKSPACE);
        }
        else if (code == (enter)) {
          TrinketKeyboard.pressKey(0, KEYCODE_ENTER);
          spaced = true;
        }
        else if (code == (endjob)) {
          active = false;
          digitalWrite(LED, HIGH);
          readstep = 0;
          timer = 0;
        } else {
          spaced = true;
        }
        for (int i = 0; i < 8; i++) {
          storage[i] = ' ';
        }
      }
      if (!state && oldstate) {
        readstep = 1;
        timer = 0;
      }
      break;
      case 1:
      timer++;
      if (state && !oldstate) {
        if (timer >= dashspeed) {
          storage[num] = '-';
        } else {
          storage[num] = '.';
        }
        num++;
        timer = 0;
        readstep = 0;
        spaced = false;
      }
      break;
    }
  } else {
    digitalWrite(LED, HIGH);
    
    switch (readstep) {
      case 0:
      timer = 0;
      if (!state && oldstate) {
        readstep = 1;
      }
      break;
      case 1:
      timer++;
      if (state && !oldstate) {
        readstep = 2;
      }
      break;
      case 2:
      dotspeed = timer;
      dashspeed = 3*dotspeed;
      digitalWrite(LED, LOW);
      active = true;
      readstep = 0;
      num = 0;
      timer = 0;
      spaced = true;
      break;
    }
  }
  delay(1);
}
