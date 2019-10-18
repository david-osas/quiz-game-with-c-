#include <iostream>
#include "header.h"
using namespace std;

int first_page(){
    int q;
    cout<<"\t Welcome to quiz world contestant"<<endl;
    cout<<"\t Where would you like to explore"<<endl;
    cout<<"1) Nigerian history \n";
    cout<<"2) University of Lagos facts \n";
    cout<<"3) African tradition \n";

    cin>> q;
    return q;
}
