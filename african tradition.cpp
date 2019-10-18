#include <iostream>
#include "header.h"
using namespace std;

void african_tradition(){
    int a;
    char z;
    a=0;

    cout<<"Test your knowledge of African tradition  in this area"<<endl;
    cout<<"\n1-What is the name of the African region called gold coast during colonial times by explorers"<<endl;
    cout<<"a) Nigeria \n";
    cout<<"b) Ghana \n";
    cout<<"c) Gambia \n";
    cout<<"d) Togo \n";
    cin>>z;
    if(z=='b'){
        a= a+1;
    }
    cout<<"\n2-What was the name of the ancient Benin kings before the adaptation of the Oba title"<<endl;
    cout<<"a) Iyoba \n";
    cout<<"b) Ogiso \n";
    cout<<"c) Jagaban \n";
    cout<<"d) Alaafin \n";
    cin>>z;
    if(z=='b'){
        a= a+1;
    }
    cout<<"\n3-What is the most spoken African language on the continent "<<endl;
    cout<<"a) Afrikaans \n";
    cout<<"b) Hausa \n";
    cout<<"c) Swahili \n";
    cout<<"d) Berber \n";
    cin>>z;
    if(z=='c'){
        a= a+1;
    }
    cout<<"\n4-What is the most spoken Non-African language on the continent "<<endl;
    cout<<"a) Arabic \n";
    cout<<"b) English \n";
    cout<<"c) French \n";
    cout<<"d) Portuguese \n";
    cin>>z;
    if(z=='a'){
        a= a+1;
    }
    cout<<"\n5-Which country tried to conquer Ethiopia during the 20th century"<<endl;
    cout<<"a) Sudan \n";
    cout<<"b) Saudi Arabia \n";
    cout<<"c) England \n";
    cout<<"d) Italy \n";
    cin>>z;
    if(z=='d'){
        a= a+1;
    }
    cout<<"\n6-Which tribe is native to northern Africa"<<endl;
    cout<<"a) Berber \n";
    cout<<"b) Maasai \n";
    cout<<"c) Tswana \n";
    cout<<"d) Igbo \n";
    cin>>z;
    if(z=='a'){
        a= a+1;
    }
    cout<<"\n7-What is the largest country by land area in Africa"<<endl;
    cout<<"a) Nigeria \n";
    cout<<"b) Sudan \n";
    cout<<"c) Algeria \n";
    cout<<"d) Libya \n";
    cin>>z;
    if(z=='c'){
        a= a+1;
    }
    cout<<"\n8-Which animal is unique to Africa"<<endl;
    cout<<"a) Tiger \n";
    cout<<"b) Zebra \n";
    cout<<"c) Dog \n";
    cout<<"d) Polar bear \n";
    cin>>z;
    if(z=='b'){
        a= a+1;
    }
    cout<<"Your total score is "<<a<<endl;
    if(a>=6){
        cout<<"You're a genius,a true child of the soil"<<endl;
    }else if(a>=4 && a<6){
        cout<<"You're an average contestant"<<endl;
    }else if(a<4){
        cout<<"Go brush up on african knowledge "<<endl;
    }
}
