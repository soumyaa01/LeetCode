#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
std::stack <char> bracket;
    bool isValid(string s) {
        if (s.length() == 0)
        return true;
        else 
        {
            for (int i =0;i<s.length();i++)
            {
                if (s[i] == '(' || s[i] == '{' || s[i] =='[')
                {
                    bracket.push(s[i]);
                    continue;
                }
                if (s[i] == ')' || s[i] == '}' || s[i] ==']')
                {
                    if (bracket.empty())
                    {
                        return false;
                    }
                    else
                    {
                        char top = bracket.top();
                        bracket.pop();
                        if ((s[i] == ')' &&  top == '(') || (s[i] == '}' &&  top == '{') || (s[i] == ']' &&  top == '['))
                        {
                            continue;
                        }
                        else
                        {
                            return false;
                        }
                    }
                }
               
            }
      
        }
        if(bracket.empty())
        {
          return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Solution obj;
    printf("%d",obj.isValid("()[]{}"));
}