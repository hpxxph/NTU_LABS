#include <iostream>
#include <string>

int main () 
{
    setlocale(LC_ALL, "ru");

    const int SIZE = 79; 
    char input[SIZE];
    int count = 0; 
    
    std::cout << "Enter your text: "; 

    for (int i = 0; i < SIZE; i += 1)
    {   
        std::cin >> input[i];
        count += 1;

        if (input[i] == '.') 
            break;
    }

    std::cout << "Your text lenght: " << count << std::endl; 
    return 0; 
}