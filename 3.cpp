
#include <iostream>
using namespace std;

int main() {
    int n=10;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};

    int count_even = 0, count_odd = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            count_even++;
        } else {
            count_odd++;
        }
    }
    cout << "Number of even elements: " << count_even << endl;
    cout << "Number of odd elements: " << count_odd << endl;
    return 0;
}
