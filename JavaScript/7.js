// Object.create()

const occupation = {
    type : "none",
    displayType :  function(){
        console.log(this.type);
    }
}

//police

let police = Object.create(occupation);
police.type = "Moniter";

police.displayType();

//Dev

let dev = Object.create(occupation);
dev.type = "coding";

dev.displayType();