class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int profit =0;
    /*
    //BRUTE FORCE
     for(int i=0;i<prices.size()-1;i++){
        for(int j=i;j<prices.size();j++){
            profit=max(prices[j]-prices[i],profit);
        }
     } 
     return profit ; */ 

     int minPrice=INT_MAX;

     int maxProfit=0;

     for(int i=0;i<prices.size();i++){
        //current value agr minimum price h toh save krlo
        if(prices[i]<minPrice){
            minPrice=prices[i];
        }

        //agr nahi h tohmaximum profit nikalo
        else if(prices[i]-minPrice > maxProfit){
            maxProfit=prices[i]-minPrice;
        } 
     }
     return maxProfit;
    }
};
