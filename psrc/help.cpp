//
// Created by geo on 10/11/22.
//
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("../lib/help/msg"); string line;
    if (file.is_open()) {
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Unable to open: msg" << endl;
        cout << "If you are seeing this, that likely means that the help message file does not exist." << endl;
    }

    return 0;
}