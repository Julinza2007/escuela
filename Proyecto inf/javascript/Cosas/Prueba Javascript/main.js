let form = document.querySelector('form');
function handleSubmit(event) {
    event.preventDefault();
    let x = +event.target.x.value;
    let y = +event.target.y.value;
    let r = +event.target.r.value;
    circle(x,y,r);
    form.reset();
}

function circle(x,y,r){ 
    let circulo = document.createElement('div');
    circulo.style.backgroundColor='black';
    circulo.style.width = `${r * 2}px`;
    circulo.style.height = `${r * 2}px`
    circulo.style.borderRadius = '50%';
    circulo.style.left = `${x}px`;
    circulo.style.top = `${y}px`;
    document.body.append(circulo);
}