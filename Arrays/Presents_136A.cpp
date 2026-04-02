#include <iostream>
using namespace std;

int main()
{
    int n;
    //Take input of no. of friends in the party
    cin>>n;
    
    int p[n],final[n];
  //Take input of friends who received gifts from ith friend
    for(int i=0;i<n;i++){
        cin>>p[i];
    }

    //Find who gave presents to whom and store in final array
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(p[j]==i+1){
                final[i]=j+1;
            }
        }
    }

    //Print the array 
    for(int i=0;i<n;i++){
        cout<<final[i]<<" ";
    }
}
