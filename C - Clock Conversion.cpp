#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string time;
        cin>>time;
        int s = time[0]-48;
        s = 10*s+(time[1]-48);
        if(s>12 && s-12<10)cout<<"0"<<s-12<<time[2]<<time[3]<<time[4]<<" PM"<<endl;
        else if(s>12 && s-12>9)cout<<s-12<<time[2]<<time[3]<<time[4]<<" PM"<<endl;
        else if(s==12)cout<<s<<time[2]<<time[3]<<time[4]<<" PM"<<endl;
        else if(s==0)cout<<"12"<<time[2]<<time[3]<<time[4]<<" AM"<<endl;
        else cout<<time<<" AM"<<endl;
    }
    
    return 0;
}