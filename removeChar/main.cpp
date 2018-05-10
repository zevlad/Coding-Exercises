#include <iostream>
using namespace std;

void removeChar(char* s, char c) {
    // Check String
    if (s == NULL) {
        cout << "Empty String\n"; 
        return;
    }
    
    int j = 0;
    for (int i = 0; s[i] != 0; i++) {
        if (s[i] != c) s[j++] = s[i]; // Add all elements that are not char c
        if (s[i] == c && s[i+1] == ' ') i++; // Remove extra spaces after char c
        
        /*
        while (s[i] == c && s[i+1] == ' ' 
            || s[i] == ' ' && s[i+1] == ' ') i++; // Remove all extra spaces
        */
    }
    s[j] = '\0'; // NULL at the end
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

