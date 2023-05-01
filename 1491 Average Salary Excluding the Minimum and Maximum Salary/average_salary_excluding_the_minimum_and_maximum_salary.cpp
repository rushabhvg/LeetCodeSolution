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
    double average(vector<int>& salary) {
        int minSalary = salary[0];
        int maxSalary = salary[0];
        double sum = 0;
        double n = salary.size();
        for(int i=0; i<salary.size(); i++) {
            sum += salary[i];
            if(salary[i]>maxSalary) {
                maxSalary = salary[i];
            }
            if(salary[i]<minSalary) {
                minSalary = salary[i];
            }
        }

        sum -= minSalary;
        sum -= maxSalary;
        return (double)(sum/(n-2));
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
