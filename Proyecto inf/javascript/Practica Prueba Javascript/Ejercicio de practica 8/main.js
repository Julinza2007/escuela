function handleSubmit(event){
    event.preventDefault();
    let x = +event.target.x.value;
    let y = +event.target.y.value;
    let r = +event.target.r.value;
    circle(x, y, r);
    event.target.reset();
}


function circle(x, y, r){
    let div = document.createElement('div');
    let canvas = document.querySelector('#canvas');
    div.classList.add('circle');
    div.style.width = r*2 + 'px';
    div.style.height = r*2 + 'px';
    div.style.position= 'absolute';
    div.style.top = canvas.getBoundingClientRect.top + y - r + 'px';
    div.style.left = canvas.getBoundingClientRect.left + x - r + 'px';
    canvas.append(div);         
}




let h1 = document.querySelector('h1');
h1.addEventListener('click', easterEgg);

function easterEgg(){
    let circles = document.querySelectorAll('.circle');
    for(let c of circles){
        let r = Math.floor(Math.random() * 256);
        let g = Math.floor(Math.random() * 256);
        let b = Math.floor(Math.random() * 256);
        c.style.background = `rgb(${r}, ${g}, ${b})`;
        c.style.transform = 'rotateY(180deg)';
    }
}



document.addEventListener('click', easterEasterEgg);

function easterEasterEgg(event){
    let circle= event.target;
    if(circle.classList.contains('circle')){
        let x = Math.floor(Math.random() * 300);
        let y = Math.floor(Math.random() * 300);
        circle.style.transform = `translate(${x}px, ${y}px)`;
    }
}