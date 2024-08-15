let p = document.createElement('p');
document.body.append(p);
function handleSubmit(event) {
    event.preventDefault();
    let n = +event.target.n.value;
    let a = +event.target.a.value;
    let b = +event.target.b.value;
    
    p.textContent = `Los ${n} primeros numeros aleatorios entre ${a} y ${b} son:`;
    for (let i = 0; i < n; i++) {
        let num = Math.floor(Math.random() * (b - a + 1) + a);
        p.textContent += ' ' + num;
    }

}