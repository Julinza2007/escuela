let pagina = 1;
addEventListener('click', handleClick);
function handleClick(event){    
           
    if(event.target == document.querySelector('#btns')){
        let boton = document.createElement('button');
        boton.textContent = 'Para atrás';
        document.querySelector('body').append(boton);
        let boton1 = document.createElement('button');
        boton1.textContent = 'Siguiente página';
        document.querySelector('body').append(boton1);

        if(event.target.textContent == 'Para atrás'){
            pagina = pagina - 1;
        }
            else if(event.target.textContent == 'Siguiente página'){
                pagina = pagina + 1;
            }
        }
    
    }


    fetch(`https://rickandmortyapi.com/api/character?page=${pagina}`)
    .then(res => res.json())
    .then(data => {
        let container = document.querySelector('.container');
        for (let c of data.results){
            let div = document.createElement('div');
            div.classList.add('card');
            let h3 = document.createElement('h3');
            h3.textContent = c.name;
            let img = document.createElement('img');
            img.src = c.image;
            div.append(img);
            div.append(h3);
            container.append(div);
        }
    });


}




    