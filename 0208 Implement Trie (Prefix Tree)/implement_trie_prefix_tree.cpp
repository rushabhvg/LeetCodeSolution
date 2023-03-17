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

class Trie {
public:
    Trie() {
        root = new Node();
    }
    
    void insert(string word) {
        Node* cur = root;
        for (char c : word) {
            if (cur->children.count(c) == 0) {
                cur->children[c] = new Node();
            }
            cur = cur->children[c];
        }
        cur->is_word = true;
    }
    
    bool search(string word) {
        Node* node = find_node(word);
        return node != nullptr && node->is_word;
    }
    
    bool startsWith(string prefix) {
        return find_node(prefix) != nullptr;
    }
    
private:
    struct Node {
        bool is_word;
        map<char, Node*> children;
        Node() : is_word(false) {}
    };
    
    Node* root;
    
    Node* find_node(string s) {
        Node* cur = root;
        for (char c : s) {
            if (cur->children.count(c) == 0) {
                return nullptr;
            }
            cur = cur->children[c];
        }
        return cur;
    }
};


/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
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
