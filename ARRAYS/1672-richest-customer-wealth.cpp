/* 
Question 1772: https://leetcode.com/problems/richest-customer-wealth/

You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.


*/


class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
            int maxsum =0;
        for(int i=0;i<accounts.size();i++){
            int sum=0;
            for(int j=0;j<accounts[0].size();j++)
            {
                sum=sum + accounts[i][j];
            }
            if(maxsum<sum)
            {
                maxsum=sum;
            }
        }
        return maxsum;

    }
};
