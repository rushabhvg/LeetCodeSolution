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
    int numberOfBeams(vector<string>& bank) {
        int r = bank.size();
        int c = bank[0].size();
        int ans = 0;
        int cnt = 0;
        int pi = -1;
        vector<int> arr(r, 0);
        for(int i=0; i<r; i++) {
            cnt = 0;
            for(int j=0; j<c; j++) {
                if(bank[i][j]=='1') cnt++;
            }
            cout<<i<<" "<<cnt<<' '<<endl;
            arr[i] = cnt;
        }
        cout<<endl;

        for(int i=0; i<r; i++) {
            cout << arr[i] << " ";
        }
        cout<<endl;

        for(int i=0; i<r; i++) {
            if(pi==-1 && arr[i]!=0) {
                pi = i;
                continue;
            }
            if(arr[i]!=0) {
                ans += (arr[pi]*arr[i]);
                pi = i;
                continue;
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
