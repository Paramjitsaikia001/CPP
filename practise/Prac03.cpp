#include <iostream>
using namespace std;

void arrayname(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int main() {
    int n = 6;
    int a[n], b[n], c[6];  // Array c will hold the results

    int max1, max2, min1, min2, sum1, sum2;
    
    // Input arrays a and b
    arrayname(n, a);
    arrayname(n, b);
    
    // Initialize max, min, and sum values
    max1 = min1 = a[0];
    max2 = min2 = b[0];
    sum1 = sum2 = 0;
    
    // Process both arrays
    for (int i = 0; i < n; i++) {
        // Calculate for array a
        if (a[i] > max1) max1 = a[i];
        if (a[i] < min1) min1 = a[i];
        sum1 += a[i];
        
        // Calculate for array b
        if (b[i] > max2) max2 = b[i];
        if (b[i] < min2) min2 = b[i];
        sum2 += b[i];
    }
    
    // Store results in array c
    c[0] = max1;
    c[1] = max2;
    c[2] = min1;
    c[3] = min2;
    c[4] = sum1;
    c[5] = sum2;
    
    // Output array c
    cout << "The third array is: ";
    for (int i = 0; i < 6; i++) {
        cout << c[i] << " ";
    }
    cout << endl;
    
    return 0;
}
