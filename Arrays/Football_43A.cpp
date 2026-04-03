


#include <iostream>
using namespace std;

int main()
{
    int n;
    //Take input of no. of lines in description
    cin>>n;
    
    string s,team1,team2;
    int count1=0, count2=0;
    
    for(int i=0;i<n;i++){
        //Take input of each line
        cin>>s;

        //Compare if first string entered then name it as team1 and increase the count
        if(i==0){
            team1=s;
            count1++;
        }
        //Compare if input string is same as team1 and increase the count
        else if(s==team1){
            count1++;
        }
        //Compare if string is different from team1 then name it as team2 and increase the count
        else{
            team2=s;
            count2++;
        }
    }

    //Find the max count and print the string with max count
    if(count1>count2){
        cout<<team1;
    }
    else{
        cout<<team2;
    }
}
