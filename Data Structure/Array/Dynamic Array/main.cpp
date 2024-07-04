vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<vector<int>> arr(n);
    vector<int> result;
    int lastAnswer = 0;
    
    for(int i=0; i<queries.size(); i++)
    {
        int idx = (queries[i][1] ^ lastAnswer) % n;
        switch (queries[i][0]) {
            case 1:
                arr[idx].push_back(queries[i][2]);
                break;
            case 2:
                lastAnswer = arr[idx][queries[i][2]% size(arr[idx])];
                result.push_back(lastAnswer);
                break;
        }
    }
    
    return result;
}
