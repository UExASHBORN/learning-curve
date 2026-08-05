// var, let, const line-by-line comparison

var a; 
var a = 12 ;
var username = "harsh";
// var window mein add hota hai
// var function scoped hota hai
// var ko hm phir se declare kar sakte hain same name se error nhi aaye ga


let c;
let d = 13;
// let se value ke same name declare karne pe error aaye ga
// let ko use karna var se better hai to prevent the code from falling apart


//const a; //this will throw error
const b = 15;
// const ko use tb karte hain jb hmko value change nhi karni hoti ex: value of pie 3.14


// declaration and initialization
var e; // means declaration
var e= 34; // means declaration and initialize(pehli value dena)

const dulha = "Lab";
const dulhan = "laby";

/*har kisi bhi function ke andar define hoga to agar vo if ke andar hai to bhi vo function
usko access kar paye ga javascript mein joki aisa baki language mein nahi hota hai*/





//scope (Global, Block, Functional)
// scope simply means aap ka daira kahan tk hai

function abcd(){
    var m = 2; // this var could only be used in functipon abcd that's why its scope is functional  
}

var ab=3; /* the scope of this var sb is global or keh sakte hain ki aisa variable joki kisi bhi curly
braces ke andar nhi hain*/

{
    var cd = 3;
}/* these braces are called block iske andar koi bhi cariable create hoga to vo kehlaye ga block scope
par var block ko respect nhi karta hai javascript mein var khali functional scoped hai*/

{
    let mn = 5;
}// let is blocked scoped

function xyz(){
    if(true){
        var fjhb=4;// this var will be acccessible to the nearest parent function
    }
}

function skjgf(){
    if(true){
        let sfhsgdfjh=67; // this let could only be used in nearest block which is a closed curly braces nearest
    }
}





// Reassignment, Redeclaration

var sdfgh=34;
sdfgh=56; // this is possible and it's called as reassignment
var sdfgh=58; // this is also possible in var and is called Redeclaration it will now throw any error on console

let ui=45;
ui=47; // reassignment is possible for let
//let ui=67; // redeclaration is not possible for let it will throw an error on console 




//Temporal Dead Zone

console.log(am);
//let am = 32; // this will throw an error at console of initialization before declaration
/* tdz - utna area jitne mein javascript ko pata to hai ki aage variable exist karta hai par vo
abhi aap ko value nhi de sakta hai in other words aap ke veriable declare hone ke pehle jitni
lines hai vo sb temporal dead zone hai us variable ki jo us samay declare hua */

console.assertlog(an);
var an = 15; // this will only show on console as undefined no error so it have a problem because




//Hoisting Impact Per Type
/*hoisting -> ek variable ko jb javascript mein banate hain to vo do hisso mein toot jata hai
and uska declare part upar chala jata hai and initialize part neeche reh jaat hai */

var g = 45;
//tutne ke baad
var g = undefined;// this will go at top because of which you can access it and the console shows no error and says undefined
g = 45;

let ga = 45;// hoisting happened in this too 
let g = undefined; // ye upar chala jaye ga
console.log(ga); /* this will throw error at console by saying cannot acces a before
initialization but ye nhi keh ra ki declation nhi hua hai*/
g = 45;// ye niche reh jaye ga or isse hi initialzation kehte hain

/*so basically
var -> hoist -> undefined
let -> hoist -> x (no value set)
const -> hoist -> x(no value set reference error)
*/


// Q & A
console.log(nmb);
var nmb = "Harsh"; //console pe undefined aaye ga
