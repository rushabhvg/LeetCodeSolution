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

/**
 * @param {any[]} arr
 * @param {number} depth
 * @return {any[]}
 */
var flat = function (arr, n) {
    const stack = [...arr.map((item) => [item, n])];
    const res = [];
    while(stack.length>0) {
        const[item, depth] = stack.pop();
        if(Array.isArray(item) && depth>0) {
            stack.push(...item.map((el) => [el, depth-1]));
        } else {
            res.push(item);
        }
    }
    return res.reverse();
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
