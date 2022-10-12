//
// Created by geo on 10/11/22.
//
#pragma once
#include <string>
#include <iostream>

using namespace std;

namespace xps {
    const string VERSION = "XPS version 1.0.0";

    string getLine(string *p) {
        cout << "> ";
        std::getline(cin, *p);

        return (*p);
    }
    bool onlySpaces(const string& str) {
        return str.find_first_not_of(' ') == string::npos;
    }
    bool isInvalid(const string& str) {
        if (str.at(0) == ' ' || str.at(0) == '\t') {
            return true;
        } else {
            return false;
        }
    }
}