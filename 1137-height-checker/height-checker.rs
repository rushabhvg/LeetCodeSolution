
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

impl Solution {
    pub fn height_checker(heights: Vec<i32>) -> i32 {
        let n = heights.len();
        if n == 1 {
            return 0;
        }
        let mut cnt = 0;
        let mut frq = [0; 101];
        let mut arr = vec![0; n];
        for i in 0..n {
            frq[heights[i] as usize] += 1;
        }
        let mut idx = 0;
        for i in 0..101 {
            while frq[i] > 0 {
                arr[idx] = i as i32;
                idx += 1;
                frq[i] -= 1;
            }
        }
        cnt = 0;
        for i in 0..n {
            if arr[i] != heights[i] {
                cnt += 1;
            }
        }
        cnt
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
