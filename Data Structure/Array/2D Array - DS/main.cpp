int sum(vector<vector<int>> arr, int x, int y){
    int dx[] = {-1,1};
    int dy[] = {-1, 0,1,-1,0,1}; 
    int result = 0;
    
    for(int i = 0; i< 6; i++){
        int newX = x + dx[i/3];
        int newY = y + dy[i];
        result += arr[newX][newY];
    }
    
    return result + arr[x][y];
}

int hourglassSum(vector<vector<int>> arr) {
    int result = -INT32_MAX;
    for(int i = 1; i< arr.size()-1; i++){
        for(int j = 1; j< arr[0].size()-1; j++){
            int tmp = sum(arr, i, j);
            result = tmp > result ? tmp : result;
        }
    }
    
    return result;
}
