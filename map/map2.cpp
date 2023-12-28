#include <iostream>
#include <map>

int main() {
    std::string str;
    std::cin >> str;
    std::map<char, int> m;

    for (char c : str) {
        m[c]++;
    }

    int sum = 0;
    bool hasSingleCharacter = false;

    for (const auto& elem : m) {
        sum += elem.second / 2 * 2;  
        if (elem.second % 2 != 0) {
            hasSingleCharacter = true;
        }
    }

    if (hasSingleCharacter) {
        sum++;
    }

    std::cout << sum << std::endl;

    return 0;
}

