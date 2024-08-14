lista ={
    Name: "Julinza",
    Surname: "Linzalata",
    Age: 20,
    Sex: "Male"
};

function makeRow(obj) {
    let table= document.createElement("table");
    table.classList.add("table2");
    let row2 = document.createElement("tr");
    let row = document.createElement("tr");    
    for (let prop in obj){
        let campo = document.createElement("td");
        campo.textContent = prop;
        row.append(campo);
        let cell = document.createElement("td");
        cell.textContent = obj[prop];
        row2.append(cell);
    }
    table.append(row);
    table.append(row2);
    document.body.append(table);
}

console.log(Object.keys(lista));

makeRow(lista);

