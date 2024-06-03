function update(){
let date= new Date();
let h2= document.querySelector('h2');
h2.textContent= date;
let h= date.getHours();
let m= date.getMinutes();
let s= date.getSeconds();
h2.textContent= `${h}:${m}:${s}`;
}

setInterval(update, 1000);