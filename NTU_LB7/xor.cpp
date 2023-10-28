#include <iostream>
#include <string>

using namespace std; 

std::string XOR(const std::string& text, std::string key)
{
    std::string result = text; 

    for (size_t i = 0; i < text.length(); i += 1)
    {
        result[i] = text[i] ^ key[i % key.length()];
    }

    return result;
}