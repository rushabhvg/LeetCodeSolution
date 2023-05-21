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
 * @param {any} o1
 * @param {any} o2
 * @return {boolean}
 */
function helper(key, value) {
  if(value && typeof value === "object" && !Array.isArray(value))
    return Object.fromEntries(Object.entries(value).sort());
  else return value;
}
var areDeeplyEqual = function(o1, o2) {
    const s1 = JSON.stringify(o1, helper);
    const s2 = JSON.stringify(o2, helper);
    return s1 === s2;
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
