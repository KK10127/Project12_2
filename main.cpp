/*
 * CHAPTER 12, PROJECT 2
 * CS 151
 * Tu 5:30-9:20 with Porto
 * Programmer: Jay Montoya
 *
 *
 * PROBLEM STATEMENT:
 *      Modify the program you wrote in problem 1 (word counter), so that it also displays the average number of letters
 *      in each word.
 *
 *
 *
 */
#include <iostream>
using namespace std;


int main() {

    //prompt user
    cout << "\nEnter a sentence: ";

    // set a max sentence lenght
    const int SENTENCE_LENGTH = 150;

    // create the cstring
    char sentence[SENTENCE_LENGTH];


    // fill the cstring with the user input
    cin.getline(sentence,SENTENCE_LENGTH);

    // create a pointer to point to our solution
    char * pch;

    // split the cstring into tokens delimited by
    // the space base
    cout << "Splitting into tokens...\n" << endl;
    pch = strtok(sentence, " ");

    // create a pointer to count each of the letters
    char * counter;
    int numLetters;
    counter = pch;
    while (*counter != '\0') {
        numLetters++;
        counter++;

    }


    // create variable to count the tokens
    int numWords = 0;

    // loop through the tokens counting each one
    while(pch != NULL) {
        numWords++;
        pch = strtok(NULL, " ");

        // count and add letters
        counter = pch;
        if (counter == nullptr) // check if nullptr because this means we're on the last word
            break;
        while (*counter != 0) {
            numLetters++;
            counter++;
        }


    }


    // calculate the average
    int avg = numLetters / numWords;

    // output solution to the user.
    cout << "This sentence has " << numWords << " words.." << endl;
    cout << "\tAverage letters per word: " << avg << endl;

}
