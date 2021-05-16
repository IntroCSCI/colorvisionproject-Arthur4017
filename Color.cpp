#include "Color.h"


Color::Color(string type) :colorValue{type}{}
/*
{
  colorValue = type;
}
*/

string Color::output()
{
  return colorValue;
}


bool Color::isHexColor()
{

  if( colorValue.length() == 3 || colorValue.length() == 6 ){
    for(int i=0; i < colorValue.length(); i++){
      if( !(colorValue[i] >= '0' && colorValue[i] <='9') &&
          !(colorValue[i] >= 'a' && colorValue[i] <= 'f') &&
          !(colorValue[i] >= 'A' && colorValue[i] <= 'F') ){
            return false;
      }
    }
    return true;
  }
  else{
    return false;
  }
}


bool Color::isRed()
{
 string compare = colorValue.substr(0, 2); 

 if( (compare >= "1" && compare <= "9") && 
     (compare >= "a" && compare <= "f") &&
     (compare >= "A" && compare <= "F")
 ){ return false;}

 else{ return true;}

}


/*
// hex class
bool isHexColor( const string &colorValue ){

  if( colorValue.length() == 3 || colorValue.length() == 6 ){
    for(int i=0; i < colorValue.length(); i++){
      if( !(colorValue[i] >= '0' && colorValue[i] <='9') &&
          !(colorValue[i] >= 'a' && colorValue[i] <= 'f') &&
          !(colorValue[i] >= 'A' && colorValue[i] <= 'F') ){
            return false;
      }
    }
    return true;
  }
  else{
    return false;
  }
}

// hex class
bool isRed(const string color)
{
 string compare = color.substr(color[0], color[1]); 

 if( (compare >= "1" && compare <= "9") && 
     (compare >= "a" && compare <= "f") &&
     (compare >= "A" && compare <= "F")
 ){ return false;}

 else{ return true;}

}
*/