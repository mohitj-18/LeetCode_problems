class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int>point;
        int n = word.length();
        for(int i =0;i<n;i++){
            point[word[i]]++;
        }
        vector<int>arr;
        for(auto m : point){
            arr.push_back(m.second);
        }
        sort(arr.rbegin(),arr.rend());
        int p = arr.size();
        int sum =0;
        for(int i =0;i<p;i++){
            int pushes = i/8 +1;
            sum+=arr[i]*pushes;
        }
        return sum;
    }
};