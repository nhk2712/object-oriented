package OOP;

class Animal {
    public static String name;
    public static int age;
    public static String food;
    public static String sound;

    public Animal(String name2, int age2, String food2, String sound2) {
        eat();
        name2 = "Lu";
        age2 = 7;
        food2 = "shit";
        sound2 = "gauw";
    }

    public void eat() {
        System.out.println("eating...");
    }

    public void playSound() {

    }

    public static void main(String[] args) {
        System.out.println(Animal.name);
    }
}