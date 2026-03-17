#include<iostream>
using namespace std;
int main() {
    int choice;
    while(true) {
        cout<<"----------------  MAIN MENU  -------------------"<<endl;
        cout<<"                      1. SAY HELLO                 "<<endl;
        cout<<"                      2. SAY GOODBYE                                      "<<endl;
        cout<<"                      3. EXIT                                       "<<endl;
        cout<<"ENTER THE CHOICE"<<endl;
        cin>>choice;
        if(choice==1){
            cout<<"HELLO, WELCOME TO THE PROGRAM :"<<endl;

        }
        else if(choice==2){
            cout<<"GOODBYE! HAVE A NICE DAY :"<<endl;
        }
        else if(choice==3){
            cout<<"PROGRAM ENDED"<<endl;
            break;

        }
        else{
            cout<<" SORRY! INVALID CHOICE"<<endl;
            
        }


    }
}