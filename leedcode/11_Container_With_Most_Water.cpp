#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        int maxArea(vector<int>& height){
            int water = 0;
            int i = 0 , j = height.size() - 1;
            while (i < j){
                int h = min(height[i],height[j]);
                water = max(water, h * (j - i));
                if(height[i] <= height[j])
                    ++i;
                else
                    --j;
            }
            return water;
        }
};



int main(){
    Solution so;
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout<<so.maxArea(height)<<endl;
}