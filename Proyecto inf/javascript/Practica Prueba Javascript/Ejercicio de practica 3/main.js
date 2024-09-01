let frutas = [
{nombre: 'Manzana', precio: '1000'},
{nombre: 'Pera', precio: '800'},
{nombre: 'Frutilla', precio:'400'},
{nombre: 'Banana', precio:'1200'},
{nombre: 'Naranja', precio:'1100'},
];

for(let fruta of frutas){
    console.log(fruta.nombre, fruta.precio + '$');
    for (let prop in fruta){
        console.log(fruta[prop]);
    }
}