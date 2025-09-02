function isPalindromeUpdate(s) {
  const sanitizeString = s.toLowerCase().replace(/[\W]/g, "");

  let leftPointerIndex = 0;
  let rightPointerIndex = sanitizeString.length - 1;

  while (leftPointerIndex < rightPointerIndex) {
    if (
      sanitizeString[leftPointerIndex] !== sanitizeString[rightPointerIndex]
    ) {
        console.log('Not a palindrome')
        return false;
    }
    leftPointerIndex++;
    rightPointerIndex--;

  }
  console.log('palindrome')
  return true;
}

const string = "lol";
isPalindromeUpdate(string);




//todo: Solution

function isPalindrome(s) {
    //Sanitize the input string
    s =s.toLowerCase().replace(/[\W_]/g,"");

    let leftPointerIndex =0;
let rightPointerIndex =s.length -1;

    while(leftPointerIndex < rightPointerIndex){
        if(s[leftPointerIndex] !==s[rightPointerIndex]){
            console.log(false)
            return false;
        }
        leftPointerIndex++;
        rightPointerIndex--;
    }
    console.log(true)
    return true;
}

const s ="lolo";
isPalindrome(s);
