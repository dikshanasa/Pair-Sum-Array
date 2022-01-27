vector<vector<int>> pairSum(vector<int> &arr, int s){
    int n=arr.size();
    vector< vector<int> > ans;
    for(int i =0; i<n;i++){
        for(int j=i+1;j<n;j++){
            if(i!=j){
                if(arr[i]+arr[j]==s){
                    vector<int> pair(2);
                    pair[0]=arr[i];
                    pair[1]=arr[j];
                    sort(pair.begin(),pair.end());
                    ans.push_back(pair);
                    
                }
            }
        }
       
    }
    sort(ans.begin(),ans.end());  
    return ans;
   // Write your code here.
}
