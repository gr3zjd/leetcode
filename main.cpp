#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::vector<int> res;
        int i = 0;
        int j = 0;
        for (i=0; i < nums.size(); i++)
        {   
            for (j = 1; j < nums.size(); j++)
            {
                if (j==i)
                {
                    break;
                }
                if ((nums[i] + nums[j]) == target)
                {
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        }
        return {}; 
    }
int arithmeticTriplets(std::vector<int>& nums, int diff) 
{
    int count=0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i+1; j < nums.size(); j++)
        {
            for (int k = j+1; k < nums.size(); k++)         
            {
                if ((i<j) and (j < k) and (nums[j]-nums[i]==diff) and (nums[k]-nums[j]==diff))
                {
                    count++;
                }
                
            }
            
        }
        
    }
    return count;
}
std::vector<int> findArray(std::vector<int>& pref) 
 {
    std::vector<int> res(pref.size());
    res[0]=pref[0];
    for (int i = 1; i < pref.size(); i++)
    {
 
        
            res[i]=pref[i]^pref[i-1];
        
        
    }
    return res;
            
}
int countDigits(int num) 
{
    int count=0;
    int to_array=num;
    int temp;
    while (to_array>0)
    {
        temp=to_array%10;
        if (num%temp==0)
        {
            count++;
        }
        to_array/=10;
        
    }
    return count;
}
int xorOperation(int n, int start) 
{
    std::vector<int> nums;

    for (int i = 0; i < n; i++)
    {   
        nums.push_back(start+2*i);
    }
        int res = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        res^=nums[i];
    }
    return res;
}
int searchInsert(std::vector<int>& nums, int target) 
{
    int left=0;
    int right = nums.size()-1;

    while (left<=right)
    {
        int middle = left + (right-left)/2;
        if (nums[middle]==target)
        {
            return middle;
        }
        else if (nums[middle]<target)
        {
            left = middle+1;
        }
        else
            right = middle-1;
    }
    return right+1;
}
  int divide(int dividend, int divisor) 
    {
         int res = 0;
        


        if (dividend == 0)
            return 0;
        if ((dividend > 0 && divisor > 0) || (dividend < 0 && divisor < 0))
        {
            dividend = abs(dividend);
            divisor = abs(divisor);
            while (dividend >= divisor)
            {
                dividend -= divisor;
                res++;
            }
        }
        if ((dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0  ))
        {
            dividend = abs(dividend);
            divisor = abs(divisor);
            while (dividend >= divisor)
            {
                dividend -= divisor;
                res--;
            }
        }  
        if (dividend>INT_MAX)
            res=INT_MAX;
        if (dividend<INT_MIN)
            res=INT_MIN;
        return res;
    }


int main()
{
   
    std::cout<< divide(-2147483648, -1);
}