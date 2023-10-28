#include "caesar.h"
#include <iostream>
#include <string>

using namespace std;

std::string caesarCipher(const std::string& text, int key, bool encrypt) 
{
    const std::string alfabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    int letterQ = alfabet.length();
    std::string result = "";

    for (int i = 0; i < text.length(); i += 1) {
        char c = text[i];

        if (c == ' ') {
            result += c;
        } else {
            int index = alfabet.find(c);

            if (index != std::string::npos) {
                int codeIndex;

                if (encrypt) {
                    codeIndex = (letterQ + index + key) % letterQ;
                } else {
                    codeIndex = (letterQ + index - key) % letterQ;
                }

                result += alfabet[codeIndex];
            }
        }
    }

    return result;
}