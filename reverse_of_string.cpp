#include <iostream>
#include<string>
using namespace std;

int reverse(string s)
{
    if(s.length()==1)
    {
        cout<<s<<endl;
        return 0;
    }
    else
    {
        cout<<s[s.length()-1];
        int temp = s.length() - 1;
        reverse(s.substr(0,temp));
        return 0;
    }
}
int main()
{
    cout<<"Enter a String"<<endl;
    string s;
    char *ch = new char(s.length());
    cin>>s;
    cout<<"reverse of string->";
    reverse(s);
    return 0;
}