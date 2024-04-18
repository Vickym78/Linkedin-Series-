#include <iostream>
#include <vector>

using namespace std;

int binary_search(vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        // If the target is found at mid
        if (arr[mid] == target) {
            return mid;
        }
        
        // If the target is smaller than mid, search in the left half
        else if (arr[mid] < target) {
            high = mid - 1;
        }
        
        // If the target is larger than mid, search in the right half
        else {
            low = mid + 1;
        }
    }
    
    // If the target is not present in the array
    return -1;
}

int main() {
    vector<int> arr = {30, 20, 10, 8, 5, 3, 1};
    int target = 8;
    int result = binary_search(arr, target);
    
    if (result != -1) {
        cout << "Element " << target << " is present at index " << result << "." << endl;
    } else {
        cout << "Element " << target << " is not present in the array." << endl;
    }
    
    return 0;
}
