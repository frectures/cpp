import java.io.*;

public class With {
    public static void main(String[] args) {
        try (BufferedReader in = new BufferedReader(new FileReader("readme.txt"));
            BufferedWriter out = new BufferedWriter(new FileWriter("backup.txt"))) {

            String line;
            while ((line = in.readLine()) != null) {
                out.write(line);
                out.newLine();
                System.out.print('.');
            }
            System.out.println("done!");

            // Readers are closed automatically
        } catch (IOException ex) {
            ex.printStackTrace();
        }
    }
}
