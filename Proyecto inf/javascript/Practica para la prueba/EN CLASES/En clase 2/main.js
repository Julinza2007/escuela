/*
document.addEventListener('submit', handleSubmit); Acá iría lo mismo pero sin el onsubmit en el html
*/
function handleSubmit(event){
    event.preventDefault();
    let borde = event.target.bordes.value;
    let fondo = event.target.fondos.value;
    document.querySelector('#hola').style.background = `${borde}`;
    document.querySelector('body').style.background = `${fondo}`;
}

/*
En el formulario con `onsubmit` y dos inputs (`name="borde"` y `name="fondo"`), 
y un input de tipo submit,
asigna el valor del primer input como `backgroundColor` de un `div` 
y el del segundo input como `background` del `body`.
*/