#include <iostream>
using namespace std;

string isPalindrome(string S) 
{
    for (int i = 0; i <S.length() / 2; i++) 
	{
        if (S[i] != S[S.length() - i - 1]) 
		{
            return "No";
        }
    }
    return "Yes";
}

int main() {
    string S = "ABCDCBA";
    cout<<"Enter this string:"<<S<<endl;
    cout<<"Is This String Palindrome:";
    cout << isPalindrome(S)<<endl;
    return 0;
}
