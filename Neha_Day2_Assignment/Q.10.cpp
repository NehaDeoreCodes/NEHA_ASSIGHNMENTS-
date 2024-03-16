/*10 write a program whic print pattern
enter number4
1
2 2
3 3 3
4 4 4 4
//array*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    
    for (int i = 1; i <= n; ++i) {
       
        for (int j = 1; j <= i; ++j) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}

/*OUTPUT:
Enter a number: 4
1
2 2
3 3 3
4 4 4 4
*/
