#include <iostream>
#include <string>
#include "polybius.h"
#include "caesar.h"
#include "xor.h"

using namespace std;

int main ()
{
  
    std::cout
    << "\033[1;32m"
    << "-------------------------------------------------------------------------------\n"
    << "\n"
    << "███████╗███╗░░██╗░█████╗░██████╗░██╗░░░██╗██████╗░████████╗██╗░█████╗░███╗░░██╗\n"
    << "██╔════╝████╗░██║██╔══██╗██╔══██╗╚██╗░██╔╝██╔══██╗╚══██╔══╝██║██╔══██╗████╗░██║\n"
    << "█████╗░░██╔██╗██║██║░░╚═╝██████╔╝░╚████╔╝░██████╔╝░░░██║░░░██║██║░░██║██╔██╗██║\n"
    << "██╔══╝░░██║╚████║██║░░██╗██╔══██╗░░╚██╔╝░░██╔═══╝░░░░██║░░░██║██║░░██║██║╚████║\n"
    << "███████╗██║░╚███║╚█████╔╝██║░░██║░░░██║░░░██║░░░░░░░░██║░░░██║╚█████╔╝██║░╚███║\n"
    << "███████╗██║░╚███║╚█████╔╝██║░░██║░░░██║░░░██║░░░░░░░░██║░░░██║╚█████╔╝██║░╚███║\n"
    << "╚══════╝╚═╝░░╚══╝░╚════╝░╚═╝░░╚═╝░░░╚═╝░░░╚═╝░░░░░░░░╚═╝░░░╚═╝░╚════╝░╚═╝░░╚══╝\n"
    << "\n"
    << "-------------------------------------------------------------------------------\n"
    << "                                                    Coded By hpxxph       "
    << std::endl;

        cout << "(1)Caesar's encryption\n";
        cout << "(2)XOR cipher\n";
        cout << "(3)Polybius square\n";
        cout << endl;
        cout << "(Eny Key)Exit\n";

        std::cout << "-------------------------------------------------------------------------------\n" << std::endl;

        while(true)
        {
            int userChoice;
            cout << "\nEnter your choice: ";
            cin >> userChoice;

            if (userChoice == 1)
            {
                int key;
                string text;

                cout << "\nEnter your text: ";
                cin >> text;

                cout << "\nEnter your key: ";
                cin >> key;

                string encryptedText = caesarCipher(text, key, true);
                string decryptedText = caesarCipher(text, key, false);

                cout << "\033[1;31m";
                cout << "\nEncrypted text: " << encryptedText << std::endl;
                cout << "\nDecrypted text: " << decryptedText << std::endl;
                cout << "\033[32m";
        }
        else if (userChoice == 2)
        {
            string userText, key;

            cout << "\nEnter your text: "; 
            cin >> userText; 

            cout << "\nEnter your key: ";
            cin >> key; 

            string ciphertext = XOR(userText, key);
            string decryptedText = XOR(userText, key);

            cout << "\033[1;31m";
            cout << "\nEncrypted text: " << XOR(userText, key) << '\n';
            cout << "\nDecrypted text: " << userText << '\n';
            cout << "\033[32m";
        }
        else if (userChoice == 3)
        {
            string text; 
            cout << "\nEnter your text: ";
            cin >> text; 

            cout << "\033[1;31m";
            cout << "\nEncrypted text: " << polybiusSquareEncrypt("text") << endl;
            cout << "\033[32m";
        }
        else
        {
           cout << "Exit the program" << endl;
           break;
        }
    } 

    return 0;
}