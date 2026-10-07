class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int n=arr.size();
        int count=0;
        int temp=0;
        for(int i=0; i<n; i++) {
            if(arr[i]==1) {
                count++;
                temp=max(count, temp);
            }
            else {
                count=0;
            }
        }
        return temp;
    }
};