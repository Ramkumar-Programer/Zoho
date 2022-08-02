/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <stack>

using namespace std;


bool areBalanced(string express)
{
    std::stack<char> s;
    char x;
    
    for(auto i:express)
    {
        if( i == '(' || i == '[' || i == '{')
        {
            s.push(i);
            continue;
        }
        
        if(s.empty())
            return false;
        cout << i << endl;
        switch(i)
        {
            case ')':
                x = s.top();
                s.pop();
                if(x == '{' || x == '[')
                    return false;
                break;
                
                
            case '}':
                x = s.top();
                s.pop();
                if(x == '(' || x == '[')
                    return false;
                break;
                
            case ']':
                x = s.top();
                s.pop();
                if(x == '(' || x == '{')
                    return false;
                break;
        }
        
    }
    
    
    return (s.empty());
}


int main()
{
    string expression;
    
    cin >> expression;
    
    if(areBalanced(expression))
    {
        cout << "Balanced" << endl;
    }
    else
    {
        cout << "Not Balanced" << endl;
    }

    return 0;
}
