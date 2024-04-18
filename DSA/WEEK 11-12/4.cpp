// ONLY MAIN FUNCTION

int lastOccurrence(vector<int>&a , int tgt) {
    int low = 0 , high = a.size() - 1;
    int answer = -1;
    while(low <= high){
    int mid = low + (high - low)/2;
    if(a[mid] <= tgt){
    answer = mid;
    low = mid + 1;
    }
    else high = mid - 1;
    }
    return answer;
}