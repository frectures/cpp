public class Pass {
    public static void swap(String a, String b) {
        String c = a;
        a = b;
        b = c;
        System.out.println(a + " " + b);
    }

    public static void main(String[] args) {
        String s = "world";
        String t = "hello";
        swap(s, t);
        System.out.println(s + " " + t);
    }
}
