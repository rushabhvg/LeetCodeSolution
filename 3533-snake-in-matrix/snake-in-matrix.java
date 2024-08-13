/*
By Rushabh Gala
rushabhvg
GitHub:
https://github.com/rushabhvg
StackOverflow:
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/

class Solution {
    public int finalPositionOfSnake(int n, List<String> commands) {
        int row = 0;
        int col = 0;
        for(int i=0; i<commands.size(); i++) {
            String str = commands.get(i);
            if(str.equals("UP") ) {
                // System.out.println("UP");
                row--;
            } else if(str.equals("RIGHT") ) {
                // System.out.println("RIGHT");
                col++;
            } else if (str.equals("DOWN") ) {
                // System.out.println("DOWN");
                row++;
            } else {
                // System.out.println("LEFT");
                col--;
            }
        }
        return ( (n*row) + col );
    }
}

/*
By Rushabh Gala
rushabhvg
GitHub:
https://github.com/rushabhvg
StackOverflow:
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/
