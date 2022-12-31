#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;
using std::cout; using std::endl;
using std::string; using std::reverse;


class Solution {
private: 
    
   string removeSpaces(string s)
    {
        s.erase(std::remove(s.begin(),s.end(),' '),s.end());
        return s;
    }
    
    string RevString(string &s){
    string rev(s.rbegin(), s.rend());
    return rev;
    }
    
    string transformString(string &s){
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    auto it = std::remove_if(s.begin(), s.end(), [](char const &c) {
        return std::ispunct(c);
    });
    s.erase(it, s.end());
    s = removeSpaces(s);

    return s;
    }

public:
    
    bool isPalindrome(string s) {
    s = transformString(s);
    string palindromeString = RevString(s);

        return palindromeString == s;
    }
};