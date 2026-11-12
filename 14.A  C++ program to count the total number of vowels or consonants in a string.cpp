#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str;
    int vowels = 0, consonants = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str) 
	{
        if (isalpha(ch)) 
		{
            char lowerCh = tolower(ch);
            if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u')
			 {
                vowels++;
            } else 
			{
                consonants++;
            }
        }
    }

    cout << "Total number of vowels: " << vowels << endl;
    cout << "Total number of consonants: " << consonants << endl;

    return 0;
}
