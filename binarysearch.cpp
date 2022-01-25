#include <iostream>

int main(){
    int numbers[] = {4, 6, 11, 15, 16, 19, 22, 24, 28, 33};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int high = size - 1, low = 0, mid, key;

    std::cout<<"Enter Key you want to search: ";
    std::cin>>key;

    while (low <= high){
        mid = (low + high) / 2; 
        if (key == numbers[mid])
        {
            std::cout << key << " found at index " << mid << std::endl;
            return 0;
        }
        else if (numbers[mid] > key)
        {
            high = mid - 1;
        }
        else if (numbers[mid] < key)
        {
            low = mid + 1;
        }
    }
    std::cout<<"Not found" <<std::endl;

    return 0;
}

// using namespace std;
// int binarySearch(int arr[], int p, int r, int num)
// {
//     if (p <= r)
//     {
//         int mid = (p + r) / 2;
//         if (arr[mid] == num)
//             return mid;
//         if (arr[mid] > num)
//             return binarySearch(arr, p, mid - 1, num);
//         if (arr[mid] < num)
//             return binarySearch(arr, mid + 1, r, num);
//     }
//     return -1;
// }
// int main(void)
// {
//     int arr[] = {1, 3, 7, 15, 18, 20, 25, 33, 36, 40};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int num;
//     cout << "Enter the number to search: \n";
//     cin >> num;
//     int index = binarySearch(arr, 0, n - 1, num);
//     if (index == -1)
//     {
//         cout << num << " is not present in the array";
//     }
//     else
//     {
//         cout << num << " is present at index " << index << " in the array";
//     }
//     return 0;
// }