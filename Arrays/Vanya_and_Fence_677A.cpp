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
   
   //Take input of number of friends
   cin>>n;
   
   //Take input of height of fence
   cin>>h;
   
   int height[n];
   
   //Take input of heights of friends
   for(int i=0;i<n;i++){
       cin>>height[i];
   }
   
   //Compare the height of friends with fence
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
