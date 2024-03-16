/*4.Write a program which print leap year between year 2000 to 2030 and print total leap years*/
#include<iostream>
using namespace std;

int main()
 {
    int startYear = 2000;
    int endYear = 2030;
    int leapYearCount = 0;

    cout << "\nLeap years between " << startYear << " and " << endYear << " are: ";

    for (int year = startYear; year <= endYear; ++year) 
	{
        
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            cout<<"\nyear= "<<year;
            ++leapYearCount;
        }
    }

    cout << "\nTotal leap years: " << leapYearCount ;

    return 0;
}
/*output:
Leap years between 2000 and 2030 are:
year= 2000
year= 2004
year= 2008
year= 2012
year= 2016
year= 2020
year= 2024
year= 2028
Total leap years: 8*/
