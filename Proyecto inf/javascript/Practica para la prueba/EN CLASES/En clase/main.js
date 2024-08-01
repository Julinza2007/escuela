document.addEventListener('click', handleClick); // Vincula todos los eventos de click con la función que está entre los paréntesis
function handleClick(event){
 if (event.target.textContent == 'Rojo'){
    document.querySelector('#btns').style.background = 'red';
    let boton1 = document.createElement('button');
    event.target.remove();
    
    boton1.textContent= "Hola";
    boton1.classList.add('hola');
    document.querySelector('body').append(boton1);
   }

   if(event.target)
 if (event.target.textContent == 'Verde'){
    document.querySelector('#btns').style.background = 'green';
   }


}

