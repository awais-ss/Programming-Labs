#include <iostream>
using namespace std;
float cal(float base, float exp, float score){
    float bonus_per;
     if(score >= 90)
        bonus_per = 20.0/100;
    else if(score >= 75)
        bonus_per = 10.0/100;
    else
        bonus_per = 5.0/100;

    if(exp >= 5)
        bonus_per = bonus_per + (5.0/100);
        float total_sal = base + (base * bonus_per);

    return total_sal;

}
int main()
{
float base,exp,score;
cout<<"ENTER BASE, SCORE AND EXPERIENCE 1 BY 1:";
cin>>base;
cin>>score;
cin>>exp;
float result=cal(base,exp,score);
cout<<"FINAL SALARY:"<<result;
return 0;
}