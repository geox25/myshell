//
// Created by geo on 10/11/22.
//
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
    if (argv[1] == nullptr) {
        cout << "One argument (file) is required!" << endl;
        return 1;
    }
    string path = "../" + (string) argv[1];

    ifstream file(path); string line;
    if (file.is_open()) {
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Unable to open: " << argv[1] << endl;
    }

    return 0;
}