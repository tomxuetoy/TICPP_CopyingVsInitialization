//: C12:CopyingVsInitialization.cpp
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
#include <iostream>
 
using namespace std;
 
class Fi
{
public:
    Fi() {}
};
class Fee
{
public:
    Fee(int) {
        cout << "Fee(int)" << endl;
    }
    Fee(const Fi&) {
        cout << "Fee(const Fi&)" << endl;
    }
};
 
int main()
{
    Fee fee = 1; // equal to: Fee fee = Fee(1); // Fee(int)
    Fi fi;
    Fee fum = Fee(fi); // equal to: Fee fee = Fee(fi); // Fee(Fi)
} ///:~
/*
$ a.exe
Fee(int)
Fee(const Fi&)
* */
