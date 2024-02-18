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

class TrieNode {
public:
    TrieNode* children[10];

    TrieNode() {
        memset(children, 0, sizeof(children));
    }
};

class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode();
    }

    void insert(int number) {
        TrieNode* node = root;
        string strNumber = to_string(number);
        for (char digit : strNumber) {
            int d = digit - '0';
            if (!node->children[d]) {
                node->children[d] = new TrieNode();
            }
            node = node->children[d];
        }
    }

    int getCommonPrefixCount(int number) {
        TrieNode* node = root;
        string strNumber = to_string(number);
        int count = 0;
        for (char digit : strNumber) {
            int d = digit - '0';
            if (node->children[d]) {
                node = node->children[d];
                count++;
            }  else {
                break;
            }
        }
        return count;
    }
};

class Solution {
public:
    int longestCommonPrefix(vector<int>& array1, vector<int>& array2) {
        int size1 = array1.size(), size2 = array2.size(), result = 0;
        Trie trie;
        for(int i = 0; i < size2; i++) {
            trie.insert(array2[i]);
        }

        for(int i = 0; i < size1; i++)  
            result = max(result, trie.getCommonPrefixCount(array1[i]));

        return result;
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
