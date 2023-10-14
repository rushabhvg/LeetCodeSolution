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
    vector<int> lastVisitedIntegers(vector<string>& words) {
        vector<int> ans;
        vector<int> nums;
        int idx = 0;
        int s = -1;
        for(int i=0; i<words.size(); i++) {
            // cout<<"words i"<<i<<endl;
            if(words[i]=="prev") {
                // cout<<": prev: "<<endl;
                // s = last num;
                if(idx==0) {
                    s =-1;
                    // cout<<": idx==-1: "<<endl;
                } else {
                    // cout<<"b : nums[idx]: "<<idx<<endl;
                    s = nums[idx-1];
                    idx--;                
                    // cout<<"a : nums[idx]: "<<endl;
                }
                ans.push_back(s);
                // cout<<": ans pb: "<<endl;
            } else {
                // cout<<": int pb: "<<endl;
                nums.push_back(stoi(words[i]));
                idx=nums.size();
                // cout<<": idx = n.size: "<<endl;
            }
        }
        return ans;
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
