#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    ifstream in("input.txt");
    if (!in) {
        cout << "Cannot open input file.\n";
        return 1;
    }

    ofstream out("TextFile1.txt");
    if (!out) {
        cout << "Cannot open output file.\n";
        return 1;
    }

    string str[5];
    cout << "File contents:\n";
    for (int i = 0; i < 5; i++) {
        in >> str[i];
        cout << str[i] << endl;
    }

    sort(str, str + 5);

    cout << "Strings (Names) in alphabetical order:\n";
    for (int i = 0; i < 5; i++) {
        cout << str[i] << "\n";
        out << str[i] << "\n";
    }

    return 0;
}