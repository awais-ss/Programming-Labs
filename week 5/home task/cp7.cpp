#include<iostream>
using namespace std;
int main() {
    int choice;
    while(true) {
        cout<<"------------ RESTAURANT MENU-----------------"<<endl;
        cout<<"1. VIEW FOOD MENU                                 "<<endl;
        cout<<"2. PLACE THE ORDER                                " <<endl;
        cout<<"3. VIEW ORDER STATUS                             "  <<endl;
        cout<< "4. GENERATE BILL                                        "    <<endl;
        cout<<"5. CONTACT STAFF                 "        <<endl;
        cout<<"6. EXIT                                  "<<endl;
        cout<<"ENTER CHOICE(1-6)"<<endl;
        cin>>choice;
        
        if(choice==1){
            cout<<"   YOU SELECTED: VIEW FOOD MENU   "<<endl;
            
        }
    else if(choice==2){
    cout<<"           YOU SELECTED: PLACE THE ORDER   "<<endl;


    }
    else if(choice==3){
        cout<<"       YOU SELECTED: VIEW ORDER STATUS " <<endl;

    }
    else if(choice==4){
        cout<<"      YOU SELECTED:  GENERATE BILL "  <<endl;

    }
    else if(choice==5){
        cout<<"      YOU SELECTED:  CONTACT STAFF    "<<endl;

    }
    else if(choice==6){
        cout<<"      YOU SELECTED:  EXIT    "      <<endl;
        break;

        
    }
    else{
        cout<<"INVALID CHOICE" <<endl;
    }

}

}
