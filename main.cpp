#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    int x;
    char answer;

    do{x = first_page();
    if(x==1){
        nigerian_history();
    }
    else if(x==2){
        unilag_facts();
    }
    else{
        african_tradition();
    }
    cout<<"\nDo you want to start again: y for yes, n for no"<<endl;
    cin>>answer;
    }while(answer=='y');
    return 0;
}
