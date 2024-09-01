let nombres = ['Carlos', 'Julian', 'Martina', 'Ezequiel', 'Iska', 'Lugh'];
let edades = ['22', '17', '17', '24', '17', '50'];
let max = -1;
let i_max = -1;

for (let i=0; i < edades.length; i++){
    if(edades[i] > max){
        max = edades[i];
        i_max = i;
    }
}

let p= document.createElement('p');
p.textContent = `La persona mas vieja es ${nombres[i_max]} con ${edades[i_max]} años de edad`;
document.body.append(p);