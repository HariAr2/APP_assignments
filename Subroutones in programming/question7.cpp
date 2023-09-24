/* 
Implement a program that reads a text file and dynamically stores each line as a string in
memory. Then, display the content of the file with line numbers.
*/
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string RA2211003010002_filename;
    cout << "Enter the name of the text file: ";
    cin >> RA2211003010002_filename;

    ifstream RA2211003010002_file(RA2211003010002_filename);
    if (!RA2211003010002_file) {
        cout << "Error opening file." << endl;
        return 1;
    }

    string* RA2211003010002_lines = nullptr;
    int RA2211003010002_lineNumber = 0;

    while (!RA2211003010002_file.eof()) {
        string RA2211003010002_line;
        getline(RA2211003010002_file, RA2211003010002_line);

        if (!RA2211003010002_line.empty()) {
            RA2211003010002_lineNumber++;

            string* RA2211003010002_temp = new string[RA2211003010002_lineNumber];
            for (int i = 0; i < RA2211003010002_lineNumber - 1; i++) {
                RA2211003010002_temp[i] = RA2211003010002_lines[i];
            }
            RA2211003010002_temp[RA2211003010002_lineNumber - 1] = RA2211003010002_line;

            delete[] RA2211003010002_lines;
            RA2211003010002_lines = RA2211003010002_temp;
        }
    }

    RA2211003010002_file.close();

    for (int i = 0; i < RA2211003010002_lineNumber; i++) {
        cout << "Line " << i + 1 << ": " << RA2211003010002_lines[i] << endl;
    }

    delete[] RA2211003010002_lines;

    return 0;
}