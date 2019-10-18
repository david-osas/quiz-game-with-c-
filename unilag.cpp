#include <iostream>
#include "header.h"
using namespace std;

void unilag_facts(){
    int a;
    char z;
    a=0;

    cout<<"Test your knowledge of unilag  in this area"<<endl;
    cout<<"\n1-Who was the first vice chancellor of the university"<<endl;
    cout<<"a) Eni Njoku \n";
    cout<<"b) Babatunde Sofoluwe \n";
    cout<<"c) Saburi Biobaku \n";
    cout<<"d) Aliyu Makama \n";
    cin>>z;
    if(z=='a'){
        a= a+1;
    }
    cout<<"\n2-How many undergraduate hostels are in the school campus at akoka"<<endl;
    cout<<"a) 11 \n";
    cout<<"b) 13 \n";
    cout<<"c) 15 \n";
    cout<<"d) 20 \n";
    cin>>z;
    if(z=='b'){
        a= a+1;
    }
    cout<<"\n3-What was the former university post of the current vice chancellor"<<endl;
    cout<<"a) Dean of postgraduate studies \n";
    cout<<"b) Director of foundation studies \n";
    cout<<"c) Dean of Science \n";
    cout<<"d) Deputy vice chancellor (academics)\n";
    cin>>z;
    if(z=='d'){
        a= a+1;
    }
    cout<<"\n4-Which of this courses does not do the SIWES program for undergraduates "<<endl;
    cout<<"a) Philosophy \n";
    cout<<"b) Computer engineering \n";
    cout<<"c) Cell biology and genetics \n";
    cout<<"d) Estate management \n";
    cin>>z;
    if(z=='a'){
        a= a+1;
    }
    cout<<"\n5-When was the university founded"<<endl;
    cout<<"a) 1964 \n";
    cout<<"b) 1962 \n";
    cout<<"c) 1960 \n";
    cout<<"d) 1963 \n";
    cin>>z;
    if(z=='b'){
        a= a+1;
    }
    cout<<"\n6-What is the official name of the secondary found in the university"<<endl;
    cout<<"a) International School Lagos \n";
    cout<<"b) International School, University of Lagos \n";
    cout<<"c) Intercontinental School Lagos \n";
    cout<<"d) International School of Lagos \n";
    cin>>z;
    if(z=='b'){
        a= a+1;
    }
    cout<<"\n7-What is the location of the medical campus"<<endl;
    cout<<"a) Ikeji \n";
    cout<<"b) Idi Araba \n";
    cout<<"c) Yaba \n";
    cout<<"d) Lekki \n";
    cin>>z;
    if(z=='b'){
        a= a+1;
    }
    cout<<"\n8-Which of the following is not an alumni of the university"<<endl;
    cout<<"a) Genevieve Nnaji \n";
    cout<<"b) Yemi Osibanjo \n";
    cout<<"c) Babatunde Fashola  \n";
    cout<<"d) Tony Elumelu \n";
    cin>>z;
    if(z=='c'){
        a= a+1;
    }
    cout<<"Your total score is "<<a<<endl;
    if(a>=6){
        cout<<"You're a whiz"<<endl;
    }else if(a>=4 && a<6){
        cout<<"You're an average contestant"<<endl;
    }else if(a<4){
        cout<<"Go brush up on unilag knowledge "<<endl;
    }
}
