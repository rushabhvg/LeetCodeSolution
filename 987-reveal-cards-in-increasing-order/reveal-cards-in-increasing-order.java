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
    public int[] deckRevealedIncreasing(int[] deck) {
        Arrays.sort(deck);
        int n = deck.length;
        Deque<Integer> dq = new ArrayDeque<>();
        dq.addFirst(deck[n-1]);
        for(int i=n-2; i>=0; i--) {
            dq.addFirst(dq.removeLast());
            dq.addFirst(deck[i]);
        }
        int arr[] = new int[n];
        for(int i=0; i<n; i++) {
            deck[i] = (int)dq.removeFirst();
        }
        return deck;
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
