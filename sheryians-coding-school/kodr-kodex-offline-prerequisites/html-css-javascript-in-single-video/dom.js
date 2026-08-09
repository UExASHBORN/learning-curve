/* DOM - Document Object Model

up till now we were just learning the basic concepts of the language JS but we can
use JS in many ways possible frontend, backend, react native mobile apps, electron JS desktop apps
so,
lame bhasha mein frontend ki java script ko DOM kehte hain


THERE ARE 4 PILLARS OF DOM
1: Selection of an Element
2: Changing html with the help of JS
3: Changing CSS
4: Event Listener

*/

var a = document.querySelector("h1")
console.log(a)

// var a = document.querySelector(".className") // if it was a div
// var a = document.querySelector("#idName") // if it was a div
// var a = document.querySelector("#nav h1") // if it was a div

a.innerHTML="changed"
a.style.color = "yellow"
a.style.backgroundColor = "red"




/* NOW LET'S UNDERSTRAND WHAT IS EVENT

    event means something which is happening
    eg: moving of the cursor */

var h1 = document.querySelector("h1")
console.log(h1)
h1.addEventListener("dblclick",function(){ //there are many eventlistener other then click like mouseenter, dblclick
    console.log("Hellow")
    h1.innerHTML="Chal htt!!"
    h1.style.backgroundColor="gold"
    h1.style.color="crimson"
})