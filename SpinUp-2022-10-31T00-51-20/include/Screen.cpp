#include "vex.h"
#include "string"

using namespace vex;



class gui {



public:
class thatthingyoupress;
public:
class flippityfloppity;
public:
void clrscrn() {
  Brain.Screen.clearScreen();
}
  
};

class gui::thatthingyoupress {

  int x;
  int y;
  int c;

  public :
  thatthingyoupress(int x, int y, std::string text) {
    
    this->x = x;
    this->y = y;
    c = text.length();

    Brain.Screen.drawRectangle(x,y, text.length()*2, 5);
    Brain.Screen.setCursor(x + 2, y+2.5);
    Brain.Screen.print(text);


  }

  public: bool pressed() {
    while(Brain.Screen.pressing()) {
      wait(10,msec);
    }
    if (Brain.Screen.xPosition() >= x && Brain.Screen.xPosition() <= x +c*2 && Brain.Screen.yPosition() >= y && Brain.Screen.xPosition() <= y +5) {
      return true;
    }
    else {
      return false;
    }
  }







};

class gui::flippityfloppity {
  int x;
  int y;
  int c;

  public :
  flippityfloppity(int x, int y, std::string text) {
    
    this->x = x;
    this->y = y;
    c = text.length();

    Brain.Screen.drawRectangle(x,y,c*2, 5);
    Brain.Screen.setCursor(x - c/2 +4, y-2.5);
    Brain.Screen.print(text);


  }
};

