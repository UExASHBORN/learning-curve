/* 
1: What is DOM?
it stands for document object model - yani frontend ki javascript
*/



/*
2: 4 pillars of DOM
    - selection of an element:
    */
        var a = document.querySelector("h1")
        console.log(a)
    /*
    - changing html:
    */
        a.innerHTML = "Changed totally"
        document.querySelector("h1").innerHTML = "Direct change"
    /*
    - changind css:
    */
        a.style.color = "magenta"
        a.style.backgroundColor = "black" // this is direcrt manipulation od css through js thats why the declaration is in camelCase
    /*
    - event listener:
    */
        a.addEventListener("click",function(){
            a.innerHTML = "Hey"
            a.style.color = "crimson"
            a.style.backgroundColor = "pink"
        })
    /*
2
*/



/*
3: Simple example of bulb
*/
    var bulb = document.querySelector("#bulb")
    var btn = document.querySelector("button")
    
    var flag = 0
    btn.addEventListener("click", function(){
        if(flag == 0){
            bulb.style.backgroundColor = "yellow"
            flag = 1
            console.log("clicked")
        }else{
            bulb.style.backgroundColor = "white"
            flag = 0
            console.log("again clicked")
        }
    })
/*
*/




/*
4: Selecting multiple events simultaneously
*/
    var h2 = document.querySelectorAll("h2")
    console.log(h2)
    h2.forEach(function(e){
        console.log(e)
    })
/*
*/



/*
5: Getting element by ID and Class
*/
    document.getElementById("box")
    document.getElementsByClassName("tr")
/*
*/



/*
6: Difference between textcontent and innerHTML
*/
    var box = document.querySelector("#box")
    box.innerHTML = "<h1>Hellow buddy</h1>"
    box.textContent = "<h2>Bye</h2>"// it will reden the tags there as well
/*

*/