/*
Problem: Twins
Platform: CodeForces
Difficulty: Medium
Concept: Greedy, Sorting
Time Complexity: O(n log n)
*/

#include <iostream>
using namespace std;

int main()
{
    int n,temp,sum=0,min,final=0,count=0;
    //Take input of number of coins
    cin>>n;
    
    int coin[n];
    //Take input of coin denomination
    for(int i=0;i<n;i++){
        cin>>coin[i];
        //Calculating sum of coins
        sum+=coin[i];
    }
    //Calculating minimum amount one should have
    min = sum/2;

    //Sorting the array in descending order
    for(int j=0;j<n-1;j++){
        for(int i=0;i<n-1;i++){
            if(coin[i]<coin[i+1]){
                temp=coin[i+1];
                coin[i+1]=coin[i];
                coin[i]=temp;
            }
        }
    }

    //Calculating required number of coins
    for(int k=0;k<n;k++){
        final+=coin[k];
        count++;
        if(final>min){
            break;
        }
    }

    //Print output
    cout<<count;
}
