/*
Problem: Rewards(Bizon the Champion)
Platform: Codeforces
Difficulty: Medium
Concept: Ceil Division
*/

#include <iostream>
using namespace std;

int main()
{
    int a1,a2,a3,b1,b2,b3,cups, medals, shelf,cup_shelves,medal_shelves;
    
    //Enter the number of cups
    cin>>a1>>a2>>a3;
    cups = a1+a2+a3;
    
    //Enter the number of medals
    cin>>b1>>b2>>b3;
    medals = b1+b2+b3;
    
    //Enter the number of shelves
    cin>>shelf;
    
    //Shelf required to store cups
    cup_shelves = (cups+4)/5;
    medal_shelves = (medals+9)/10;
    
    //Check if rewards can be arranged in given shelves
    if(cup_shelves+medal_shelves<=shelf){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
