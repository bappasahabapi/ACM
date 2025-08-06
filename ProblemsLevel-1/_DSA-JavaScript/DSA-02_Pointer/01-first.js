//todo: 1. withot using pointer

let n1 = 5;
let n2 = n1;

console.log("n1=", n1, " and n2=", n2);
n1 = 100;
console.log("n1=", n1, " and n2=", n2); 

//todo: 2. using pointer{object}
 /* 
 obj1 ↘️ 
       {value:11}
 obj2 ↗️ 
 
 */
let obj1 = {
  value: 11,     // obj1 -> {value:11}
};

let obj2 =obj1;   
console.log(obj1.value, obj2.value);  // 11 11
obj1.value =22;
console.log(obj1.value, obj2.value);  // 22 22
