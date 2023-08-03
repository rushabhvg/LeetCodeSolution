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
    vector<string>solve(string digits,string*arr){
        if(digits.size()==0){
            vector<string>bs;
            bs.push_back("");
            return bs;
        }
      
        char c=digits[0];
        string a=arr[c-'0'];
        string smallinput=digits.substr(1);
        vector<string>rest=solve(smallinput,arr);
        vector<string>res;
        for(auto x:rest){
           for(auto x1:a){
               res.push_back(x1+x);
           } 
        }
        return res;
    }
    vector<string> letterCombinations(string digits) {
        vector<string>a;
        if(digits.size()==0)
            return a;
        string arr[]={"0","0","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>ans=solve(digits,arr);
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
