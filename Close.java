public class Close {
    public static void main(String[] args) {
        try {
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
        } catch (IOException ex) {
            ex.printStackTrace();
        }
    }
}
