#include <iostream>
using namespace std;

void removeChar(char* s, char c) {
    // Check String
    if (s == NULL) {
        cout << "Empty String\n"; 
        return;
    }
    
    char* j = s;
    while(*s) {
        if (*s != c) *j++ = *s; // Add all elements that are not char c
        s++;
        
        //if (s[i] == c && s[i+1] == ' ') i++; // Remove extra spaces after char c
        
        /*
        while (s[i] == c && s[i+1] == ' ' 
            || s[i] == ' ' && s[i+1] == ' ') i++; // Remove all extra spaces
        */
    }
    *s = '\0'; // NULL at the end
}

int main()
{
    char buffer[100] = "Hello World, have a lovely day";
    char* s = buffer;
    char c = 'a';
    removeChar(s, c);
    cout<< s;
    return 0;
}
