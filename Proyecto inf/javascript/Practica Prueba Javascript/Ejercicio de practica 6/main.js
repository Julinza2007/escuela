let dropdowns = document.querySelectorAll('.dropdown');
for(let dropdown of dropdowns){
    dropdown.parentElement.addEventListener('click', toggleDropdowns);
}

function toggleDropdowns(event){
    let div = event.target.children[0];
    if(div.style.display == 'none'){
        div.style.display = 'block';
    }
    else{
        div.style.display = 'none';
    }
}