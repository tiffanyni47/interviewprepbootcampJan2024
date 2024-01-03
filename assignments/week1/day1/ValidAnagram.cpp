/*
Name: Tiffany Ni
HW1: Valid Anagram
*/

#include <iostream>
#include <algorithm>
using namespace std;

class Solution{
public:
    bool isAnagram(string s, string t){ 
        sort(s.begin(), s.end()); //sort() function from library in C++
        sort(t.begin(), t.end());
        if (s == t){  //compare the two string after they are sorted
            return true;
        }
        else{
            return false;
        }
    }
};