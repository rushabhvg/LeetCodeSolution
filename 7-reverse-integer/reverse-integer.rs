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
    pub fn reverse(x: i32) -> i32 {
        let mut rev: i64 = 0;
        let mut num: i32 = x;
        while num != 0 {
            let rem: i32 = num%10;
            num /= 10;
            rev = rev*10 + rem as i64;
        }
        if(rev>i32::MAX as i64 || rev<i32::MIN as i64) {
            return 0;
        }
        return rev as i32;
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
