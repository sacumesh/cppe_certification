#include <iostream>
#include <cctype>
#include <climits>
#include <string>

using namespace std;

bool is_digits(const string &str) {
    
    for (int i = 0; i < str.size(); ++i) {
        if (!isdigit(str[i]))
            return false;
    }

    return true;
}

bool is_valid(const string &ip_part) {

    if (!is_digits(ip_part)) {
        cout << "Only digits are allowed" << endl;
        return false;
    }

    int part = stoi(ip_part);
    if (part >= 1000) {
        cout << "Too many characters in part" << endl;
        return false;
    } else if (part > 255) {
        cout << "Too big value of a part" << endl;
        return false;
    }

    return true;


}

int main(void){
    string ip, part_str;

    getline(cin, ip);
    ip.push_back('.');

    size_t next_idx = 0;
    size_t start_idx = 0;
    int n_parts = 0;
    
    next_idx = ip.find('.', start_idx);
    while (next_idx != string::npos) {
        part_str = ip.substr(start_idx, next_idx - start_idx);        
        start_idx = next_idx + 1;
        next_idx = ip.find('.', start_idx);

        if (!is_valid(part_str))
            return 1;
    
        n_parts++;
    }
        
    if (n_parts != 4) {
        cout << "IPv4 must only contain 4 parts" << endl;
        return 1;
    }

    cout << "Correct IP" << endl;
    
    return 0;
}