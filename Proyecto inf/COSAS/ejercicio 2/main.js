function handleSubmit(event){
    event.preventDefault();
    let fondos = event.target.fondos.value;
    let bordes = event.target.bordes.value;
    let paddings = event.target.paddings.value;
    document.querySelector('#chano img').style.border = `5px solid ${bordes}`;
    document.querySelector('#divs').style.margin = `${paddings}px`;
    document.body.style.background = `${fondos}`;
}
addEventListener('click', handleClick);
function handleClick(){
    document.querySelector('#chano img').style.display = ``;
}

