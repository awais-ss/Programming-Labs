#include<iostream>
#include<string>
using namespace std;
int main(){
    int j;
    cout<<"Enter Number of Flights : ";
    cin>>j;
    int flight_number[j],seat[j];
    string Dest[j];
    for(int i =0; i<j;i++){
        cout<<"Enter flight number for flight "<<i+1<<": ";
        cin>>flight_number[i];
        cout<<"Enter destination for flight "<<flight_number[i]<<": ";
        cin>>Dest[i];
        cout<<"Enter seats available for flight "<<flight_number[i]<<": ";
        cin>>seat[i];
    }
    cout<<"Flight Information: \n";
    cout<<"====================================\n";
    for(int i =0; i<j;i++){
        cout<<"Flight "<<flight_number[i]<<" to "<<Dest[i]<<" has "<<seat[i]<<" seats available. \n";
    }
    cout<<"Flight with less than 5 seats available: \n";
    cout<<"==================================== \n";
    bool found = false; 
    for(int i = 0; i < j; i++){
        if(seat[i] < 5){
            cout << "Flight " << flight_number[i] << " to " << Dest[i] << " has only " << seat[i] << " seats remains" << endl;
            found = true;
        }
    }
    if(!found){
        cout << "No flights with less than 5 seats available. \n";
    }
    return 0;
}