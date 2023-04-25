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

class SmallestInfiniteSet {
public:
    unordered_set<int> isPresent;
    priority_queue<int, vector<int>, greater<int>> addedIntegers;
    int currInt = 0;
    SmallestInfiniteSet() {
        currInt = 1;
    }
    
    int popSmallest() {
        int answer;
        if(!addedIntegers.empty()) {
            answer = addedIntegers.top();
            isPresent.erase(answer);
            addedIntegers.pop();
        } else {
            answer = currInt;
            currInt += 1;
        }
        return answer;
    }
    
    void addBack(int num) {
        if(currInt <= num || isPresent.find(num) != isPresent.end()) {
            return;
        }
        addedIntegers.push(num);
        isPresent.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */

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
