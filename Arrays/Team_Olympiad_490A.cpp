/*
Problem: Team Olympiad
Platform: CodeForces
Difficulty: Easy
Concept: Counting, Grouping indices
*/

#include <iostream>
using namespace std;

int main()
{ 
    int n;
    //Take input of number of children
    cin>>n;
    
    int arr[n],ones[n],twos[n],threes[n];
    int count_one=0, count_two=0, count_three=0,a=0,b=0,c=0,team;
    
    for(int i=0;i<n;i++){
        //Take input of skills the children are good at
        cin>>arr[i];
        //Count the number of separated skills and also store their indices
        if(arr[i]==1){
            count_one++;
            ones[a] = i+1;
            a++;
        }
        else if(arr[i]==2){
            count_two++;
            twos[b] = i+1;
            b++;
        }
        else if(arr[i]==3){
            count_three++;
            threes[c] = i+1;
            c++;
        }
    }
    //Find the number of teams can be formed
    if(count_one<=count_two && count_one<=count_three){
        team = count_one;
    }
    else if(count_two<=count_one && count_two<=count_three){
        team = count_two;
    }
    else if(count_three<=count_one && count_three<=count_two){
        team = count_three;
    }

    //Print the number of teams
    cout<<team<<endl;;
    //Also print the index of children in a team
    if(team>0){
       for(int i=0;i<team;i++){
           cout<<ones[i]<<" "<<twos[i]<<" "<<threes[i]<<endl;
        } 
    }
}
