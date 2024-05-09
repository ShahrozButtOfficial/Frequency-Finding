#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const int MAX_WORD_LENGTH = 50;
    const int NUM_WORDS = 6;
    const int MAX_PARAGRAPH_LENGTH = 250;

    char inputParagraph[MAX_PARAGRAPH_LENGTH] = { '\0' };
    char word1[MAX_WORD_LENGTH], word2[MAX_WORD_LENGTH], word3[MAX_WORD_LENGTH], word4[MAX_WORD_LENGTH], word5[MAX_WORD_LENGTH], word6[MAX_WORD_LENGTH];
    int counter1 = 0, counter2 = 0, counter3 = 0, counter4 = 0, counter5 = 0, counter6 = 0;

    ifstream fin("DataFile.txt");

    if (!fin.is_open()) {
        cerr << "Error in opening file!" << endl;
    }

    int i = 0;
    char c;
    while (fin.get(c) && i < MAX_PARAGRAPH_LENGTH - 1) {
        inputParagraph[i++] = c;
    }
    inputParagraph[i] = '\0';
    fin.close();

    cout << "Paragraph: " << inputParagraph << endl;

    cout << "\nEnter six words to search for:" << endl;
    cout << "Enter Word 1: ";
    cin.getline(word1, MAX_WORD_LENGTH);
    cout << "Enter Word 2: ";
    cin.getline(word2, MAX_WORD_LENGTH);
    cout << "Enter Word 3: ";
    cin.getline(word3, MAX_WORD_LENGTH);
    cout << "Enter Word 4: ";
    cin.getline(word4, MAX_WORD_LENGTH);
    cout << "Enter Word 5: ";
    cin.getline(word5, MAX_WORD_LENGTH);
    cout << "Enter Word 6: ";
    cin.getline(word6, MAX_WORD_LENGTH);

    i = 0;
    while (inputParagraph[i] != '\0') {
        int k = 0;
        while (word1[k] != '\0' && inputParagraph[i] != '\0' && inputParagraph[i] == word1[k]) {
            i++;
            k++;
        }
        if (word1[k] == '\0') {
            counter1++;
        }
        i -= k;

        k = 0;
        while (word2[k] != '\0' && inputParagraph[i] != '\0' && inputParagraph[i] == word2[k]) {
            i++;
            k++;
        }
        if (word2[k] == '\0') {
            counter2++;
        }
        i -= k;

        k = 0;
        while (word3[k] != '\0' && inputParagraph[i] != '\0' && inputParagraph[i] == word3[k]) {
            i++;
            k++;
        }
        if (word3[k] == '\0') {
            counter3++;
        }
        i -= k;

        k = 0;
        while (word4[k] != '\0' && inputParagraph[i] != '\0' && inputParagraph[i] == word4[k]) {
            i++;
            k++;
        }
        if (word4[k] == '\0') {
            counter4++;
        }
        i -= k;

        k = 0;
        while (word5[k] != '\0' && inputParagraph[i] != '\0' && inputParagraph[i] == word5[k]) {
            i++;
            k++;
        }
        if (word5[k] == '\0') {
            counter5++;
        }
        i -= k;

        k = 0;
        while (word6[k] != '\0' && inputParagraph[i] != '\0' && inputParagraph[i] == word6[k]) {
            i++;
            k++;
        }
        if (word6[k] == '\0') {
            counter6++;
        }
        i -= k;

        i++;
    }

    cout << "\nFrequency of " << word1 << ": " << counter1 << endl;
    cout << "Frequency of " << word2 << ": " << counter2 << endl;
    cout << "Frequency of " << word3 << ": " << counter3 << endl;
    cout << "Frequency of " << word4 << ": " << counter4 << endl;
    cout << "Frequency of " << word5 << ": " << counter5 << endl;
    cout << "Frequency of " << word6 << ": " << counter6 << endl;

    return 0;
}