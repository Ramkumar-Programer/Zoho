#include <iostream>

using namespace std;

bool isPalindrome(string word)
{
    for(int index = 0, rev = word.size()-1; index < (word.size()/2); index += 1, rev -= 1)
    {
        if(word[index] != word[rev])
        {
            return false;
        }
    }
    return true;
}


string removePalindrome(string str)
{
    string removePalindromeString = "";
    string word = "";
    
    for(auto letter: str )
    {
        if (letter != ' ')
        {
            word += letter;
        }
        else
        {
            if(!isPalindrome(word))
            {
                removePalindromeString += word + " ";
            }
            word = "";
        }
    }
    
    
    
    return removePalindromeString;
}



int main()
{
    
    string str;
    
    getline(cin, str);
    
    cout << str << endl;
    
    cout << removePalindrome(str) << endl;
    
    return 0;
}
