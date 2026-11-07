#include <iostream>
#include <string>

using namespace std;



int main(void) {

    string from;
    getline(std::cin, from);

    string to;
    getline(std::cin, to);

    string sentence;
    getline(std::cin, sentence);

    size_t found = sentence.find(from);
    sentence.replace(found, from.size(), to);

    cout << sentence << endl;

    return 0;
}