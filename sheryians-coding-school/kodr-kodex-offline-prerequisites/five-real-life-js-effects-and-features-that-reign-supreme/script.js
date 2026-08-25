var istatus = document.querySelector("h5")
var addFriend = document.querySelector("#add")
var check = 0

addFriend.addEventListener("click",function(){
    if(check == 0){
        console.log("clicked")
        istatus.innerHTML = "Friends"
        istatus.style.color = "green"
        check = 1
        addFriend.innerHTML = "Remove Friend"
    }else{
        console.log("clicked")
        istatus.innerHTML = "Stranger"
        istatus.style.color = "red"
        check = 0
        addFriend.innerHTML = "Add Friend"
    }
})
