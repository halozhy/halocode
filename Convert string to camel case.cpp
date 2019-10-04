#include<iostream>
using namespace std;
int main(){
    string text;
    cin>>text;
    char f;
    f=text[0];
    // cout<<(int)f<<endl;
    /*
    if((int)f>=97){
        text[0]=(char)((int)f-32);
    }
    
    cout<<text<<endl;
    */
    int n=1;
    for (int i = 1; i < text.length(); i++)
    {
        if (text[i]=='_'||text[i]=='-')
        {
            text[i]=' ';
            n++;
            if(i<text.length())
            {
                if((int)text[i+1]>=97)
                {
                    text[i+1]=(char)((int)text[i+1]-32);
                }
            }
            
        }
    }
    // cout<<text<<endl;

    for (int i = 1; i < text.length(); i++)
    {
        if (text[i]==' ')
        {
            text.erase(i,1);
        }
        
    }

    cout<<text<<endl;

    system("pause");
}