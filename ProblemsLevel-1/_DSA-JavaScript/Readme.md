Bangla Explanation:

-    [🚀 Big O Notation]()
-    [🚀 Class in JavaScript]()

####    todo:1 [Math Random]

- লুডু খেলায় আমরা কিভাবে ১ থেকে ৬ সংখ্যা randomly print করতে পারি ।

```javascript
function getRandomNumber(min, max){
    return Math.floor(Math.random() *(max-min +1)) + min;
}

console.log(getRandomNumber(1,6));

// another way
const random1 =((Math.random()*10)+1);
const random2 =Math.floor(((Math.random()*7)));
console.log(random1)  // print 1-6
console.log(random2) // print 1-6
```


- Get random id or Reverse id

```javascript
const id = Math.random().toString().split(".")[1];
const id1 =crypto.randomUUID();
const revId = id.split("").reverse().join("");
const revId1 = id1.split("").reverse().join("");

console.log(id," | ",revId)  // 6024356929627508  |  8057269296534206
console.log(id1, " | ",revId1) // 83fdaf7b-ec0b-49f3-b161-0f5c78c81d41  |  14d18c87c5f0-161b-3f94-b0ce-b7fadf38


const  num =12345;
const r =Number(num.toString().split("").reverse().join(""));
console.log(num, "|||" ,r)  // 12345 ||| 54321
```
- Reverse Sting

```javascript
let str1 ="bappasaha"
const reverse =str1.split("").reverse().join("");
console.log(str1, "<->",reverse)  // bappasaha <-> ahasappab


let str ="b-a-p-p-a";
console.log(str.split("-")) ;
console.log(str.split("-").join(","));

```
####    todo:2- [sort ( ) ] সবার নাম কিভাবে Alphabetically  সাজাতে পারি । 

- সবার নাম কিভাবে Alphabetically  সাজাতে পারি ।

```javascript
const std = ["bappa","kaoa","dafda","apple"];
console.log(std.sort());
```
- How to sort roll number low to high

```javascript
const rollNumebers = [40, 100, 1, 5, 25, 10];

function myFuc(a,b){
    return a-b;
};
console.log(rollNumebers.sort(myFuc)) // [ 1, 5, 10, 25, 40, 100 ]


//shortcut
const rollNumebers = [40, 100, 1, 5, 25, 10];
console.log(rollNumebers.sort((a,b)=>{return a-b})) // assending
console.log(rollNumebers.sort((a,b)=>{return b-a})) //decending

```
#### todo: 3- [filter ( )] find the duplicate and Unique number and string from an array

- find the duplicate number from an array


```javascript

// const arr = ["bappa", "appa", "cappa", "bappa"];

// const item = arr.forEach((item, index, arr) => console.log("items:",item));
// const d = arr.filter((item, index) => console.log(arr.indexOf(item) !==index));
// const i = arr.filter((item, index) => console.log(arr.indexOf(index)));


const numbers =[1,2,4,5,6,6,1,5,76,,89,76,90,25];

const duplicate =numbers.filter((value,index, array)=>{
    return array.indexOf(value)!==index;
});

console.log(duplicate);


const arr = ["bappa", "appa", "cappa", "bappa"];
const duplicates = arr.filter((item, index) => arr.indexOf(item) !== index);
console.log(duplicates); // Output: ["bappa"]

```
- find the unique number from an array

```javascript
const numbers1 =[1,2,4,5,6,6,1,5,76,,89,76,90,25];

const unique =numbers.filter((value,index, array)=>{
    return array.indexOf(value)===index;
});
console.log('---');
console.log(unique);

const arr = ["bappa", "appa", "cappa", "bappa"];
const uniqueItems = arr.filter((item, index) => arr.indexOf(item) === arr.lastIndexOf(item));
console.log(uniqueItems); // Output: ["appa", "cappa"]

```

#### todo:-4 How many vowels in sentence

```javascript
const vowels =["a","e","i","o","u","A","E","I","O","U"];

const countVowel=(sentence)=>{
    let count =0;
    const letters =Array.from(sentence);
    letters.forEach((letter)=>{
        if(vowels.includes(letter)){
            count++;
        }
    })
    return count;

};

console.log(countVowel("I love Bangladesh"));
```
#### todo:-5 Leap year or Not

```javascript
function isLeapyear(year){
    if(year%400 ===0 || ((year %4 ===0) && (year % 100 !==0))){
        console.log(`${year} is Leap year`);
    }
    else 
        console.log('not');
};

isLeapyear(2020);

```
#### todo:-6: how many time "bappa" word is used in the sentence and what is the first position where bappa word is used?


This type of problem is solved by using regular expression 
1. `regular exp` er vittore search string ta dibo
2. `ig` flag ta dibo.
3. jotogulo ans pabo ta ekta array tai array er length tai ans

solve:
first position mane search() ta dilei hbe


```javascript
const sentence ="There is a dreamy boy nameed Bappa.There is a dreamy boy nameed bappa.There is a dreamy boy nameed bappa.There is a dreamy boy."

const matches =sentence.match(/bappa/ig);
const occurances =matches? matches.length : 0;
console.log(matches, occurances)


let position =sentence.search(/bappa/i);
position= position>=0 ? position : "not found";
console.log(position) 

```
####    todo:7 input: linearSearch(['a','b','c','d','c'], 'c'); output: 2 or 'not found' ; problem: linearSearch() টি  function implement করে দেখান ।

```javascript
function linearSearch(arr,value){

    const length =arr.length;
    for(let i =0; i<length; i++){
        if(arr[i]===value){
            return i;
        }
    }
    return "not found";
}

console.log(linearSearch(['a','b','c','d','c'], 'c')); 

```
####  todo:8- find out the max big string from an array and show the index of the string 


```javascript
function longestString(names){
    let longestWord ='';
    for(n of names){
        if(n.length > longestWord.length){
            longestWord =n;
        }
    }
    return [longestWord, names.indexOf(longestWord)]

}

const nameArray=['Bappa saha', 'learn with bappa','akash','akash mohajoon','dad'];

console.log(longestString(nameArray));

```
####  todo:9- ১ -১০০ পর্যন্ত যেই সংখ্যা গুলো ৩,৫ এবং ৩,৫ উভয় সংখ্যা দিয়ে বিভাজ্য তা বের কর

```javascript
function fooBar(number){
    
    for (let i =1; i<=number; i++){
        if(i%3===0 && i%5===0){
            console.log(`${i} is fooBar number`);
        }
        else if(i%3===0){
            console.log(`${i} is divied by 3`);
        }
        else if(i%5 ===0){
            console.log(`${i} is divied by 5`)
        }
        else{
            console.log(`${i} is not  divied by 3 or 5`);
        }
    }
}

console.log(fooBar(100))

```

####  todo:10- Remove falsy values from array and object

- Array থেকে কিভাবে 'falsy value' খুঁজে বের করে বাদ দিতে পারি?

        falsy values are: 6 types
        false, undefined, null, '', NaN, 0
        solve: using filter()


```javascript
const mixedArr =[
    "bws",
    undefined,
    "learn with bappa",
    0,
    false,
    "",
    "apple",
    null,
    40,
    "k",
    true,
    "Thanks all",
    NaN
];


const trueArray =mixedArr.filter(element=>{
    if(element){
        return true;
    }else{
        return false
    }
})
console.table(trueArray) 


// another way

const  trueArray1 =mixedArr.filter(Boolean)
console.table(trueArray1)

```

- Object থেকে কিভাবে 'falsy value' খুঁজে বের করে বাদ দিতে পারি?


```javascript
const obj ={

    a:"bws",
    b:undefined,
    c:"learn with bappa",
    d:0,
    e:false,
    f:"",
    g:"apple",
    h:null,
    i:40,
    j:"k",
    k:true,
    l:"Thanks all",
    m:NaN
};

const trutyObj =function(obj){
    for(let i in obj){
        if(!obj[i]){
            delete obj[i];
        }
    }
    return obj;
}

console.log(trutyObj(obj))

```








