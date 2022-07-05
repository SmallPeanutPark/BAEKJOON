#include <iostream>

int main(void) {
    std::ios::sync_with_stdio(false);
    std::cout << '\\' << "    " << '/' << '\\' << '\n';
    std::cout << " " << ')' << "  " << '(' << " '" << ")" << '\n';
    std::cout << '(' << "  " << "/" << "  " << ')' << '\n';
    std::cout << " " << '\\' << "(__)" << '|';
    return 0;       
}
