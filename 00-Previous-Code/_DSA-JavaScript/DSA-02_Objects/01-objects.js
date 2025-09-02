const person={
    "first name":"bappa",   //key is strng
    fname:"bappa",
    code:34,
    age:34,
    hobbies:["cricket",'football'],
    greet:function () {
        console.log(`My name `)
    },
    1.5:20,
    gender:'male'
}


// Accessing all key-value pairs using Object.keys()
// console.log("\nUsing Object.keys():");
Object.keys(person).forEach(key => {
    // console.log(`key:${key}: ${person[key]}`);
});

for (const key in person) {
    console.log(`${key}: ${person[key]}`);

}

// person.age = 30
// delete person.age
// person.greet();

//todo: dynamcially access properties
// const age =person[age];  // invalid 
// console.log(person['first name'])
// console.log(person[1.5])
// console.log(person);

// case:
const keyName ='gender';
// console.log(person[keyName])


// Accessing all key-value pairs using for...in
// console.log("Using for...in:");
// for (const key in person) {
//     console.log(`${key}: ${person[key]}`);
//     // if (person.hasOwnProperty(key)) {
//     //     console.log(`${key}: ${person[key]}`);
//     // }
// }











