    fetch('https://jsonplaceholder.typicode.com/albums/1/photos')
    .then(res => res.json())
    .then(data => {
        console.log(Object.keys(data[0]));
        let container = document.querySelector('#container');
        for (let c of data){
            let div = document.createElement('div');
            div.classList.add('card');
            let h3 = document.createElement('h3');
            h3.textContent = c.title;
            let img = document.createElement('img');
            img.src = c.url;
            div.append(img);
            div.append(h3);
            container.append(div);
        }
    });

