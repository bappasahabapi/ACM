function isPalindrome(s) {
    //Sanitize the input string
    s =s.toLowerCase().replace(/[\W_]/g,"");

    let leftPointerIndex =0;
    let rightPointerIndex =s.length -1;

    while(leftPointerIndex < rightPointerIndex){
        if(s[leftPointerIndex] !==s[rightPointerIndex]){
            return false;
        }
        leftPointerIndex++;
        rightPointerIndex--;
    }

    return true;
}

module.exports = isPalindrome;


