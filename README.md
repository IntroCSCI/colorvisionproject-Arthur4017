# !!!Replace with your unique project name!!!

## Description


palette analyzer
(intended funtion)
-read user input file
-identify colors by nex number
-tell the user if there is a high red value

### v0.2 Updates

*Coming soon*

### v1.0 Updates

*Coming soon*


## Developer

Arthur Matter

## Example

The program should based on where it is now, repeat to the user what hex numbers they have typed to cin

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

Enter the color values inlcuding the '#' sign of each value. Hit 'enter' when complete.
(User input)#123456 #ffea56 #afde23

(program output)#123456 #ffea56 #afde23
```

## C++ Guide

### Variables and Data Types

!!!Replace with a summary and examples of how multiple variables have been used with a variety of data types and why they have been used effectively and appropriately!!!

I used multiple strings to identfy the characters within the hex number that was supposed to be input. Then I converted those strings into hex values and stored those hex values into an integer variable. I also decided to use the size_t data type based on how it is applied in an assignment because that seemed like it would make my work easier at the time.

### Console Input and Output

!!!Replace with a summary and examples of how input and output have been used effectively and appropriately!!!

The user enters in a value in the format #rrggbb.

### Decisions

!!!Replace with a summary and examples of how multiple decision constructs have been used effectively and appropriately!!!

The primary decision construct determines if there is a value of the format #rrggbb. A secondary if statement identifies whether or not the value read into the program is a hex value. 

### Iteration

!!!Replace with a summary and examples of how iteration has been used effectively and appropriately!!!

The program uses multiple loops to iterate through an array and a vector. 

I had some help from Todd Gibson with authoring another loop to replace the for loop that I had written initially. 

### File Input and Output

!!!Replace with a summary and examples of how input and/or output of files have been used effectively and appropriately!!!

There is code written for opening a file and reading from the file but I decided to focus my efforts on the user interaction for the deliverable so that code is ultimately untested. 
The program should be able to open a css file and read in any value of the format #rrggbb. 

### Arrays/Vectors

*Coming in version 0.2*

### Functions

*Coming in version 0.2*

### Classes

*Coming in version 1.0*
