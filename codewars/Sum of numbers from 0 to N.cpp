#include <iostream>
#include <string>
#include <sstream>

using namespace std;
/*
string a(int a){
    stringstream ss;
    ss<<a;
    string str= ss.str();
    return str;
}
*/
string tostr(int a){
    stringstream ss;
    ss<<a;
    string str= ss.str();
    return str;
}
int main()
{
    int count;
    cin >> count;
    if (count == 0)
    {
        cout << "0=0" << endl;
    }
    if (count < 0)
    {
        stringstream ss;
        ss << count;
        string str = ss.str();
        cout << str << "<0" << endl;
    }
    else if(count>0)
    {
        string ans = "0+";
        int sum=0;
        for (int i = 1; i <= count; i++)
        {
            ans=ans+tostr(i);
            sum=sum+i;
            if (i<count)
            {
                ans=ans+"+";
            }
            else if (i==count)
            {
                ans=ans+" = "+tostr(sum);
            }
            
            
        }
        cout<<ans<<endl;
    }
    
    system("pause");
}
