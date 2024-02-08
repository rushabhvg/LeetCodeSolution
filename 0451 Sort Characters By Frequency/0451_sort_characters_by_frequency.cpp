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

static const int _ = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        vector<string> container(s.size()+1, "");
        string res;
        
        for(char& c:s) {
            freq[c]++;
        }

        for(auto & it: freq) {
            int n = it.second;
            char c = it.first;
            container[n].append(n, c);
        }

        for(int i=s.size(); i>0; i--) {
            if(!container[i].empty()) res.append(container[i]);
        }

        return res;
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
