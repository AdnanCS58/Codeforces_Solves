#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int s;
        string n;
        int count=0;
        cin>>s;
        cin>>n;
        for(int i=0; i<s; i++)
        {
            if(n[i]=='*' && n[i+1]=='*')break;
            else if(n[i]=='@')count++;
        }
        cout<<count<<endl;
    }


}
