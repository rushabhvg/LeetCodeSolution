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

class UnionFind {
    vector<long> repr;
    vector<long> coSize;
    int co;
public:
    UnionFind(int n) {
        co = n;
        for(int i=0; i<=n; i++) {
            repr.push_back(i);
            coSize.push_back(i);
        }
    }

    int findRepr(int x) {
        if(repr[x] == x) {
            return x;
        }
        return repr[x] = findRepr(repr[x]);
    }

    int performUnion(int x, int y) {
        x = findRepr(x);
        y = findRepr(y);

        if(x==y) return 0;

        if(coSize[x]>coSize[y]) {
            coSize[x] += coSize[y];
            repr[y] = x;
        } else {
            coSize[y] += coSize[x];
            repr[x] = y;
        }

        co--;
        return 1;
    }

    bool isConnected() {
        return co == 1;
    }
};

class Solution {
public:
    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
        UnionFind Alice(n), Bob(n);
        int edgeReqr = 0;
        for(vector<int>& edge : edges) {
            if(edge[0]==3) {
                edgeReqr += (Alice.performUnion(edge[1], edge[2]) | Bob.performUnion(edge[1], edge[2]));
            }
        }

        for(vector<int>& edge : edges) {
            if(edge[0]==2) {
                edgeReqr += (Bob.performUnion(edge[1], edge[2]));
            } else if(edge[0]==1) {
                edgeReqr += (Alice.performUnion(edge[1], edge[2]));
            }
        }

        if (Alice.isConnected() && Bob.isConnected()) {
            return edges.size() - edgeReqr;
        }

        return -1;
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
