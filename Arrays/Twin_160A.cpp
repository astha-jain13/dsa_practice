#include <iostream>
using namespace std;

int main()
{
    int n,temp,sum=0,min,final=0,count=0;
    cin>>n;
    
    int coin[n];
    for(int i=0;i<n;i++){
        cin>>coin[i];
        sum+=coin[i];
    }
    
    min = sum/2;
    
    for(int j=0;j<n-1;j++){
        for(int i=0;i<n-1;i++){
            if(coin[i]<coin[i+1]){
                temp=coin[i+1];
                coin[i+1]=coin[i];
                coin[i]=temp;
            }
        }
    }
    
    for(int k=0;k<n;k++){
        final+=coin[k];
        count++;
        if(final>min){
            break;
        }
    }
    
    cout<<count;
}
