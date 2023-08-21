import java.io.*;

public class Close {
    private static void backup() throws IOException {
        BufferedReader in = new BufferedReader(new FileReader("readme.txt"));
        BufferedWriter out = new BufferedWriter(new FileWriter("backup.txt"));

        String line;
        while ((line = in.readLine()) != null) {
            out.write(line);
            out.newLine();
            System.out.print('.');
        }
        System.out.println("done!");

        // Do you see the problem?
        out.close();
        in.close();
    }

    public static void main(String[] args) {
        try {
            backup();
        } catch (IOException ex) {
            ex.printStackTrace();
        }
    }
}
