class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mx=0;
        int min=INT_MAX;
        int minIdx=-1;
        for(int i=0;i<n;i++){
            if(prices[i]<min) {
                min=prices[i];
                minIdx=i;
            }
            else{
               int p=prices[i]-min;
               mx=max(mx,p);
            }
        }
        
        
    return mx; 
    }
};
