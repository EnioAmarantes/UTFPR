import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class EntDados {
  public static void main(String arg[]) {
    InputStreamReader c = new InputStreamReader(System.in);
    BufferedReader cd = new BufferedReader(c);
    String s = "";
    String t = "";
    System.out.println("Entre com o 1º valor:");
    try {
      s = cd.readLine();
    }
    catch(IOException e) {
      System.out.println("Erro de entrada");
    }
    System.out.println("Entre com o 2º Valor:");
    try {
      t = cd.readLine();
    }
    catch(IOException e) {
      System.out.println("Erro e entrada");
    }
    System.out.println("A soma dos dois valores eh:\t"+(s+t));
  }
}
