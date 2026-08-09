/* SOME WARNING AND ALERT FUNCTIONS */

console.log('This is a message')
console.warn('This is a warning')
console.error('This is an error')




/* variable in js are datatype independent */

var a = 10
var b = 20
var c = 4.5
console.log(a + b)
console.log(b-a)
console.log(b/a)
console.log(b%a)

alert("Watch out")
var a = confirm("Are you an Adult?")
console.log(a)

var ab = prompt("Enter your name: ")
console.log(ab)
console.log("User name is",ab)




/*
DATA TYPES IN JS
1: premitive - means you can only store a single value into the variable 
               for example var a = 34 50 this is wrong it can only store either 34 or 50
    - Numbers: (1,2,3,20.50,6.6666)
    - String: ("a","SARTHAK")
    - Boolean: (True, False)
    - Undefined: jb hm koi variable declare kare or initialize na kare to filler ke taur pe undefined available rehta hai
    - Null
    - Symbol
    - NaN: It happens when you multiply a string with a number addition is possible because of + being responsible to concatinate

2: Reference - 
    - Array
    - Objects
    - Functions/Methods */

var as = 234
var bs = "Sarthak"
console.log(as*bs)
console.log(as+bs)





/*
CONDITIONAL STATEMENTS
    if and else statement
*/

if (10>5) {
    console.log("True")
} else {
    console.log("False")
}

//checking for age eligibility
var age = prompt("What's your age: ")

if (age>=18){
    console.log("You can vote.")
} else {
    console.log("You are not eligible.")
}




/* LOOPS */

var a = 0

while ( a < 1000 ) {
    console.log("Hi")
    a++
}

for( var h = 0; h < 10 ; h++ ){
    console.log("Hello")
}





/* COMPARISON OPERATOR */
gf = 10
fg = "10"

if(gf === fg){ // it will only check for the value if we put == doble quual to an additional === is required
               // to compare for the datatype as well 
    console.log("Correct")
} else {
    console.log("Wrong")
}





/* FUNCTION */
function hey() {
    console.log("Good Morning")
}

hey()

function greet(a){
    console.log("Good Morning",a+"!!")
}

greet("Harsh")

function abc(){
    console.log("Habibi")
    return 30
}

var bv = abc()
console.log(bv)


var bcd = function(){ // this is known as firstr class function
    console.log("jsadgfkjg")
}

bcd()

var ls = ()=>{ // this is known as fat arroe function
    console.log("ohh bhai")
}

ls()





/* VAR CONST LET 

These all have a bit of difference let and const introduced in js since 2015 when es6 has been released
with declaration const you cant reinitialise
with declaration let the scope of accecc of variable will be only to its near parent function
var could be accessed globally

*/

var m = 10
const n = 49
let nb = 78




/* ARRAY
array could store multiple values of data
array can have different data types stored in a single variable in js
array follows indexing from zero
*/

var arr = [10,20,"sfsdf",10.234,true,false]
console.log(arr)
console.log(arr[56])
console.log(arr[0])
arr.push(99)
console.log(arr)
arr.pop()
console.log(arr)
console.log(arr.length)

//in array sometimes we need to operate a loop for each element present in the array
arr.forEach(function(argmnts){
    console.log("Hello", argmnts)
})




/* NOTE
() = function
[] = array
{} = pbjects */




/* OBJECTS */
var obj = {
    user: "Harsh",
    age: 40
}

var obj1 = {
    PhoneModel: "Reno",
    Price: 30000
}

console.log(obj)
console.log(obj.user)
console.log(obj1)

var ubh = {
    user_Name: "Sarthak",
    age: 49,
    greet:function(){
        console.log("Hello")
    }
}

console.log(ubh)
console.log(ubh.greet)
console.log(ubh.greet()) // it will show undefined because of no return value in the function
ubh.greet()



/* METHOD

    a function inside an object is called method */





/* ARRAY OF OBJECTS 

    it simply means to have objects being define in arrays format
*/



var arrobj = [{name:"Sarthak",field:"MERN"},{name:"Harsh",field:"WEB DEV"}]
console.log(arrobj)
console.log(arrobj[1])
console.log(arrobj[0].name)


