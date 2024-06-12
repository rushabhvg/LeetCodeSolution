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
    pub fn sort_colors(nums: &mut Vec<i32>) {
        let mut low = 0;
        let mut high = nums.len() as i32 - 1;
        let mut i = 0;

        while i <= high {
            match nums[i as usize] {
                0 => {
                    nums.swap(i as usize, low as usize);
                    low += 1;
                    i += 1;
                }
                1 => i += 1,
                2 => {
                    nums.swap(i as usize, high as usize);
                    high -= 1;
                }
                _ => panic!("Invalid input"),
            }
        }
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
