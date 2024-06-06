class Car {
    constructor(make, model, year) {
        this.make = make;
        this.model = model;
        this.year = year;
    }

    displayInfo(){
        console.log(`${this.year} ${this.make} ${this.model}`)
    }
}

car1 = new Car("Toyota", "Prius", 2007);
car1.displayInfo();