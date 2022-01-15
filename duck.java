package OOP;

class Duck {
    String name;
    int age;

    static void sound() {
        System.out.println("Quak quak");
    }

    public static void main(String[] args) {
        Duck.sound();
    }
}