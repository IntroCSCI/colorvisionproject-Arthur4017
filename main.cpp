#include<iostream>
#include<vector>
#include<sstream>
#include<fstream>
using namespace std;

vector<string> fileSearch();
bool isHexColor(const string &);
bool isRed();

int main(){
//read in file
//check file for #hex numbers
//put #123 & #123456 hex values in string vector
//read hex numbers from vector to verify that they are hex numbers
//use function to check the first 1 (or 2) hex characters for color red
vector<string> colorNumber;
string num1 = "123456";
string num2 = "ffe3c0";
string num3 = "ab14c6";
string num4 = "abc";
string num5 = "123";
string num6 = "babeu&";
// function call : file instream


fileSearch(); // I/O file WORKING!!
// function call : is hex number 
cout << "Hex test values:" << endl;
cout << isHexColor(num1) << endl; 
cout << isHexColor(num2) << endl;
cout << isHexColor(num3) << endl;
cout << isHexColor(num4) << endl;
cout << isHexColor(num5) << endl;
cout << isHexColor(num6) << endl;


if (isRed(num5)){
  cout << "Entered value has red color" << endl;
}

cout << "Check for 'BUGS' in context." << endl;


}



vector<string> fileSearch(){

size_t position;
int reference = 0;
string input;
string color;
string tempHold;
vector<int> rgb;
vector<string> potHex;
double index = 0;


 string fileName = "";
      ifstream reader;
      string line = "";
      int amount;
      cout<<"Please enter the file to be opened:\n";
      getline(cin, fileName);
      reader.open(fileName, ios::in);
      if ( reader.is_open() )
      {
        while ( !reader.eof() )
        {
          getline(reader,line);
          position = line.find("#");
          if ( line[position] )
          {
            tempHold = line.substr(position+1, 6);
            cout << tempHold << endl;
            if(tempHold == ""){
             potHex[reference] = tempHold;
             reference++;
            } 
           
          }
        }
      }
      
      reader.close();
return potHex;
}

/*
 isHexColor - take a string, and determine whether or not it contains: 
  - only hexadecimal values (0-9, A-F either upper or lower case)
  - AND either 3 or 6 total characters
*/
bool isHexColor( const string &values ){

  if( values.length() == 3 || values.length() == 6 ){
    for(int i=0; i < values.length(); i++){
      if( !(values[i] >= '0' && values[i] <='9') &&
          !(values[i] >= 'a' && values[i] <= 'f') &&
          !(values[i] >= 'A' && values[i] <= 'F') ){
            return false;
      }
    }
    return true;
  }
  else{
    return false;
  }
}

bool isRed(const string color)
{
 string compare = color.substr(color[0], color[1]); 

 if( (compare >= "1" && compare <= "9") && 
     (compare >= "a" && compare <= "f") &&
     (compare >= "A" && compare <= "F")
 ){ return false;}

 else{ return true;}

}
