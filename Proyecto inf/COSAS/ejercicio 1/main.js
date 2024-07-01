document.addEventListener('click', handleClick);
function handleClick(event){
    if (event.target.textContent == 'Azul')
        document.querySelector('body').style.background = 'blue';
    if (event.target.textContent == 'Amarillo')
        document.querySelector('body').style.background = 'yellow';
}