/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

//zoHO coRporation 1st recruitment 



#include <iostream>

using namespace std;

void toUpper(std::string &str) {
    if (str.length() == 0) {
        return;
    }
 
    str[0] = std::toupper(str[0]);
}



string changeTheLetter(string str)
{
    string finalString = "";
    string word = "";
    
    //cout << str << endl;
    
    for(auto letter:str)
    {
        
        if(letter != ' ')
        {
            word += tolower(letter);
        }
        
        else
        {
            toUpper(word);
            finalString += word + ' ';
            word = "";
        }
        
    }
    
    
    return finalString;
}




int main()
{
    string str;
    
    getline(cin, str);
    
    cout << changeTheLetter(str) << endl;

    return 0;
}
