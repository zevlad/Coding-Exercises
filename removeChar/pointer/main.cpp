#include <iostream>
using namespace std;

void removeChar(char* s, char c) {
    // Check String
    if (s == NULL) {
        cout << "Empty String\n"; 
        return;
    }
    char* j; 
    for(j = s; *s; s++) if (*s != c) *j++ = *s;
    *j = '\0'; // NULL at the end
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