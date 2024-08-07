class Solution {
public:
    static bool cmp(pair<int,int>a ,pair<int,int>b)
    {
        if(a.first == b.first)
        return (a.second>b.second);
        return (a.first<b.first);
    }
    vector<int> frequencySort(vector<int>& nums) {

        unordered_map<int,int>m;
        vector<int>c;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        vector<pair<int,int>>v;
        for(auto i:m)
        {
            v.push_back(pair<int,int>(i.second,i.first));
        }
        sort(v.begin(),v.end(), cmp);
        for(int i=0;i<v.size();i++)
        {
            while(v[i].first--)
            {
                c.push_back(v[i].second);
            }
        }
        return c;
    }
};
