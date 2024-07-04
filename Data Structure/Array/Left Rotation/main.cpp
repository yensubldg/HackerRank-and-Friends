vector<int> rotateLeft(int d, vector<int> arr) {
    vector<int> result;
    
    for(int i=d; i < arr.size(); i++){
        result.push_back(arr[i]);
    }
    
    for(int i=0; i< d ;i++){
        result.push_back(arr[i]);
    }
    
    return result;
}

// Sort Solution
vector<int> rotateLeft(int d, vector<int> arr) {
    if (d == 0 || d % arr.size() == 0) {
        return arr; // No rotation needed
    }

    d %= arr.size();
    rotate(arr.begin(), arr.begin() + d, arr.end());
    return arr;
}
