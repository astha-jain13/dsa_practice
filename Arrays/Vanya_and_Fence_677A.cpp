/*
Problem: vanya and Fence
Platform: CodeForces
Difficulty: Easy
Concept: Visit every element
Time Complexity: O(n)
*/


#include <iostream>
using namespace std;

int main()
{
   int n,h,width=0;
   
   //Enter the no. of friends
   cin>>n;
   
   //Enter the height of fence
   cin>>h;
   
   int height[n];
   
   //Enter heights of friends
   for(int i=0;i<n;i++){
       cin>>height[i];
   }
   
   //Comparison
   for(int i=0;i<n;i++){
       if(height[i]>h){
           width+=2;
       }
       else{
           width++;
       }
   }
   
   //Print final answer
   cout<<width;
}
