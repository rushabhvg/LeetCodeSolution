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
    int largestAltitude(vector<int>& gain) {
        int maxAlt=0;
        cout<<" "<<gain[0];
        if(gain[0]>maxAlt) maxAlt=gain[0];
        for(int i=1; i<gain.size(); i++) {
            gain[i]+=gain[i-1];
            cout<<" "<<gain[i];
            maxAlt = maxAlt<gain[i] ? gain[i] : maxAlt;
        }
        cout<<" "<<gain[gain.size()-1];
        if(gain[gain.size()-1]>maxAlt) maxAlt=gain[gain.size()-1];
        return maxAlt;
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
