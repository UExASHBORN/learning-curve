/* 

THERE ARE MAINLY TWO VERSIONS OF JS: ES5 and ES6 (es5 is old es6 is new)

ES5 only had var
    var is function scoped you can use its value anywhere in its neares parent function
    var adds itself to the window object
E

ES6 includes let and const
    let and const is braces scoped
    let and const doesnt add to window object
E


BROWSER CONTEXT API
it consist of three things
    1: windows object
    2: stack
    3: heap memory



There are some things which we can use in JS laguange but they are not part of the
language itself but we can use them because we get them from the browser and those
features which we can use in js but are not part of the language we can find then 
in an object and that object is known as windows and window is a box of feature given
by user to use with js
eg: alert, promt, console



stack: a place where data is stored in levels and you can access a data at a time 


whatever the data your program have and the intermediate data which is need this all
needs to be store somewhere so it stored in heap memory



execution context means whenever we run a function then what happen is this that the function
makes an imaginary container which contins its three things
    1: variables
    2: lexical environment of the fucntion: lexical environment tell what our function can access and what it can't
    3: function inside that parent function
m


lexical environment is a chart in which a particular it's written about a particular function access permissions like what
it can and what is could't , it means it hold it's scope and the scope chain


HOW TO COPY REFERENCE VALUES: with the help of spread operator "..."

whatever you write in js from two category it belongs to the single category which is truthy or falsy
    1: falsy values are: 0 false undefined null NaN document.all
    2: truthy values are: the values which doesnt belong to the category of falsy they all are truthy
w



forEach loop runs only on array and it never do changes into the default array but it do changes on to
the temporary copy of the array on which you want to do the operations thats why arrays actual value never changes


forin loop is for doing the loop operation on to the object { age: 23, name: "Harsh"}


whenever there is a code which you had written which completes afterwards, then because it completes afterwards then js didnt
know whether that code completes or not, this type of code when it completed then we have to tell the js that this is cmplete
and you can run this now, and this work is done by callbacks functions, call back functions are just normal function with settimeout values 



first calss function: there is a concept in js which says that you can use a function as a value



arrrays data in js is a object and you can check that by doing typeof on console and how do we know
if something is array or object then we use Array.isArray([]) this will print true then its an array


if we want to delete a data value from object then we use "delete obj.age;"

*/