class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> N_bit;
        for(int i=0;i<pow(2,n);++i)
        {
            N_bit.push_back(i^(i>>1));
        }
        return N_bit;
    }
};
