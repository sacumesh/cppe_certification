#include <iostream>
#include <string>
#include <sstream>



std::string to_lower(const std::string &str) {
    std::string lower;
    for (int i = 0; i < str.size(); ++i) 
        lower.push_back(std::tolower(str[i]));

    return lower;
}

int main(void) {

    std::string stop_words;
    std::getline(std::cin, stop_words);

    std::string sentence;
    std::string lower;
    std::getline(std::cin, sentence);
    
    lower = to_lower(sentence);
    std::stringstream ss(to_lower(stop_words));

    std::string stop_word;
    while (getline(ss, stop_word, ',')) {
        size_t found = lower.find(stop_word);
        while (found != std::string::npos) {
            size_t len = stop_word.size();

            if (stop_word.size() + found != lower.size())
                len++;

            sentence.erase(found, len);
            lower.erase(found, len);
            found = lower.find(stop_word, found + 1);
        }
    }
    std::cout << sentence << "\n";

    return 0;
}