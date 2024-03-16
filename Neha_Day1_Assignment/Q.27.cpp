/*13.Write a C program to read temperature in centigrade and display a suitable message according to 
temperature state below:
	Temp < 0 then Freezing weather 
	Temp 0-10 then Very Cold weather 
	Temp 10-20 then Cold weather 
	Temp 20-30 then Normal in Temp 
	Temp 30-40 then Its Hot
	Temp >=40 then Its Very Hot 
	Test Data: 42
	Expected Output:
		It’s very hot.*/
		
#include <stdio.h>
int main()
 {
    int temperature;

   
    printf("Enter the temperature in centigrade: ");
    scanf("%d", &temperature);

    if (temperature < 0) 
	{
        printf("Freezing weather.\n");
    } else if (temperature >= 0 && temperature <= 10) {
        printf("Very Cold weather.\n");
    } else if (temperature > 10 && temperature <= 20) {
        printf("Cold weather.\n");
    } else if (temperature > 20 && temperature <= 30) {
        printf("Normal in Temp.\n");
    } else if (temperature > 30 && temperature <= 40) {
        printf("It's Hot.\n");
    } else {
        printf("It's Very Hot.\n");
    }

    return 0;
}

/*OUTPUT:
Enter the temperature in centigrade: 42
It's Very Hot.*/
		