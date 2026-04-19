#include <iostream>
#include <cmath>
using namespace std;
float angleinrandian;
float d_t_r(int c){
 angleinrandian=c/(57.2958);
return angleinrandian;
}
float height_find(float a, float b){
float height=a*b;
return height;
}
int main()
{

    float base,angle,tan_ang,deg_to_rad;
cout<<"ENTER THE VALUE OF BASE in feet:";
cin>>base;
cout<<"ENTER THE VALUE OF ANGLE in degree:";
cin>>angle;
deg_to_rad=d_t_r(angle);
// float tan(angleinrandian);
float tan_value=tan(angleinrandian);
float height=height_find(base,tan_value);
cout<<height;
return 0;
}