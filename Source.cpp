#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// read and display each line in the joke file
void readJokeFile(const string& jokeFile) {
    ifstream inFile(jokeFile);

    if (inFile.is_open()) {
        string line;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    }
    else {
        cerr << "Can't open joke file." << endl;
    }
}

// displaying only the last line in the punch line file
void displayPunchLine(const string& punchLineFile) {
    ifstream inFile(punchLineFile);

    if (inFile.is_open()) {
        string line, lastLine;
        while (getline(inFile, line)) {
            lastLine = line;
        }
        cout << lastLine << endl;
        inFile.close();
    }
    else {
        cerr << "Can't open punch line file." << endl;
    }
}

int main() {
    // the file containing the joke
    string jokeFile = "C:\\Users\\javon\\source\\repos\\Project15\\Joke.txt";  

    // the file containing the punch line
    string punchLineFile = "C:\\Users\\javon\\source\\repos\\Project15\\Punchline.txt";

    readJokeFile(jokeFile);
    displayPunchLine(punchLineFile);

    return 0;
}