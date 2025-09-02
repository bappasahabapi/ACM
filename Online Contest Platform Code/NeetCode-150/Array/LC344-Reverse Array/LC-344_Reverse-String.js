const str = "abc";
str.split(""); // [ 'a', 'b', 'c' ]
str.split("").reverse(); // [ 'c', 'b', 'a' ]
str.split("").reverse().join("");

// console.log(str);

//leetcode 344
var reverseString = function (s) {
  s.reverse();
};

let s = ["h", "e", "l", "l", "o"];
console.log(reverseString(s));
