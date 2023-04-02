/*
BY RUSHABH GALA
rushabhvg
GitHub :
https://github.com/rushabhvg
StackOverflow :
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/

class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int cnt = 0;
        vector<int> arr;
        sort(potions.begin(), potions.end());
        int m = potions.size();
        int maxPotion = potions[m-1];
        for(auto& spell:spells) {
            long long minPotion = ceil( (1.0*success)/spell );
            if(minPotion>maxPotion) {
                arr.push_back(0);
                continue;
            }
            auto index = lower_bound(potions.begin(), potions.end(), minPotion)-potions.begin();
            arr.push_back(m-index);
        }
        return arr;
    }
};

/*
BY RUSHABH GALA
rushabhvg
GitHub :
https://github.com/rushabhvg
StackOverflow :
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/
