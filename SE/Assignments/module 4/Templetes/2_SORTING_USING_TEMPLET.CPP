#include <iostream>
using namespace std;

// Define a template function for sorting an array
template <class T>
sort_array(T a[], T n) // pass array and size of array in sort_array function parameter
{
    int i, j, temp;

    // Implement a simple bubble sort algorithm
    for (i = 1; i <= n; i++) // Loop through each element (corrected to n-1 for zero-based index)
    {
        for (j = i + 1; j <= n; j++) // Compare current element with remaining elements
        {
            if (a[i] > a[j]) // Swap if the current element is greater than the compared element
            {
                // logic of swap value
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Output the sorted array
    cout << "\nAfter sorting Array element..." << endl;
    for (i = 1; i <= n; i++) // Loop through and print each element
    {
        cout << a[i] << endl; // Print each element
    }
}
main()
{
    int n; // store size of array
    cout << "Enter the size of array : ";
    cin >> n;

    int a[n], i; // Declare an array of size 'n'
    cout << "Enter the " << n << " Element : " << endl;

    // set array element in array
    for (i = 1; i <= n; i++) // Loop from 0 to n-1 for zero-based index
    {
        cout << "Element [" << i << "] =";
        cin >> a[i]; // Input each element
    }
    // diplay array element without sort
    cout << "\nWithout sort Array element..." << endl;
    for (i = 1; i <= n; i++) // Loop through and print each element
    {
        cout << a[i] << endl; // Print each element
    }
    sort_array(a, n); // Call the template function to sort the array
}
