//Arthur Matter
#include <iostream>
#include<vector>
#include<fstream>
#include<sstream>
using namespace std;

int main() {
  /*int he;
  cout << "Enter hex number. Number will be converted to decimal." << endl;
  cin >> hex >> he;
  cout << dec << he;
*/

size_t position;
string input;
string color;
string hold;
vector<int> rgb(100);

/*
 string fileName = "";
      ifstream reader;
      string line = "";
      size_t position;
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
            for (char amount = position += 1; line[amount] >= '0' && line[amount] <= 'f'; amount++ )
            {
              cout<< line[amount];
            }
          }
        }
      }
      reader.close();

*/
 cout << "Enter the color values inlcuding the '#' sign of each value. Hit 'enter' when complete." << endl;
 
   getline(cin,input);
 //cin >> input; 
     position = input.find("#");
 
      if(input[position] > 0)
      {
        for( int index = position ; index < input.size() ; index ++) 
        {
          if( (input[index] >= '0' && input[index] <= '9') 
          || (input.find('a') < input.length()) ||
          (input.find('b') < input.length()) ||
          (input.find('c') < input.length()) ||
          (input.find('d') < input.length()) ||
          (input.find('e') < input.length()) ||
          (input.find('f') < input.length()) ||
          (input.find('#') < input.length())
          ) // If he symbol is between 1 & 9 or  between a - f  . . .
          {
            
            color = input.at('#');
            //color_number >> hex >> rgb.at(index);
            
            /*(for(int gout; gout< rgb.size(); gout++)
            {
             
            cout << hex << rgb[gout]; // . . .then repeat the symbol to cout

            } */

          } else {break;}
          
          
           /* for(int gout; gout <= rgb.size(); gout++)
            {
             
            cout << hex << rgb.at(gout); // . . .then repeat the symbol to cout

            } */

        } //end of for-loop
           rgb.push_back(position);
            
           stringstream color_number(color);

           cout << rgb.size() << endl;

           color_number >> hex >> rgb.at(position);

           cout << rgb.at(position) << '\n';
      } // end of position if




  return 0;
} //end of main