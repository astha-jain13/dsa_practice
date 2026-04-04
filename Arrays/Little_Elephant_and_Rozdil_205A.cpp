/*
Problem: Little Elephant and Rozdil
Platform: CodeForces
Difficulty: Easy
Concept: Minimum element, Counting frequency
Time Complexity: O(n)
*/

#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n,index=0;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        //Take input of time taken to travel
        cin>>arr[i];
    }
    int min= arr[0];
    
    //Find min time and the city number
    for(int i=0;i<n;i++){
        if(min>=arr[i]){
            min=arr[i];
            index=i;
        }
    }
    for(int i=0;i<n;i++){
        //Check if minimum time is repeated then print "Still Rozdil" else the city number to travel
        if(arr[i]==min){
            cout<<"Still Rozdil";
            break;
        }
        else{
            cout<<index;
        }
    }
}
