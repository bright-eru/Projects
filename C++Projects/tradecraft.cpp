// Bright Eru Beru01
// tradecraft.cpp

#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>

using namespace std;

/*

frequency checker
input: this function receives all the characters in the input text, and the new increments
description; this function checks all the elements of the input text to find out which letter is the most frequent
output; This function returns a character which is the most frequent
*/

char frequency_checker(int alphabet[26], int number_position, int counter[256], int highest_occurence);

/*

upper_to_lower
input: this function receives only upper case letters, chars
description; this function this function receives only upper case letters, chars and turns them to lowercase
output; This function returns a char

*/
int upper_to_lower(char number_position);

/*
shift amount checker
description; this function does the final execution and provides the shift amount by subtraction from e's position
input: this function receives the most frequent character's position (an int) 
output; This function returns an int


*/
/*
position checker

input: this function receives the most frequent character 
description; this function checks for what position the character is from 1 to 26.
output; This function returns an int
*/
int position_checker(int number_position);

//Main

int main(int argc, char *argv[])
{

    if (argc < 2)
    {
        cerr << "Error: A filename must be specified as the first argument" << endl;
        exit(EXIT_FAILURE);
    }

    // declare a variable to read in from the file
    ifstream infile;
    infile.open(argv[1]);

    // Check to see if any errors occurred, exit if so
    if (infile.fail())
    {

        cerr << "Error opening file";
        exit(EXIT_FAILURE);
    }

    // Read each character in the file until infile.eof()
    // returns true, which means that the end of the file has been
    // passed.

    string line;
    int counter[256] = {0};
    int alphabet[26] = {0};
    int highest_occurence = 0;
    int number_position = 0;

    // Read each character in the file until infile.eof()
    // returns true, which means that the end of the file has reached
    char next_char;

    while (!infile.eof())
    {
        // getline(infile, line);
        infile >> next_char;
        next_char = alphabet[26];
    }
    frequency_checker(alphabet, number_position, counter, highest_occurence);
    upper_to_lower(number_position);
    

    // close file
    infile.close();

    cout << "The shift amount is: " << position_checker(number_position) << endl;

    return 0;
}

char frequency_checker(int alphabet[26], int number_position, int counter[256], int highest_occurence)
{
    for (int i = 0; i < alphabet[26]; i++)
    {
        counter[i]++;

        

        if (highest_occurence > counter[i])
        {
            highest_occurence = counter[i];
            number_position = counter[i];
        }
    }

    return number_position;
}

int upper_to_lower(char number_position)
{
    if ((number_position >= 65) && (number_position <= 90))
    {
        number_position = number_position + 32;
    }
    return number_position;
}

int position_checker(int number_position)
{
    number_position = (number_position - 97 - 4);
    if (number_position < 0)
    {
        number_position = (number_position * -1);
    }
    return number_position;
}