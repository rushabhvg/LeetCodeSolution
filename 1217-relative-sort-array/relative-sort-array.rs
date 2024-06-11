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

use std::collections::HashMap;

impl Solution {
    pub fn relative_sort_array(arr1: Vec<i32>, arr2: Vec<i32>) -> Vec<i32> {
        let mut mp: HashMap<i32, i32> = HashMap::new();
        for &num in arr1.iter() {
            let count = mp.entry(num).or_insert(0);
            *count += 1;
        }
        let mut ans: Vec<i32> = Vec::with_capacity(arr1.len());
        let mut cnt = 0;
        for &j in arr2.iter() {
            if let Some(&fq) = mp.get(&j) {
                for _ in 0..fq {
                    ans.push(j);
                    cnt += 1;
                }
                mp.remove(&j);
            }
        }
        let mut lft: Vec<i32> = Vec::with_capacity(arr1.len() - cnt);
        let mut idx = 0;
        for &j in arr1.iter() {
            if let Some(&fq) = mp.get(&j) {
                for _ in 0..fq {
                    lft.push(j);
                    idx += 1;
                }
                mp.remove(&j);
            }
        }
        lft.sort();
        ans.extend_from_slice(&lft);
        ans
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
