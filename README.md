# Arthur's Technicolor Dream Coat

## Description


palette analyzer
(intended funtion)
-read user input file
-identify colors by hex number
-tell the user if there are red colors present within the file entered

### v0.2 Updates

The program can now read in a file and successfully pull potential hex color values out of the document and place them in a vector.

The program can also successfully test a value to determine whether or not the series of characters in the string represents a hex color number.


### v1.0 Updates

The finished program can successfully read a file, store values from the file that could be 


## Developer

Arthur Matter

## Example

The program should initially prompt the user to input a file. A .css file that was provided for an example was used during the making and debugging of the program. Once the filename is entered the program will then open the file and read through it to check for potential hex color numbers. Once a series of numbers has been identified they are then individually stored in a vector so that they can be put into a function that checks whether or not they are colors. Once six digit hex number have been identified they are then passed to a function that checks whether or not there is any red present in those colors.

```
g++ --std=c++17 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

cpu : "Please enter the file to be opened:"
user : example.css
cpu : returns a list of the six digit hex values in the program that have red values in the first two positions followed by the indicator "contains red". 



## C++ Guide

### Variables and Data Types


Strings were used to store potential hex values that were collected from the .css file that the user entered. Variables of type size_t were used to identify the position of potential hex values within the user entered file. Class Color type variables were used to store colors once they had been pulled from the file. Class Color type variables were also used to create a vector to store hex values.


### Console Input and Output


The user enters in the name of the file that they would like to have checked for hex color values, the program will then output a list hex color numbers that contain red. 

### Decisions


Decision is used in the hexSearch() function  to determine: if the file reader is open, if any strings are located using the # to locate strings, and to place those strings into a vector.

Decision is used in the isHexColor() function to  identify whether or not a string is a hex color. 

Decision is used in the isRed() function to determine whether or not a hex color has any amount of the color red.

Decision is used in the main() function to return to the user the values that contain red.


### Iteration



The program uses a while loop to repeat the process of placing potential hex color values into a string, and thereafter into a vector.

The main() function uses a for loop to iterate through the vector that contains Color values.

### File Input and Output


The file input/output stream now works as intended.
A file can be entered to the user and searched for values, then closed successfully.

### Arrays/Vectors

Vectors are used to move the list of Color values from the function that searches a user entered file to the main function and to store the list of Color values taken from a searched file.

The function hexSearch() returns a vector of Color type to the main() function where it is stored in another vector of Color type named colorNumber.
The vector Hex in hexSearch() is used to store the potential hex number values.

### Functions

The majority of functions now exist within the Color class. 

The function isHexColor() is used to iterate through values and determine whether or not the character string is a hex coded color.

The function isRed() determines if a value entered, that is an already confirmed hex color, has red in the first two characters of the hex string.

The function hexSearch() is used to identify potential hex color numbers in a file and transfer them to the main function (or with some adjustments anywhere) so that they can be identified as real values or discarded. 


### Classes

The Color class contains the essentials for identifying and filtering out hex values from a file. It is used to create a Color type variable which is then implemented as a vector variable type. The Color class contains the constructor that allows a user to create a list of intialized Color type variables. 

Object Oriented Design :
Modular design makes the program easier to debug and test in sections. If there are any issues with the program it can be broken up into its pieces to be fixed.
It is also easier to implement changes, especially with the creation of the Color type variables. Modifying and creating Color variables can make the program easier to combine with other complementary programs. 