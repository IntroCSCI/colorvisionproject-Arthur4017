#ifndef COLOR_H
#define COLOR_H
#include<string>
using std::string;

class Color{
  private:
   string colorValue;

  public:
   bool isHexColor();
   bool isRed();
   string output();
   Color(string type);

};

 
#endif