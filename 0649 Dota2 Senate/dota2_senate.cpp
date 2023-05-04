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
    string predictPartyVictory(string senate) {
        int rCount = count(senate.begin(), senate.end(), 'R');
        int dCount = senate.size() - rCount;

        auto ban = [&](char toBan, int startAt) {
            bool loopAround = false;
            int ptr = startAt;
            while (true) {
                if(ptr==0) {
                    loopAround = true;
                }
                if(senate[ptr] == toBan) {
                    senate.erase(senate.begin()+ptr);
                    break;
                }
                ptr = (ptr+1) % senate.size();
            }
            return loopAround;
        };

        int turn = 0;
        while(rCount>0 && dCount>0) {
            if(senate[turn] == 'R') {
                bool banned = ban('D', (turn+1)%senate.size());
                dCount--;
                if(banned) {
                    turn--;
                }
            } else {
                bool banned = ban('R', (turn+1)%senate.size());
                rCount--;
                if(banned) {
                    turn--;
                }
            }

            turn = (turn+1)%senate.size();
        }

        return dCount==0 ? "Radiant" : "Dire";
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
