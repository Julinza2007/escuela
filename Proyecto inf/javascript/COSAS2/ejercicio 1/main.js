<<<<<<< HEAD:Proyecto inf/COSAS/ejercicio 1/main.js
document.addEventListener('click' /*<--- Eso es una forma de entrada*/,  handleClick); // Para que el programa escuche el click vinculando el click con la funciíon handleClick
function handleClick(event){
    if (event.target.textContent == 'Azul')
        document.querySelector('#btnAzul').style.border = '10px ridge blue';
    if (event.target.textContent == 'Amarillo')
        document.querySelector('#btnAmarillo').style.border = '10px ridge yellow';
=======
document.addEventListener('click' /*<--- Eso es una forma de entrada*/,  handleClick); // Para que el programa escuche el click vinculando el click con la funciíon handleClick
function handleClick(event){
    if (event.target.textContent == 'Azul')
        document.querySelector('#btnAzul').style.border = '10px ridge blue';
    if (event.target.textContent == 'Amarillo')
        document.querySelector('#btnAmarillo').style.border = '10px ridge yellow';
>>>>>>> 4327962341b4a33d157a7766dfb450e0819c019c:Proyecto inf/javascript/COSAS2/ejercicio 1/main.js
}