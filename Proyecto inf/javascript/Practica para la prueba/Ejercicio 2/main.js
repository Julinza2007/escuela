function handleSubmit(event){
    event.preventDefault();
    let x = +event.target.x.value;
    let p = document.createElement('p');
    p.textContent = `${x} factorizado es igual a ${factorial(x)}`;
    document.body.append(p);
}

function factorial(x){
    let result = 1;
        for(let i= 1; i <= x; i++)
            result = result * i;
        return result;
}