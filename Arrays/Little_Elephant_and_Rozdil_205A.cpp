/*
Problem: Little Elephant and Rozdil
Platform: CodeForces
Difficulty: Easy
Concept: Minimum element, Counting frequency
Time Complexity: O(n)
*/

#include <iostream>
using namespace std;

int main()
{
    int n,index=0,count=0;
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
        //Check if minimum time is repeated
        if(arr[i]==min){
            count++;
        }
    }
    //If not repeated print the city number
    if(count==1){
        cout<<index+1;
    }
    //If repeated print "Still Rozdil"
    else{
        cout<<"Still Rozdil";
    }
}
