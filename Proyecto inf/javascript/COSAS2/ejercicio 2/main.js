function handleSubmit(event){
    event.preventDefault();
    let fondos = event.target.fondos.value;
    let bordes = event.target.bordes.value;
    let paddings = event.target.paddings.value;
    document.querySelector('#equi img').style.border = `5px solid ${bordes}`;
    document.querySelector('#divs').style.padding = `${paddings}px`;
    document.body.style.background = `${fondos}`;
}
addEventListener('click', handleClick);
function handleClick(event){
    if(event.target.querySelector('#equi img')
    document.querySelector('#equi img').style.display = ``;
    document.querySelector('#equi').style.textAlign = `center`;
}

