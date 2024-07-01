function handleSubmit(event){
    event.preventDefault();
    let color1 = event.target.color1.value;
    let color2 = event.target.color2.value;
    let multiplicador = event.target.multiplicador.value;
    let p = document.createElement('p');
    p.textContent = `La resistencia es ${calcularResistencia(color1, color2, multiplicador) }Ω `;
    document.body.append(p);
}

function calcularResistencia(color1, color2, multiplicador) {
    const colores = ['negro', 'marron', 'rojo', 'naranja', 'amarillo', 'verde', 'azul', 'violeta', 'gris', 'blanco'];
    const valor1 = colores.indexOf(color1);
    const valor2 = colores.indexOf(color2);
    const multiplicadorValor = colores.indexOf(multiplicador);
  
    return (valor1 * 10 + valor2) * (10 ** multiplicadorValor);
  }