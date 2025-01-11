#include<iostream>
using namespace std;

int main() {
    int nums[] = {5, 15, 22, 1, -14, -24};
    int size = 6;

    int smallest = INT8_MAX; // Initializing smallest with maximum value
    int largest = INT8_MIN;  // Initializing largest with minimum value
    int smallestIndex = -1;  // To store the index of the smallest number
    int largestIndex = -1;   // To store the index of the largest number

    for (int i = 0; i < size; i++) {
        if (nums[i] < smallest) {
            smallest = nums[i];
            smallestIndex = i; // Update index of smallest element
        }
        if (nums[i] > largest) {
            largest = nums[i];
            largestIndex = i; // Update index of largest element
        }
    }

    cout << "Smallest = " << smallest << ", Index = " << smallestIndex << endl;
    cout << "Largest = " << largest << ", Index = " << largestIndex << endl;

    return 0;
}
 