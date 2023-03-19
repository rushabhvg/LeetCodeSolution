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

class WordDictionary {
public:
    WordDictionary() {
        root = new TrieNode();
    }
    
    void addWord(string word) {
        TrieNode* node = root;
        for (char c : word) {
            if (!node->children[c-'a']) {
                node->children[c-'a'] = new TrieNode();
            }
            node = node->children[c-'a'];
        }
        node->isEnd = true;
    }
    
    bool search(string word) {
        return searchHelper(word, 0, root);
    }
    
private:
    struct TrieNode {
        bool isEnd;
        vector<TrieNode*> children;
        
        TrieNode() {
            isEnd = false;
            children.resize(26, nullptr);
        }
    };
    
    TrieNode* root;
    
    bool searchHelper(string word, int index, TrieNode* node) {
        if (index == word.length()) {
            return node->isEnd;
        }
        char c = word[index];
        if (c == '.') {
            for (TrieNode* child : node->children) {
                if (child && searchHelper(word, index+1, child)) {
                    return true;
                }
            }
            return false;
        } else {
            TrieNode* child = node->children[c-'a'];
            return child && searchHelper(word, index+1, child);
        }
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
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
