function power(x,n){
    let result = 1;
    for (let i=i; i<n; i++)
    result *= x;
    return result;
}

function handleSubmit(event){
    event.preventDefault();
    let x = +event.target.x.value;
    let n = +event.target.n.value;
    let p = document.createElement('p');
    p.textContent = `${x} factoriado a ${n} es ${power(x, n)}`;
    document.body.append(p);
}