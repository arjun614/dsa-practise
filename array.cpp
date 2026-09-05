#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int stockBuySell(vector<int> &nums){
    int n= nums.size();
    int minprice=INT_MAX;
    int maxprice=0;
    for(int i=0;i<n;i++){
        if(nums[i]<minprice){
            minprice=nums[i];
        }
        int profit= nums[i]-minprice;

        if(profit>maxprice){
            maxprice=profit;
        }
    }
    return maxprice;
}

int main(){
    vector<int> nums={10, 7, 5, 8, 11, 9};
    int ans= stockBuySell(nums);
    cout<<ans;

}