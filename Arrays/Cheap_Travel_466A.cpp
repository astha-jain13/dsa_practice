#include <iostream>
using namespace std;

int main()
{
    int n,m,a,b,x,z,single_ticket,special_ticket;
    
    //Take input of number of rides,rides per special ticket,cost of single ride,cost of special ticket 
    cin>>n>>m>>a>>b;
    
    //Cost of n rides when purchase tickets per ride
    single_ticket = n*a;
    
    //Cost of ticket when purchase special ticket and ticket per ride combo
    x=(n/m)*b;
    if(n%m != 0){
        z=n%m;
        special_ticket=x+z*a;
    }
    else{
        special_ticket=x;
    }
    if(single_ticket<=special_ticket){
        cout<<single_ticket;
    }
    else{
        cout<<special_ticket;
    }
}
