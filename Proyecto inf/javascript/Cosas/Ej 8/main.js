   let color= ['red','blue','yellow','green','purple','pink','grey','black','brown', 'violet'];

   function numRandom(){
    return Math.floor(Math.random() * 450 + 1);
   }

   function colorRandom(){
    return color[Math.floor(Math.random() * color.length)];
   }

   function rightOrleft(){
    return Math.floor(Math.random() * 2 + 1);
   }
   
   colores = [];
  function bubble(){
      let circulo = document.createElement('div');
      circulo.style.borderRadius = `50%`;
      circulo.style.border = '3px solid black';
      circulo.style.width = '100px';
      circulo.style.height = '100px';
      circulo.style.flexShrink = '0';
      circulo.style.margin = '50px';
      circulo.style.backgroundColor = `${colorRandom()}`;
      colores.push(colorRandom())
      if(colores.length == 20){
        colores = [];
      }
      console.log(colores);
      circulo.style.position = 'absolute';
      circulo.style.top = `${numRandom()}px`;
      if(rightOrleft() == 1) circulo.style.left = `${numRandom()}px`;
      else if(rightOrleft() == 2) circulo.style.right = `${numRandom()}px`;      
      document.body.append(circulo);
      setTimeout(() => circulo.remove(), 1000);
    }
    setInterval(bubble, 1000);

   bubble()
