/*
Problem: Drinks (Orange Juice)
Platform: Codeforces
Difficulty: Medium
Concept: Average
*/


#include <iostream>
using namespace std;

int main() {
    int n,juice;
    float sum,orange_cocktail;
    //Enter number of juices in fridge
    cin>>n;
    
    //Enter fraction of orange juice in juices
    for(int i=0;i<n;i++){
        cin>>juice;
        sum += juice;
    }
    
    //Calculate percentage of orange juice in cocktail
    orange_cocktail = sum/n;
    
    //Print output
    cout<<orange_cocktail;
}
