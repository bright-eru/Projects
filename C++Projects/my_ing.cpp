// my_ing.cpp
// Purpose: This program decides whether a user-provided
//          word ends in the suffix "ing"
// Written by: {Bright Eru, beru01)

#include <iostream>
#include <string>

using namespace std;

int main()
{
  
  string users_word;

  // This line tells the user what my program does
  cout << "Greetings! I am the \"ing\" decider!";
  cout << endl;
  
  // commands user to input word
  cout << "Please enter a word: ";
  //cout << endl;
  
  // retrieves users word
  cin >> users_word;
  int word_length = users_word.length();
  
  // checks if user choice word has ing as the last three characters
  if (users_word[word_length - 1] == 'g' && 
  users_word[word_length - 2] == 'n' && 
  users_word[word_length - 3] == 'i'){
    cout << "Awesome, this word ends in \"ing\"!";
    cout << endl;
  }
  elseif
  {
    cout << "Hey, You probably meant" << users_word << "-ing!";
    cout <<endl;
  }

  return 0;
}
