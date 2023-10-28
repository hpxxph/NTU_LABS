#include <iostream>
#include <string>
#include <cctype>

std::string polybiusSquareEncrypt(const std::string& text) {
    const char polybiusSquare[5][5] = {
        {'A', 'B', 'C', 'D', 'E'},
        {'F', 'G', 'H', 'I', 'K'},
        {'L', 'M', 'N', 'O', 'P'},
        {'Q', 'R', 'S', 'T', 'U'},
        {'V', 'W', 'X', 'Y', 'Z'}
    };

    std::string result = "";

    for (int i = 0; i < text.length(); i++) {
        char c = text[i];
        
        if (std::isalpha(c)) {
            c = std::toupper(c);
            if (c == 'J') c = 'I';

            for (int row = 0; row < 5; row++) {
                for (int col = 0; col < 5; col++) {
                    if (polybiusSquare[row][col] == c) {
                        result += std::to_string(row + 1) + std::to_string(col + 1);
                    }
                }
            }
        } else {
            result += c;
        }
    }

    return result;
}
