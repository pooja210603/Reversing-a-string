# Reversing a string

## Strings
Strings are used for storing text/characters.
For example, "Hello World" is a string of characters.
Unlike many other programming languages, **_C does not have a String type_** to easily create string variables. Instead, you must **_use the char type and create an array of characters to make a string_** in C:</br>

char test[] = "Hello World!";</br>

## Access Strings
Since strings are actually arrays in C, you can access a string by referring to its index number inside square brackets [].</br>

printf("%c", test[0]);
## Algorithm:
1. Ask user to input a string to be reversed.
2. Store it in an array.
3. Calculate the length of the string by using the **strlen** function.
4. Apply a for loop from (counter variable= length-1) initially and decrementing the value till  (counter variable>=0) , printing the array in reverse.

![image](https://user-images.githubusercontent.com/125560933/221756539-b15ef191-8538-4519-b0a0-58cfec8d50db.png)


