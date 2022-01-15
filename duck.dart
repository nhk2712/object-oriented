class Duck {
  String name="vitcon";
  int age=2;

  static void sound(){
    print("Quak quak");
  }
}

class VitCo extends Duck{
  @override
  static void sound(){
    print("He he");
  }
}

void main(){
  VitCo.sound();
}