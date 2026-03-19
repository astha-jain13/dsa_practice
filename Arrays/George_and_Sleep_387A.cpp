#include <iostream>
using namespace std;

int main() {
    string s,t,p;
    int sh,sm,th,tm,ph,pm,a,b,x;
    
    //Take input of current time
    cin>>s;
    
    //Take input of sleeping time
    cin>>t;
    
    //coversion of string into integer
    sh = (s[0]-'0')*10+(s[1]-'0');
    sm = (s[3]-'0')*10+(s[4]-'0');
    th = (t[0]-'0')*10+(t[1]-'0');
    tm = (t[3]-'0')*10+(t[4]-'0');
    
    //Converion into time(minutes)
    a = (sh*60)+sm;
    b = (th*60)+tm;
    
    //Calculating difference in time
    x = a-b;
    
    //Handling negative value
    if(x<0){
        x+=1440;
    }
    
    //Conversion into time
    ph = x/60;
    pm = x%60;
    
    //Converting back to string
    p += ph/10 + '0';
    p += ph%10 + '0';
    p += ":";
    p += pm/10 + '0';
    p += pm%10 + '0';
    cout<<p;
}
