package Objects_Practice;

public class Car {
    private String make;
    private String model;
    private int year;

    public Car(String make, String model, int year) {
        this.make = make;
        this.model = model;
        this.year = year;
    }

    public void displayInfo() {
        System.out.println(year + " " + make + " " + model);
    }

    public static void main(String[] args) {
        Car car1 = new Car("Hyundai", "Elantra", 2013);
        car1.displayInfo();
    }
}
