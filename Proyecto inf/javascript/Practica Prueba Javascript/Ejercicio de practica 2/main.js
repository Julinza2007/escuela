function array(){
  let a = [12, 'Buenas tardes', 'trolololo', 'Genio', 'Julian Martin (soy yo)', 'Enamorado', 'Abatido', 'Celoso', 'Cariñoso', 'Cuidadoso', false];

  setInterval(() => {
    for(let element of a){
      let p = document.createElement('p');
      p.textContent = element;
      document.body.append(p);
    }
  }, 1000)
}

array();



