#include <iostream>

using namespace std;
 
// function to return sum of elements
// in an array of size n

int sum(int arr[], int n)
{

    // base case

    if (n == 0) {

        return 0;

    }

    else {

        // recursively calling the function

        return arr[0] + sum(arr + 1, n - 1);

    }
}
