#include <iostream>
#include <fstream>
#include <cctype> 
#include <sstream> 
#include <algorithm> 

using namespace std;

int countVowels(string str) {
    int vowelCount = 0;
    for (char ch : str) {
        char lowerCh = tolower(ch);
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
            vowelCount++;
        }
    }
    return vowelCount;
}

int countWords(string str) {
    stringstream ss(str);
    string word;
    int wordCount = 0;
    while (getline(ss, word, ' ')) { 
        wordCount++;
    }
    return wordCount;
}

string reverseString(string str) {
    reverse(str.begin(), str.end()); 
    return str;
}

string capitalizeSecondLetter(string str) {
    istringstream iss(str);
    ostringstream oss;
    string word;

        getline(iss, word, ' ');
    oss << word << ' ';

    while (getline(iss, word, ' ')) {
        if (word.size() > 1) {
            word[1] = toupper(word[1]); 
        }
        oss << word << ' ';
    }

    return oss.str().substr(0, oss.str().length() - 1); 
}

int main() {
    string fileName = "example.txt"; 
    ifstream fileData(fileName);

    if (fileData.is_open()) {
        string fileContents;
        getline(fileData, fileContents); 

        int vowels = countVowels(fileContents);

        int words = countWords(fileContents);

        string reversed = reverseString(fileContents);

        string capitalized = capitalizeSecondLetter(fileContents);

        cout << "Original sentence: " << fileContents << endl;
        cout << "Number of vowels: " << vowels << endl;
        cout << "Number of words: " << words << endl;
        cout << "Reversed sentence: " << reversed << endl;
        cout << "Sentence with second letters capitalized: " << capitalized << endl;

        fileData.close();
    } else {
        cout << "Error opening file: " << fileName << endl;
    }

    return 0;
}
