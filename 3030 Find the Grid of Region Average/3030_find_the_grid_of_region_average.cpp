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
    vector<vector<int>> resultGrid(vector<vector<int>>& image, int threshold) {
        int n = image.size(), m = image[0].size(), reg[501][501][2] = {};
        for(int i = 0; i<n-2; i++) {
            for(int j=0; j<m-2; j++) {
                int sum =0, is_region = true;
                for(int k=i; k<i+3; k++) {
                    for(int l=j; l<j+3; l++) {
                        sum += image[k][l];
                        is_region &= k == i || abs(image[k][l]-image[k-1][l]) <= threshold;
                        is_region &= l == j || abs(image[k][l]-image[k][l-1]) <= threshold;
                    }
                }
                if(is_region) {
                    for(int k=i; k<i+3; k++) {
                        for(int l=j; l<j+3; l++) {
                            reg[k][l][0] += sum/9;
                            reg[k][l][1] += 1;
                        }
                    }
                }
            }
        }
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(reg[i][j][1]) {
                    image[i][j] = reg[i][j][0]/reg[i][j][1];
                }
            }
        }

        return image;
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
