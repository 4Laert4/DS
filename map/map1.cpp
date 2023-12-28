#include <iostream>
#include <map>

int main() {
    std::string str;
    std::map<char, std::pair<int, int>> m;

    std::cin >> str;

    for (int i = 0; i < str.size(); ++i) {
        auto& entry = m[str[i]];
        if (entry.second == 0) {
            entry.first = i;  
        }
        entry.second++;  
    }

    int min = str.size();
    for (const auto& elem : m) {
        if (elem.second.second == 1) {
            min = std::min(min, elem.second.first);
        }
    }

    if (min == str.size()) {
        std::cout << "-1";
    } else {
        std::cout << min;
    }

    return 0;
}

