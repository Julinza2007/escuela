
fetch('https://rickandmortyapi.com/api/character')
.then(res => res.json())
.then(data =>{
let container = document.querySelector('.container');
for(let c of data.results){
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



