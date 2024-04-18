// ONLY MAIN CODE FUNCTION

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();      // Number of rows in the matrix
    int n = matrix[0].size();   // Number of columns in the matrix
    int lo = 0, hi = n * m - 1; // Initialize low and high indices for binary search
    
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2; // Calculate the middle index
        
        // Check if the middle element equals the target
        if (matrix[mid / n][mid % n] == target)
            return true;
        // If the middle element is greater than the target, search in the left half
        else if (matrix[mid / n][mid % n] > target)
            hi = mid - 1;
        // If the middle element is smaller than the target, search in the right half
        else
            lo = mid + 1;
    }
    
    // If the target is not found in the matrix
    return false;
}
