public class Variables {
    public static void main(String[] arg){
        //type varName = value;
        String Firstname = "Pranav";
        String Lastname = "Ponvinayagan";

        //use + for adding strings
        String name = Firstname + Lastname;
        System.out.println("My name is: " + name);

        //use + for num: adds numbers as numbers
        int x = 5;
        int y = 5;
        System.out.println(x+y); 

        //+ for different data types
        String hi = "hi";
        System.out.println(hi + x);

        //assigning value after
        int age;
        age = 15;
        System.out.println("My age is: " + age);

        //changing value after
        int randomNumber = 1;
        randomNumber = 3;
        System.out.println(randomNumber);

        //making variables immutable with final: like const
        final int myNum = 21; // u can't change the value of this
        System.out.println(myNum);

        //multiple var declaration:
        int a = 5, b = 6;
        String aString = "a", bString = "b";
        System.out.println(a+b+aString+bString);

        //one val to multiple var
        int d, e, f; 
        d = e = f = 5;
        System.out.println(d + e + f);

    }
}
