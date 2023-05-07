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

class FrequencyTracker {
private:
    unordered_map<int, int> arr;
    unordered_map<int, int> freq;
public:
    FrequencyTracker() {
        // do nothing
    }
    
    void add(int number) {
        int oldNumCount = arr[number];
        int newNumCount = ++arr[number]; //increment first, then use
        
        freq[oldNumCount]--;
        freq[newNumCount]++;
    }
    
    void deleteOne(int number) {
        int oldNumCount = arr[number];
        if (oldNumCount == 0) return;
        int newNumCount = --arr[number];
        
        freq[oldNumCount]--;
        freq[newNumCount]++;
    }
    
    bool hasFrequency(int frequency) {
        return (freq[frequency] != 0);
    }
};

/**
 * Your FrequencyTracker object will be instantiated and called as such:
 * FrequencyTracker* obj = new FrequencyTracker();
 * obj->add(number);
 * obj->deleteOne(number);
 * bool param_3 = obj->hasFrequency(frequency);
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
