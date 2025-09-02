//Given a string s, find the longest palindromic substring in s
// --- Example
// longestPalindrome("cbbd") --> "bb"
// longestPalindrome("abba") --> "abba"
// longestPalindrome("a") --> "a"

//todo: run the file 
//

function longestPalindrome(s) {
    let startIndex =0;
    let maxLength =1; // longestPalindrome("a") --> "a"

    function expandAroundMiddle(left,right){

        while(left>=0 && right<s.length && s[left]===s[right]){
            const currentPalindromLength =(right-left)+1;

            if(currentPalindromLength>maxLength){
                maxLength=currentPalindromLength;
                startIndex=left;
            }
            left=left-1;
            right=right+1;
        }
    }

    for (let i =0; i<s.length; i++) {
        expandAroundMiddle(i-1,i+1); //odd case
        expandAroundMiddle(i,i+1); //even case
    }
    return s.slice(startIndex,startIndex+maxLength);


}

module.exports = longestPalindrome;
