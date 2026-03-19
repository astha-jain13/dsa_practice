/*
Problem: Drinks (Orange Juice)
Platform: Codeforces
Difficulty: Easy
Concept: Average
*/


#include <iostream>
using namespace std;

int main() {
    int n;
    float juicef=0,orange_cocktail;
    //Enter number of juices in fridge
    cin>>n;
    
    int juice[n];
    //Enter fraction of orange juice in juices
    for(int i=0;i<n;i++){
        cin>>juice[i];
    }
    
    //Calculate fraction of orange in juices
    for(int i=0;i<n;i++){
        juicef += juice[i]/100.00;
    }
    
    //Calculate percentage of orange juice in cocktail
    orange_cocktail = (juicef/n)*100;
    
    //Print output
    cout<<orange_cocktail;
}
