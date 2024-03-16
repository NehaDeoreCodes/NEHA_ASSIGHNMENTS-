/*11. Write a program scan 7 values and print index wise.*/
#include <iostream>
using namespace std;

int main() {
    
    int values[7];
    cout << "Enter 7 values:" << endl;
    for (int i = 0; i < 7; ++i) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> values[i];
    }

    cout << "Values along with their index:" << endl;
    for (int i = 0; i < 7; ++i) {
        cout << "Index " << i << ": " << values[i] << endl;
    }

    return 0;
}
/*output:
Enter 7 values:
Enter value 1: 1
Enter value 2: 5
Enter value 3: 6
Enter value 4: 3
Enter value 5: 4
Enter value 6: 7
Enter value 7: 8
Values along with their index:
Index 0: 1
Index 1: 5
Index 2: 6
Index 3: 3
Index 4: 4
Index 5: 7
Index 6: 8*/
