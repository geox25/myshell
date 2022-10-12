// 10-11-22
#include <iostream>
#include <cstdlib>
#include <filesystem>
#include "xps.hpp"

using namespace std;

int main() {
    // Shell starts from here
    string input; string *p = &input;

    while (xps::getLine(p) != "exit") {
        if (input.empty() || xps::isInvalid(input))
            continue;

        string exec_file = input.substr(0, input.find(' '));

        if (filesystem::exists("pbin/" + exec_file)) {
            string s = "pbin/" + input;
            const char *cmd = s.c_str();

            system(cmd);
        } else {
            cout << "File: " << exec_file << " doesn't exist!" << endl;
        }
    }

    return 0;
}
