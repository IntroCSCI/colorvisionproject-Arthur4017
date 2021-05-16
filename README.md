# Arthur's Technicolor Dream Coat

## Description


palette analyzer
(intended funtion)
-read user input file
-identify colors by nex number
-tell the user if there are red colors present within the file entered

### v0.2 Updates

The program can now read in a file and successfully pull potential hex color values out of the document and place them in a vector.

The program can also successfully test a value to determine whether or not the series of characters in the string represents a hex color number.


### v1.0 Updates

*Coming soon*


## Developer

Arthur Matter

## Example

The program should initially prompt the user to input a file. A .css file that was provided for an example was used during the making and debugging of the program. Once the filename is entered the program will then open the file and read through it to check for potential hex color numbers. Once a series of numbers has been identified they are then individually stored in a vector so that they can be put into a function that checks whether or not they are colors. The program will then run some test values for the function that checks if a string is a hex color. After this the program will display a message to the console.

```
g++ --std=c++17 *.cpp -o cvp
./cvp
```

Here is an example of the program running:




## C++ Guide

### Variables and Data Types

!!!Replace with a summary and examples of how multiple variables have been used with a variety of data types and why they have been used effectively and appropriately!!!

I used multiple strings to identfy the characters within the hex number that was supposed to be input. Then I converted those strings into hex values and stored those hex values into an integer variable. I also decided to use the size_t data type based on how it is applied in an assignment because that seemed like it would make my work easier at the time.

### Console Input and Output



The user enters in the name of the file that they would like to have checked for hex color values, the program will then output a list of potential hex color values.

### Decisions


Decision is used in the fileSearch() function  to determine: if the file reader is open, if any strings are located using the # to locate strings, and to place those strings into a vector.

Decision is used in the isHexColor() function to  identify whether or not a string is a hex color. 

Decision is used in the isRed() function to determine whether or not a hex color has any amount of the color red.


### Iteration



The program uses a sinlge while loop to repeat the process of placing potential hex color values into a string, and thereafter into a vector.

### File Input and Output


The file input/output stream now works as intended.

### Arrays/Vectors

A vector is returned from a function. The vector is created to hold a list of potential hex values. The size is indeterminable at the time of compilation as the program has to evaluate a file of unknown size so a vector was used to hold the string values.

### Functions

The functions exist to make the program much easier to read and debug. Prior to having the functions they were creating a rat nest of code, now things are more decipherable and divided into neat packages. Functions were also necessary because the tasks that this program needs to complete are each too complex to be included in the main function. 


### Classes

*Coming in version 1.0*
