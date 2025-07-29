#include <iostream>
#include <string>
#include <vector>
 
int main() {
    std::string s;
    std::cin >> s;
    std::vector<std::string> not_find {"2", "3", "5", "6", "7", "8", "9", "0", "444"};
    for (const auto& str : not_find) {
    if (s.find(str) != std::string::npos) {
        std::cout << "NO" << std::endl;
        return 0;
    }
    }
    if (s.front() == '4') std::cout << "NO" << std::endl;
    else std::cout << "YES" << std::endl;
}