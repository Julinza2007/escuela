let notas = JSON.parse(localStorage.getItem('notas')) || [];
showNotas();

function showNotas(){
    let ul = document.querySelector('ul');
    ul.textContent = '';
    for(let nota of notas){
        let li = document.createElement('li');
        li.textContent = nota;
        ul.append(li);
    }
}

function handleSubmit(event){
    event.preventDefault();
    form = event.target;
    let valor = form.nota.value;
    notas.push(valor);
    localStorage.setItem('notas', JSON.stringify(notas));
    showNotas();
    form.reset();
}
