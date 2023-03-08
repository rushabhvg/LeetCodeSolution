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
    int minEatingSpeed(vector<int>& piles, int h) {
        int time = 0;
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        while(left < right) {
            int mid = left + (right-left)/2;
            cout<<left<<" "<<mid<<" "<<right<<endl;
            for(int i=0; i<piles.size(); i++) {
                int add = piles[i]/mid;
                if(piles[i]%mid!=0) {
                    add +=1;
                }
                time += add;
            }
            cout<<time<<" "<<h<<endl;
            if(time<=h) {
                right = mid;
                cout<<"R: "<<right<<endl;
            } else {
                left = mid+1;
                cout<<"L: "<<left<<endl;
            }
            time=0;
        }
        return left;
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
