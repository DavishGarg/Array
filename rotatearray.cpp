#include <iostream>
using namespace std;

// void rotateArray(int arr[], int n, int k) {
//     int temp[100]; // assuming n <= 100

//     k = k % n; // in case k > n

//     // Copy last k elements to the beginning of temp
//     for (int i = 0; i < k; i++) {
//         temp[i] = arr[n - k + i];
//     }

//     // Copy the rest of the elements
//     for (int i = k; i < n; i++) {
//         temp[i] = arr[i - k];
//     }

//     // Copy back to original array
//     for (int i = 0; i < n; i++) {
//         arr[i] = temp[i];
//     }
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int k = 3;

//     rotateArray(arr, n, k);

//     // Output the rotated array
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

//     // array[(i + k) % n] = array[i]; := cyclic way me k position se shift krna(ith term ko)


void rotatearray(int array[] , int n, int k){
    int temp[100];
    k = k %n;

    for(int i = 0; i < k; i++){
        temp[i] = array[n - k +i];
    }

    for(int i = k; i < n; i++){
        temp[i] = array[i - k];
    }

    for(int i = 0; i < n; i++){
     array[i] =  temp[i];
    }
}

int main() {
    int array[] = {1,2,3,4,5,6};
    int n = sizeof(array) / sizeof(array[0]);
    int k = 1;

    rotatearray(array, n , k);
    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
    }

}