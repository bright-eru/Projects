#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
    if (argc < 2) {
        cerr << "ERROR: A filename must be specified as the first argument.\n";
        exit(EXIT_FAILURE);
    }

    bool valid_braces = true;
    
    
    /* DO NOT MODIFY THE CODE ABOVE OR BELOW THIS COMMENT BLOCK */
    /*                  YOUR CODE GOES HERE                     */
    /* DO NOT MODIFY THE CODE ABOVE OR BELOW THIS COMMENT BLOCK */


    if (valid_braces) {
        cout << "Baby G approves!" << endl;
    } else {
        cout << "Baby G does NOT approve!" << endl;
    }

    return 0;
}

