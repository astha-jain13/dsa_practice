/*
Problem: Next Round
Platform: CodeForces
Difficulty: Easy
Concept: Visit every element
Time Complexity: O(n)
*/


#include <iostream>
using namespace std;

int main()
{
    int n,k,count=0;
    //Enter the no. of participants
    cin>>n;
    //Enter the value of k
    cin>>k;
    int arr[n];
    //Enter the scores
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=arr[k]){
            count++;
        }
    }
    //Output with count of participants qualified
    cout<<count;
}
