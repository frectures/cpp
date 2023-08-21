import java.io.*;

public class With {
    private static void backup() throws IOException {
        try (BufferedReader in = new BufferedReader(new FileReader("readme.txt"));
            BufferedWriter out = new BufferedWriter(new FileWriter("backup.txt"))) {

            String line;
            while ((line = in.readLine()) != null) {
                out.write(line);
                out.newLine();
                System.out.print('.');
            }
            System.out.println("done!");

            // Files are closed automatically
        }
    }

    public static void main(String[] args) {
        try {
            backup();
        } catch (IOException ex) {
            ex.printStackTrace();
        }
    }
}
