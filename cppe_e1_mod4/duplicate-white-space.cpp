#include <iostream>
#include <string>

using namespace std;

int main(void) {

    string sentence;
    getline(cin, sentence);
    size_t found = sentence.find("  ");
  
    while (found != string::npos) {
        unsigned count = 0;
        while (sentence[found + count + 1] == ' ')
            count++;

        sentence.erase(found, count);
        found = sentence.find("  ", found + 1);
    }

    cout << sentence << endl;

    return 0;
}