class Car:
    def __init__(self, make, model, year):
        self.make = make
        self.model = model
        self.year = year

    def displayInfo(self):
        print(f"{self.year} {self.make} {self.model}")

car1 = Car("Toyota", "Prius", 2007)
car1.displayInfo()