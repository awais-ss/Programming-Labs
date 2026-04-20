#include <iostream>
#include <string>
using namespace std;
string english(int num){
    string ones[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string tens[] = {"", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    if(num == 0){   
        return ones[0];
    }
    else if(num < 10){
        return ones[num];
    }
    else if(num >= 10 && num < 20){
        return teens[num - 10];
    }
    else if(num >= 20 && num < 100){
    
        return tens[num / 10] + " " + ones[num % 10];
    }
    
}
int main() {
    int number;
    cout<<"ENTER NUMBER :";
    cin>>number;
    string result = english(number);
    cout<<result<<endl;

    return 0;
}