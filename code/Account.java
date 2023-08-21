public class Account {
    private int balance;

    public Account(int initialBalance) {
        balance = initialBalance;
    }

    public void deposit(int amount) {
        balance += amount;
    }

    public void info() {
        int id = System.identityHashCode(this);
        System.out.println(id + " " + balance);
    }

    public static void main(String[] args) {
        Account a = new Account(42);
        Account b = a;

        a.deposit(55);

        a.info();
        b.info();
    }
}
