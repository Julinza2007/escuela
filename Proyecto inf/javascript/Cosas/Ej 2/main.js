function handleSubmit(event){
    event.preventDefault();
    let n = +event.target.n.value;
    let p = document.createElement('p');
    p.textContent = `${n} factorizado es igual a ${factorial(n)}`;
    document.body.append(p);
}

function factorial(n) {
    let result = 1;             
    for (let i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
