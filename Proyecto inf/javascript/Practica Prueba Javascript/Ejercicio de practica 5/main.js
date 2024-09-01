contactos = JSON.parse(localStorage.getItem('contactos')) || [];
showContacts();

function showContacts(){
let ul = document.querySelector('ul');
ul.textContent= '';
for(let contacto of contactos){
    let li = document.createElement('li');
    li.textContent= contacto;
    ul.append(li);
}
}

function addContact(event){
    event.preventDefault();
    let form = event.target;
    let contacto = form.contacto.value;
    contactos.push(contacto);
    localStorage.setItem('contactos', JSON.stringify(contactos));
    showContacts();
    form.reset();
}