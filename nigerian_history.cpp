#include <iostream>
#include "header.h"
using namespace std;

void nigerian_history(){
    int a;
    char z;
    a=0;

    cout<<"Test your knowledge of country and patriotism in this area"<<endl;
    cout<<"\n1-How many military rulers has Nigeria had after independence"<<endl;
    cout<<"a) 9 \n";
    cout<<"b) 7 \n";
    cout<<"c) 8 \n";
    cout<<"d) 10 \n";
    cin>>z;
    if(z=='c'){
        a= a+1;
    }
    cout<<"\n2-Who was the first democratically elected president of Nigeria"<<endl;
    cout<<"a) Nnamdi Azikiwe \n";
    cout<<"b) Ernest Shonekan \n";
    cout<<"c) Umar Musa Yaradua \n";
    cout<<"d) Shehu Shagari \n";
    cin>>z;
    if(z=='d'){
        a= a+1;
    }
    cout<<"\n3-What was the period of the Nigerian civil war"<<endl;
    cout<<"a) 1967 - 1970 \n";
    cout<<"b) 1965 - 1970 \n";
    cout<<"c) 1966 - 1972 \n";
    cout<<"d) 1969 - 1973 \n";
    cin>>z;
    if(z=='a'){
        a= a+1;
    }
    cout<<"\n4-First woman to drive in Nigeria was "<<endl;
    cout<<"a) Funmilayo Kuti \n";
    cout<<"b) Grace Alele Williams \n";
    cout<<"c) Fatima Dantata \n";
    cout<<"d) Tolu Awolowo \n";
    cin>>z;
    if(z=='a'){
        a= a+1;
    }
    cout<<"\n5-Who was the first female vice chancellor in Nigeria"<<endl;
    cout<<"a) Tolu Awolowo \n";
    cout<<"b) Sandra Igbinoba \n";
    cout<<"c) Stella Njoku \n";
    cout<<"d) Grace Alele Williams \n";
    cin>>z;
    if(z=='d'){
        a= a+1;
    }
    cout<<"\n6-Who were the first set of European explorers to come to the present day Nigerian region"<<endl;
    cout<<"a) British \n";
    cout<<"b) Portuguese \n";
    cout<<"c) Italians \n";
    cout<<"d) French \n";
    cin>>z;
    if(z=='b'){
        a= a+1;
    }
    cout<<"\n7-What was the dominant kingdom in the south south region of Nigeria in precolonial times"<<endl;
    cout<<"a) Benin \n";
    cout<<"b) Urhobo \n";
    cout<<"c) Igbo \n";
    cout<<"d) Igala \n";
    cin>>z;
    if(z=='a'){
        a= a+1;
    }
    cout<<"\n8-Who was the first governor general of colonial Nigeria"<<endl;
    cout<<"a) Lord Thomas \n";
    cout<<"b) Lord Robert \n";
    cout<<"c) Lord Lugard  \n";
    cout<<"d) Lord Harry \n";
    cin>>z;
    if(z=='c'){
        a= a+1;
    }
    cout<<"Your total score is "<<a<<endl;
    if(a>=6){
        cout<<"You're a patriotic fellow"<<endl;
    }else if(a>=4 && a<6){
        cout<<"You're an average patriot"<<endl;
    }else if(a<4){
        cout<<"You're a bad patriot"<<endl;
    }

}
