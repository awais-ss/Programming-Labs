
#include <iostream>
using namespace std;
main()
{
    int holidays, workingday, totalplaytime, difference, hours, minutes;
    cout << "Holidays: ";
    cin >> holidays;
    workingday = 365 - holidays;
    totalplaytime = (workingday * 63) + (holidays * 127);

    if (totalplaytime <= 30000)
    {
        difference = 30000 - totalplaytime;
        hours = difference / 60;
        minutes = difference % 60;
        cout << "Tom sleeps well" << endl;
        cout << hours << " hours and " << minutes << " minutes less for play";
    }

    else
    {
        difference = totalplaytime - 30000;
        hours = difference / 60;
        minutes = difference % 60;
        cout << "Tom will run away" << endl;
        cout << hours << " hours and " << minutes << " minutes more for play";
    }
}
