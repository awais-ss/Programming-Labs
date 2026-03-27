#include<iostream>
using namespace std;
main(){
    string word1="Something ";
    string word2;
    cout<<"Enters the first word : ";
    // cin>>word2;
    getline(cin,word2);
    cout<<word1<<word2;
}