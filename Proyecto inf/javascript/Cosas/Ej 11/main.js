let pagina = 1;

if(pagina == 1){
    let atras = document.getElementById('atras');
    atras.style.display = 'none';
}
let p= document.createElement('p');
document.querySelector('#contador').append(p);
p.textContent = `Pagina ${pagina}`;
function contador(){
    p.textContent = `Pagina ${pagina}`;
}
function siguiente(event){
    pagina++;
    fetch(`https://rickandmortyapi.com/api/character?page=${pagina}`)
    .then(res => res.json())
    .then(data => {
        let container = document.querySelector('.container');
        container.innerHTML = '';
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
        if(pagina > 1){
            let atras = document.getElementById('atras');
            atras.style.display = 'inline-block';
        }

       if(pagina == 42){
            let siguiente = document.getElementById('siguiente');
            siguiente.style.display = 'none';
        }
    });
    contador();
}

function anterior(event){
    pagina--;
    fetch(`https://rickandmortyapi.com/api/character?page=${pagina}`)
    .then(res => res.json())
    .then(data => {
        let container = document.querySelector('.container');
        container.innerHTML = '';
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
        if(pagina == 1){
            let atras = document.getElementById('atras');
            atras.style.display = 'none';
        }
        if(pagina < 42){
            let siguiente = document.getElementById('siguiente');
            siguiente.style.display = 'inline-block';
        }
    });
    contador();
}

fetch(`https://rickandmortyapi.com/api/character?page=${pagina}`)
.then(res => res.json())
.then(data => {
    let container = document.querySelector('.container');
    container.innerHTML = '';
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