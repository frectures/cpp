public record Mensch(String vorname, String nachname) {

    public static void main(String[] args) {
        Mensch menschen[] = {
            new Mensch("Bjarne", "Stroustrup"),
            new Mensch("James" , "Gosling"   ),
        };
    }
}
/*

/------------\    /-------------\
| value    °-|--> | B j a r n e |
| coder      |    \-------------/
| hash       |
| hashIsZero |
\------------/
       ^
       | 
/------|-\
| fore ° |
| sure ° |
\--------/
    ^
    |
/---|-\
| 0 ° |    /---\
| 1 ° | <--|-° | menschen
\-----/    \---/

*/
