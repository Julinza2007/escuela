document.addEventListener(handleClick); // Vincula todos los eventos de click con la función que está entre los paréntesis
function handleClick(event){
 if (event.target.textContent == 'Rojo')
    document.querySelector('#btns').style.background = 'red';
 if (event.target.textContent == 'Verde')
    document.querySelector('#btns').style.background = 'green';
}

