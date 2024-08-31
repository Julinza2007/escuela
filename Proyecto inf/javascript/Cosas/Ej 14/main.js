let agenda = JSON.parse(localStorage.getItem('agenda')) || [];

function addContact(contact){
    agenda.push(contact);
    localStorage.setItem('agenda', JSON.stringify(agenda));
}

const contact ={
    name: 'Juan',
    phone: 'Celular',
    email: 'Alternate email',
    note: 'Enter notes here',
}

addContact(contact);