#include<iostream>
#include<vector>
#include<sstream>
#include<fstream>
#include "Color.h"
using namespace std;

vector<Color> hexSearch();

int main(){
//read in file
//check file for #hex numbers
//put verified #123 & #123456 hex values in string vector
//check the first 1 (or 2) hex characters for color red pigment
//tell the user which ones have red


vector<Color> colorNumber;

/*
string num1 = "123456";
string num2 = "ffe3c0";
string num3 = "ab14c6";
string num4 = "abc";
string num5 = "123";
string num6 = "babeu&";
*/

colorNumber = hexSearch(); 

for (int i=0; colorNumber.size()> i; i++)
{
  
  if (colorNumber[i].isHexColor())
   {
     if (colorNumber[i].isRed())
      { cout << colorNumber[i].output() << " contains red." << endl; }
      
   }
}

cout << "Check for 'BUGS' in context." << endl;

}



vector <Color> hexSearch(){

size_t position;
int reference = 0;
string input;
string color;
string tempHold;
vector<Color> Hex;
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
            Color current {tempHold};
            //cout << current.output() << endl;
            if(current.isHexColor()){
             Hex.push_back(current); 
            } 
           
          }
        }
      }
      
      reader.close();
return Hex;
}

