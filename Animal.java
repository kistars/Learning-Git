public class Animal{
    private String name;
    private int age;

    public Animal(String name, int age) {
        this.name = name;
        this.age = age;
    }
    
    public String getName() {
        return this.name;
    }
    public int getName() {
        return this.age;
    } 

    public void say() {
        System.out.println("My name is " + this.name);
    }
}

