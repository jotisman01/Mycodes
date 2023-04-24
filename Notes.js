"use strict";
// intro to variables .variables can store some information. we can use that information later.we can change that information later .declare a variable 
//var firstName = "Harshit"; .
//use a variable console.log(firstName); 
// change value firstName = "Mohit"; console.log(firstName);
// rules for naming variables
 // you cannot start with number
 // example :- 
// 1value (invalid)
// value1 (valid) var value1 = 2;console.log(value1); 
// you can use only undersore _ or dollar symbol 
// first_name (valid)
// _firstname (valid)
 // first$name (valid)
// $firstname (valid) 
// you cannot use spaces 
// var first_name = "harshit";
 // snake case writing 
// var firstName = "harshit"; 
// camel case writing 
// first name (invalid)
 // convention
 // start with small letter and use camelCase 
// let keyword 
// declare variable with let keyword 

let firstName = "harshit";
firstName = "Mohit";
console.log(firstName);

// block scope vs funtion scope (covered later in this video)
// declare constants 
const pi = 3.14;
console.log(pi)
// String indexing 
let firstName = "harshitdfjakldsfdharshitdfjakldsfd"
// console.log(firstName[0]);
// length of string 
// firstName.length 
console.log(firstName.length);
console.log(firstName[firstName.length-2]);
// last Index : length - 1 
// trim() 
// toUpperCase()
// toLowerCase()
// slice()
let firstName = "harshit";
// console.log(firstName.length);
// firstName = firstName.trim(); // "harshit"
// console.log(firstName)
// console.log(firstName.length);
// firstName = firstName.toUpperCase();
// firstName = firstName.toLowerCase();
// console.log(firstName);
// start index 
// end index
let newString = firstName.slice(1); // hars
console.log(newString);


// typeof operator 
// data types (primitive data types)
// string ={"harhit"}
// number ={2, 4, 5.6 }
// booleans 
// undefined
// null 
// BigInt
// Symbol

// let age = 22; 
// let firstName = "harshit";
// console.log(typeof age);
// convert number to string. 
<--22->"22"-->
// age = age + "";
// console.log(typeof(age)); "22"


 // convert string to number. 
// let myStr = +"34";
// console.log(typeof myStr);
// let age = "18";
// age = Number(age);
// console.log(typeof age);



// string concatenation 
let string1 = "17";
let string2 = "10";
let newString = +string1 + +string2;
console.log(typeof newString);
let string3=" jotisman";
let string4="banerjee";
let newstrng=string3 + " " +string4;
Console.log(newstrng) ;


// template string 
let age = 22;
let firstName = "harshit"
// "my name is harshit and my age is 22 "
// let aboutMe = "my name is " + firstName + " and my age is " + age; 
let aboutMe = `my name is ${firstName} and my age is ${age}`
console.log(aboutMe);



// undefined 
// null
// let firstName;
// console.log(typeof firstName);
// firstName = "Harshit";
// console.log(typeof firstName, firstName);
// let myVariable = null;
// console.log(myVariable);
// myVariable = "harshit";
// console.log(myVariable, typeof myVariable);
// console.log(typeof null);(// bug , error ) (shows object in console but actually it is a null) 
// BigInt
// let myNumber = BigInt(123);
// Int can save limited integers, big int can save unlimited integers. 
// let sameMyNumber = 123n;
// // console.log(myNumber);
// // console.log(Number.MAX_SAFE_INTEGER);
// console.log(myNumber+ sameMyNumber);
// booleans & comparison operator 


// booleans 
// true, false 
// let num1 = 7;
// let num2 = "7";
// console.log(num1<num2);
// == vs === 
// console.log(num1 === num2);
// console.log(num1 == num2);
// != vs !==
// console.log(num1 !== num2);
// console.log(num1 != num2);


// if else condition 
// let age = 17;
// if(age>=18){
//     console.log("User can play ddlc");
// }else {
//     console.log("User can play mario");
// }
// let num = 13;
// if(num%2===0){
//     console.log("even");
// }else{
//     console.log("odd");
// }
// falsy values 
// false
//""
// null 
// undefined
// 0
// truthy 
// "abc"
// 1, -1
// let firstName= 0;
// if(firstName){
//     console.log(firstName);
// }else{
//     console.log("firstName is kinda empty");
// }



// let age = 4;
// let drink;
// if(age>=5){
//     drink = "coffee";
// }else{
//     drink = "milk";
// }
// console.log(drink);
// ternary operator / conditional operator 
// let age = 3;
// let drink = age >= 5 ? "coffee" : "milk";
// console.log(drink);


// and  or operator 
// if(firstName[0] === "H"){
//     console.log("your name starts with H")
// }
// if(age > 18){
//     console.log("you are above 18");
// }
// if(firstName[0] === "H" && age>18){
//     console.log("Name starts with H and above 18");
// }else{
//     console.log("inside else");
// }
let firstName = "arshit";
let age = 16;
if(firstName[0] === "H" || age>18){
    console.log("inside if");
}else{ console.log("inside else");}


// nested if else
// winning number 19 
// 19 your guess is right 
// 17 too low 
// 20 too high 
let winningNumber = 19;
let userGuess = +prompt("Guess a number");
if(userGuess === winningNumber){
    console.log("Your guess is right!!");
}else{
    if(userGuess < winningNumber){
        console.log("too low !!!");
    }else{
        console.log("too high !!!");
    }
}



// if 
// else if 
// else 
// let tempInDegree = 50;
// if(tempInDegree < 0){
//     console.log("extremely cold outside");
// }else if(tempInDegree < 16){
//     console.log("It is cold outside");
// }else if(tempInDegree < 25){
//     console.log("wheather is okay ");
// }else if(tempInDegree < 35){
//     console.log("lets go for swim");
// }else if(tempInDegree < 45){
//     console.log("turn on AC");
// }else{
//     console.log("too hot!!");
// }
// console.log("hello");
// let tempInDegree = 50;
// if(tempInDegree < 0){
//     console.log("extremely cold outside");
// }else if(tempInDegree < 16){
//     console.log("It is cold outside");
// }else if(tempInDegree < 25){
//     console.log("wheather is okay ");
// }else if(tempInDegree < 35){
//     console.log("lets go for swim");
// }else if(tempInDegree < 45){
//     console.log("turn on AC");
// }else{
//     console.log("too hot!!");
// }
// console.log("hello there");
let tempInDegree = 4;
if(tempInDegree > 40){
    console.log("too hot");
}else if(tempInDegree > 30){
    console.log("lets go for swim");
}else if(tempInDegree > 20){
    console.log("weather is cool");
}else if(tempInDegree > 10){
    console.log("it is very cold outside");
}else{
    console.log("extremely cold");
}
console.log("hello");


// switch statement 
// let day = 7; 
// if(day === 0){
//     console.log("Sunday");
// }else if(day ===1){
//     console.log("Monday");
// }else if(day ===2){
//     console.log("Tuesday");
// }else if(day ===3){
//     console.log("Wednesday");
// }else if(day ===4){
//     console.log("Thrusday");
// }else if(day ===5){
//     console.log("Friday");
// }else if(day ===6){
//     console.log("Saturday");
// }else{
//     console.log("Invalid Day");
// }
let day = 9;
switch(day){
    case 0:
        console.log("Sunday");
        break; 
    case 1:
        console.log("Monday");
        break;
    case 2:
        console.log("Tuesday");
        break;
    case 3:
        console.log("Wednesday");
        break;
    case 4:
        console.log("Thrusday");
        break;
    case 5:
        console.log("Friday");
        break;
    case 6:
        console.log("Saturday");
        break;
    default:
        console.log("Invalid Day");
}

// while loop 
// 0 se 9 
// dry don't repeat yourself
let i = 0; // 1 2 3 4
while(i<=9){
    console.log(i);
    i++;}
console.log(`current value of i is ${i}`);
console.log("hello")


// while loop example 
let num = 100;
// let total = 0; //1 + 2 +3
// let i = 0;
// while(i<=100){
//     total = total + i;
//     i++;
// }
// console.log(total);
// let total = (num*(num+1))/2;
// console.log(total);


// intro to for loop 
// print 0 to 9
for(let i = 0;i<=9;i++){  console.log(i);}
// console.log("value of i is ",i);

// for loop example 
let total = 0;
let num = 100;
for(let i = 1; i<=num; i++){
    total = total + i;
}
console.log(total);


// break keywork
// continue keyword 
// for(let i = 1; i<=10; i++){
//     if(i===4){
//         break;
//     }
//     console.log(i);
// }
// for(let i = 1; i<=10; i++){
//     if(i===4){
//         continue;
//     }
//     console.log(i);
// }
console.log("hello there");



// do while loop
// while(i<=9){
//     console.log(i);
//     i++;
// }
// let i = 10;
// do{
//     console.log(i);
//     i++;
// }while(i<=9);
// console.log("value of i is ", i);


// intro to arrays 
// reference type 
// how to create arrays
// ordered collection of items 
// let fruits = ["apple", "mango", "grapes"];
// let numbers = [1,2,3,4];
// let mixed = [1,2,2.3, "string", null, undefined];
// console.log(mixed);
// console.log(numbers);
// console.log(fruits[2]);
//let fruits = ["apple", "mango", "grapes"];
//let obj = {}; // object literal
// console.log(fruits);
// fruits[1] = "banana";
// console.log(fruits);
console.log(typeof fruits);
console.log(typeof obj);// object literal
console.log(Array.isArray(fruits));// told us that it is array or not! If it's array says true else false. 
console.log(Array.isArray(obj));
// array indexing

 // array push pop 
// array shift unshift 
let fruits = ["apple", "mango", "grapes"];
console.log(fruits);
// push 
// fruits.push("banana");//add arrays at last position
// console.log(fruits);
// pop // removea array from last and also returns like we can store the element in variabls Or elsewhere
// let poppedFruit = fruits.pop();
// console.log(fruits);
// console.log("popped fruits is", poppedFruit);
// unshift //add arrays from starting
// fruits.unshift("banana");
// fruits.unshift("myfruit");
// console.log(fruits);
// shift //remove array from starting and returns 
// let removedFruit = fruits.shift();
// console.log(fruits);
// console.log("removed fruits is ", removedFruit);
//Push pop fatser than shift unshift


// primitve vs reference data types
//prinutive data types
// let num1 = 6;// stored in stack 
// let num2 = num1;
// console.log("value is num1 is", num1);
// console.log("value is num2 is", num2);
// num1++;
// console.log("after incrementing num1")
// console.log("value is num1 is", num1);
// console.log("value is num2 is", num2);
// reference types 
// array // stored in heap
let array1 = ["item1", "item2"];
let array2 = array1;
console.log("array1", array1);
console.log("array2", array2);
array1.push("item3");
console.log("after pushing element to array 1");
console.log("array1", array1);
console.log("array2", array2)


// how to clone array 
// how to concatenate two arrays
 let array1 = ["item1", "item2"];
// let array2 = ["item1", "item2"];
// let array2 = array1.slice(0).concat(["item3", "item4"]);
// let array2 = [ ].concat(array1,["item3", "item4"]);
// new way
 // spread operatorlet 
oneMoreArray = ["item3", "item4"]
let array2 = [...array1, ...oneMoreArray]; array1.push("item3"); 
console.log(array1===array2);
console.log(array1)
console.log(array2)

// for loop in array 
let fruits = ["apple", "mango", "grapes", "banana"];
// for(let i=0; i<=9;i++){
//     console.log(i);
// }
// console.log(fruits.length);
// console.log(fruits[fruits.length-2]);
let fruits2 = [];
for(let i=0; i < fruits.length; i++){
    fruits2.push(fruits[i].toUpperCase());
}
console.log(fruits2);


// use const for creating array
// heap memory ["apple", "mango"] 0x11
// const fruits = ["apple", "mango"]; // 0x11
// fruits.push("banana");
// console.log(fruits);

// while loop in array 
const fruits = ["apple", "mango", "grapes"];
const fruits2 = [];
let i = 0;
while(i<fruits.length){
    fruits2.push(fruits[i].toUpperCase());
    i++;
}
console.log(fruits2);

// for of loop in array
const fruits = ["apple", "mango", "grapes", "fruit4", "fruit5"];
const fruits2 = [];

// for(let fruit of fruits){
//     fruits2.push(fruit.toUpperCase());
// }
// console.log(fruits2);
for(let i = 0; i<fruits.length; i++){
    console.log(fruits[i]);
}

// for in loop in array
const fruits = ["apple", "mango", "grapes", "fruit4", "fruit5"];
const fruits2 = [];
for(let index in fruits){
    fruits2.push(fruits[index].toUpperCase());
}
console.log(fruits2);

// array destructuring 
const myArray = ["value1", "value2", "value3","value4"];
// let myvar1 = myArray[0];
// let myvar2 = myArray[1];
// console.log("value of myvar1", myvar1);
// console.log("value of myvar2", myvar2);
let [myvar1, myvar2, ...myNewArray] = myArray;
let[myvar1, ,myvar2];// element 3 assigned in myvar2 mean element 2 skipped
console.log("value of myvar1", myvar1);
console.log("value of myvar2", myvar2);
console.log(myNewArray);

// objects reference type  
// arrays are good but not sufficient 
// for real world data 
// objects store key value pairs 
// objects don't have index
// how to create objects 
// const person = {name:"Harshit",age:22};
const person = {
    name: "harshit",
    age: 22,
    hobbies: ["guitar", "sleeping", "listening music"]
}
console.log(person);
console.log(person.name) ;//access name 
console.log(person["name"]) ;// access name
// how to access data from objects 
// console.log(person["age"]);
// console.log(person.hobbies);
// how to add key value pair to objects
person["Gender"] = "male";
console.log(person);


// objects reference type  
// arrays are good but not sufficient 
// for real world data 
// objects store key value pairs 
// objects don't have index

// how to create objects 

// const person = {name:"Harshit",age:22};
const person = {
    name: "harshit",
    age: 22,
    hobbies: ["guitar", "sleeping", "listening music"]
}
console.log(person);
// how to access data from objects 
// console.log(person["name"]);
// console.log(person["age"]);
// console.log(person.hobbies);
// how to add key value pair to objects
person["person"] = "male";
console.log(person);

// difference between dot and bracket notaion
// const key = "email";
// const person = {
//     name: "harshit",
//     age: 22,
//     "person hobbies": ["guitar", "sleeping", "listening music"]

// }

// console.log(person["person hobbies"]);
// person[key] = "harshitvashisth@gmail.com";
// console.log(person);


// how to iterate object 
const person = {
    name: "harshit",
    age: 22,
    "person hobbies": ["guitar", "sleeping", "listening music"]
}

// for in loop 
// Object.keys 

// for(let key in person){
//     // console.log(`${key} : ${person[key]}`);
//     console.log(key," : " ,person[key]);
// }

// console.log(typeof (Object.keys(person)));
// const val = Array.isArray((Object.keys(person)));
// console.log(val);

// for(let key of Object.keys(person)){
//     console.log(person[key]);
// }

// computed properties

const key1 = "objkey1";
const key2 = "objkey2";

const value1 = "myvalue1";
const value2 = "myvalue2";

// const obj = {
//     objkey1 : "myvalue1",
//     objkey2 : "myvalue2",
// }

// const obj = {
//     [key1] : value1,
//     [key2] : value2
// }

const obj = {};

obj[key1] = value1;
obj[key2] = value2;
console.log(obj);