public class CameltoSnake {
  public static void main(String args[]) {
    String regex = "([a-z])([A-Z]+)";
    String replacement = "$1_$2";
    System.out.println("RanukaHarshanaDeSilva"
        .replaceAll(regex, replacement));
  }
}