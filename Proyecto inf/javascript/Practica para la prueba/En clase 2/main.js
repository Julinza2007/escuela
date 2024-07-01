function handleSubmit(event){
    event.preventDefault();
    let borde = event.target.bordes.value;
    let fondo = event.target.fondos.value;
    document.body.style.background = `${fondo}`;
    document.querySelector('#hola').style.border = `5px solid ${borde}`;
}
