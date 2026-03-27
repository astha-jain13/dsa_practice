#include <iostream>
using namespace std;

int main()
{
    int n,m,a,b,x,z,single_ticket,special_ticket_1,special_ticket_2,special_ticket;
    
    //Take input of number of rides,rides per special ticket,cost of single ride,cost of special ticket 
    cin>>n>>m>>a>>b;
    
    //Cost of n rides when purchase tickets per ride
    single_ticket = n*a;
    
    //Cost of ticket when purchase special ticket and ticket per ride combo
    x=(n/m)*b;
    if(n%m != 0){
        z=n%m;
        //Special ticket + single ticket combo
        special_ticket_1=x+z*a;
        //Special ticket only
        special_ticket_2=x+b;
        if(special_ticket_1<=special_ticket_2){
            special_ticket=special_ticket_1;
        }else{
            special_ticket=special_ticket_2;
        }
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
