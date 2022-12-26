// This program gets a user-provided word and checks if the word is basically symmetrical
#include <iostream>
#include <string>

using namespace std;

int main() {

    int i;
    // house user word
    string user_word;
    int flag = 0;
    //Flag variable is used as a signal in programming to let the program know that a certain condition has met.int flag = 0;

    //intro
    cout << "Hey! This is the palindrome decider!";
    cout << endl;

    //Do while loop the following lines retrieves the users words
    do
    {
        cout << "Insert a word of choice: ";
        cin >> user_word;
        int len = user_word.length();

        //for loop tries to identify palindrome
        for (i = 0; i < len; i++)
        {
            if (user_word[i] != user_word[len - 1 - i])
            {
                flag = 1;
                break;
            }
        }

        // stage two
        if (flag == 1 && user_word[len - 1] == user_word[0] &&
            user_word[len - 2] == user_word[1] &&
            user_word[len - 3] == user_word[2])
        {
            cout << "No palindrome, close enough.";
        }
        else if (flag == 1)
        {
            cout << "NOT a palindrome. Try again!";
        }
        else if (flag == 0)
        {
            cout << "Awesome, Your word is a palindrome!";
            cout << endl;
        }   
  } while(flag != 1);
   cout << endl;
  return 0;