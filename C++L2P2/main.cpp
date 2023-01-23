//
//  main.cpp
//  C++L2P2
//
//  Created by Tadeusz Potoniec on 23/01/2023.
//  Based on https://www.youtube.com/watch?v=ErOzmh3BiXU&list=PLOYHgt8dIdoxx0Y5wzs7CFpmBzb40PaDo

#include <iostream>
using namespace std;
string login, pass;
int main() {
    cout<<"Welcome in our bank!"<<endl;
    cout<<"Enter login:";
    cin>>login;
    cout<<"Enter password:";
    cin>>pass;
    
    if((login=="admin")&&(pass=="szarlotka"))
    {
        cout<<"Login done"<<endl;
    }
    else
    {
        cout<<"Incorrect login details"<<endl;
    }
    return 0;
}
