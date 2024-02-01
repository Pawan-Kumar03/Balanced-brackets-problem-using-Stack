/*
    Lab05 Task04
    Code By  : Pawan Kumar
    CMS : 023-21-0136
    Section-C

We have discussed in class about Balanced brackets problem using Stack. Take user string input 
and check whether it’s balanced or not. Use stack functions. Input may contain any of the bracket 
among {, [, ( and any number and letters like: ({[a+b]+c}-1) and so on.
*/

#include <iostream>
using namespace std;
struct Stack
{
    string br = "";
    // . Push Function
    void push(char ch)
    {
        br += ch;
    }
    int count = 1;
    //POP Function
    char pop()
    {
        char c = br[br.length() - count++];
        return c;
    }
};
int main()
{
    Stack stack;
    int countC = 0, countS = 0, countL = 0;
    string brackets = "";
    cout << "Enter Expression : ";
    for (int i = 0; i < 10; i++)
    {

        cin >> brackets[i];
        if (brackets[i] == '(')
        {
            countC++;
            stack.push(brackets[i]);
        }
        if (brackets[i] == '[')
        {
            countL++;
            stack.push(brackets[i]);
        }
        if (brackets[i] == '{')
        {
            countS++;
            stack.push(brackets[i]);
        }
        if (brackets[i] == ')')
            stack.push(brackets[i]);
        if (brackets[i] == ']')
           stack.push(brackets[i]);
        if (brackets[i] == '}')
            stack.push(brackets[i]);
    }

    for (int i = 0; i < 9; i++)
    {
        char x = stack.pop();
        if (x == ')')
            countC--;
        if (x == ']')
            countL--;
        if (x == '}')
            countS--;
    }
    if (countC == 0 && countL == 0 && countS == 0)
        cout << "Brackets are Balanced . " << endl;
    else
        cout << "Brackets are not Balanced . " << endl;

    return 0;
}