#include <iostream>
#include <set>
using namespace std;

int main()
{
    //Intialise 5 variables
    int s1,s2,s3,s4,count=0;
    
    //Take input
    cin>>s1>>s2>>s3>>s4;
    
    //Initialize a set so that we can count unique colors
    set<int> colors;
    colors.insert(s1);
    colors.insert(s2);
    colors.insert(s3);
    colors.insert(s4);
    
    //Output the no. of minimum horseshoes required
    cout<<4 - colors.size();
}
