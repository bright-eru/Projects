#include <iostream>
#include <fstream>

using namespace std;

// Hard coded queries that the user can execute
const string PRINT_MOVIE = "p";
const string ADD_GROSS = "a";
const string FILMOGRAPHY = "f";
const string STAR_POWER = "s";
const string QUIT = "q";


int main(int argc, char *argv[]){
    if (argc < 2) {
        cerr << "ERROR: A filename must be specified as the first argument.\n";
        exit(EXIT_FAILURE);
    }

    * * * * * * * * * * * * YOUR CODE * * * * * * * * * * * * *
    struct Movies{
        int Actors;
        string Actors;

    }
     * * * * * * * * * * * * YOUR CODE * * * * * * * * * * * * */
  

    // Perform the main loop of requesting and executing queries
    string query;
    cout << "Enter a query: ";
    
    // For reference on why this loop condition works, check out:
    // https://stackoverflow.com/questions/6791520/if-cin-x-why-can-you-use-that-condition
    while (cin >> query) { 
        cin.ignore();

        if (query == PRINT_MOVIE) {
            string movie_name;
            cout << "Movie Name: ";
            getline(cin, movie_name);

            /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
            *             (execute the "print movie" query)
            * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
        } else if (query == ADD_GROSS) {
            string movie_name;
            int dollars;
            cout << "Movie Name: ";
            getline(cin, movie_name);
            cout << "Dollar amount to add: ";
            cin >> dollars;

            /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
            *            (execute the "add to gross" query)
            * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
        } else if (query == FILMOGRAPHY) {
            string actor_name;
            cout << "Actor Name: ";
            getline(cin, actor_name);
;
            /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
            *            (execute the "filography" query)
            * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
        } else if (query == STAR_POWER) {
            /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
            *            (execute the "star power" query)
            * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
        }else if (query == QUIT) {
            return 0;
        } else {
            cout << query << " not recognized." << endl;
        }
        cout << endl << "Enter a query: ";
    }

    return 0;
}



