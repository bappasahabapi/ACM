class Box{

    constructor(color) {
        this.color =color;
    }

    getColor(){
        return this.color;
    }
    setColor(color){
        this.color =color
    }
}

let b1 =new Box('green');
let b2 =new Box('red');

console.log(b1.color)
console.log(b2.color)
