/*


WHAT IS A HIGHER ORDER FUNCTION?
higher order function is a function which accepts a function as an argument or return a fuction
eg: forEach is always a higher order function which always have a function insid it



WHAT IS A CONSTRUCTION FUNCTION?
normal function in which we use this keyword and when you call it you use the new keyword for calling
use case: whenever we got the opportunity to give a similar kind of propertied to different elements 
with a little tweaks in properties for examples button of remote all are button with same property there
name could be different alright



WHAT IS A FIRST CLASS FUNCTION?
a language is said to have a first class function when the fucntion in that language are treated as normal
values or like variables, ypu can save them and pass them as an argument to another function



WHAT IS NEW KEYWORD?
whenever we use new there is a blank objecct created for the constructor function which is getting called
just after the new keyword



WHAT IS iife?
immediately invoked function expression: is a technique to immediately run the functions in a way so that
the content inside it could be saved pricately



WHAT IS PROTOTYPE?
when you go to the console of the browser and create an object let's say:
var obj = {
    name: "Harsh"
}
- and now type object name followed by "." you will see the key name which you had created inside the object
followed my many more property names, now you didnt create these properties, so where do they even come from,
that's where the concept sof prototype comes in, every created object gets a property called prototype, which
means whenever you create an object it gets prototype properties automatically.
- javascript bydefault adds a property called [[prototype]] to every object, so if you see any object then you
can blindly say that this ibject contain prototype, so now, waht exactly does prototype contains?
- [[prototype]] contains many helper properties and methods which we can use to comlete our task, let's say we
created an array and we want to check the lengh of it, we can use .length property on arrays, do we created it
no?, then hiow are we able to?, the answer is this that many properties and methods are already available to use
built by js creators inside prototype of every object.



WHAT IS PROTOTYPICAL INHERITANCE?
inheritance happens when the properties of parents are passed into there children, so to achieve the same thing
in js by using prototype(the extra property which is given to every object in js) is called protypical inheritance
var Human = {
    name: "harsh",
    canFly: false,
    canTalk: true,
    willDie: true
}
var SheryiansStudent = {
    solveJsQuestion: true,
    createModernWebsites: true
}
SheryiansStudent.__proto__ = Human;



WHAT IS THIS KEYWORD AND THE CONCEPT CALL APPLY BIND?
- this is a special keyword in js which changes its value depending on the different context
- whenever you write something lets say a function, an object check if you have any scope {}
- whenever anything is not in braces then it has a global scope
- in global scope if you try to print the value of this keyword then it will return window
- in function scope if you try to print the value of this keyword then it will return window
- in method scope if you try to print the value of this keyword then it will return object
WHAT IS A MENTHOD?
a function which is declard inside the object is called method
-in any menthod "this" keywords will always refer to the parent object
- event listener
var button = document.querySelector("button");
button.addEventListener("click",function(){
    console.log(this);
})
- this keyword is equal to whatever written before addEventListener, in this case button
- call: if you have a function and an object and you want this that when you run the function then the value of this
keyword which is by default window should change to that object then we can achieve that by call
function abcd(val, val2, val3){
    console.log(this);
}
var obj = {age:24}
abcd.call(obj, 1, 2, 3)
- you can achiievve the same things by apply like changing the defult type window to any object but the catch
is this that it only accepts two arguments and if you want to pass multiple values into that then you will be in
need of usinf the array braces [] but it does't mean it has formed an array
abcd.apply(obj, [1,2,3])
this will also give val, val2, val3 the values 1,2,3
- use case: of this call, apply and bind is only needed when you have to cahnge the bydefault value of type which was windows
- bind: it just binds the values of fuction togather it doesnt run them you have to also save them into a given which
you can use later on by calling normally
function abcd(){
    console.log(then);
}
var obj = {a:2}
var c = abcd.bind(obj)
c();
- in react you have to made event listeresr when an click event happens then it should run then it is used




WHAT IS PURE FUNCTION?
pure function is any function which has these two features:
i) it should always return same output for same input
ii) it will never change/update the value of a global variable
- eg 1 impure function:
function abcd(val){
    return Math.random()*val;
}
abcd(2);
abcd(2);
- eg 2 impure function:
var abcdef = 12;
function abcd(a,b){
    abcdef =13;
    return a*b;
}
var a1 = abcd(2,3);
var a2 = abcd(2,3);
- eg 3 pure function:
function abcd(a,b){
    return a*b;
}
var a1 = abcd(2,3);
var a2 = abcd(2,3);


*/