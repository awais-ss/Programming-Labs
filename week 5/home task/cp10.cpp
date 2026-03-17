#include<Iostream>
using namespace std;
int main() {
    int num1;
    int num2;
    int choice;
    int Result;
    while(true){
        cout<<" SIMPLE CALCULATOR "<<endl;
        cout<<"1. ADDITION"<<endl;
        cout<<"2. SUBTRACTION"<<endl;
        cout<<"3. MULTIPLICATION"<<endl;
        cout<<"4. DIVISION    "<<endl;
        cout<<"5. CLEAR SCREEN "<<endl;
        cout<<"6. EXIT    "<<endl;
        cout<<"ENTER YOUR CHOICE(1-6)" <<endl;
        cin>>choice;
        if(choice==1){
            cout<<"ENTER FIRST NUMBER:"<<endl;
            cin>>num1;
            cout<<"ENTER SECOND NUMBER :"<<endl;
            cin>>num2;
            Result = num1 + num2;
            cout<<Result<<endl;


           


        }
        else if(choice==2){
             cout<<"ENTER FIRST NUMBER:"<<endl;
            cin>>num1;
            cout<<"ENTER SECOND NUMBER :"<<endl;
            cin>>num2;
            Result = num1 - num2;
            cout<<Result<<endl;




        }
        else if(choice==3){
             cout<<"ENTER FIRST NUMBER:"<<endl;
            cin>>num1;
            cout<<"ENTER SECOND NUMBER :"<<endl;
            cin>>num2;
            Result = num1 * num2;
            cout<<Result<<endl;


    }
    else if(choice==4){
             cout<<"ENTER FIRST NUMBER:"<<endl;
            cin>>num1;
            cout<<"ENTER SECOND NUMBER :"<<endl;
            cin>>num2;
            Result = num1 / num2;
            cout<<Result<<endl;
    }
    else if(choice==5){
             cout<<"CLEAR SCREEN"<<endl;
             



    }
    else if(choice==6){
        cout<<"THE PROGRAM ENDS"<<endl;
        break;
    }
    else{
        cout<<"CHOICE IS INVALID :"<<endl;
    }
}
}