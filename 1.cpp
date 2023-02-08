#include <iostream>
using namespace std;

int main() {
   int arr[100], n, k, val, i;

  cout << "Enter array size: ";
   cin >> n;

   cout << "Enter array elements: "<<endl;
   for (i = 0; i < n; i++) {
      cin >> arr[i];
   }

   cout << "Enter what you want to insert: ";
   cin >> val;

   cout << "Enter value inserting position: ";
   cin >> k;

   for (i = n; i >= k; i--) {
      arr[i] = arr[i - 1];
   }
   arr[k - 1] = val;

   cout << "Array after insertion: ";
   for (i = 0; i <= n; i++) {
      cout << arr[i] << " ";
   }

   return 0;
}
