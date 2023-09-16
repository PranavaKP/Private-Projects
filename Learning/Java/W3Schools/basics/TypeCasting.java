public class TypeCasting {
    public static void main(String[] args) {
        //casting(widening vs narrowing): only for primitive data types
    
        //widening(automatic): convert smaller to larger
            //byte -> short -> char -> int -> long -> float -> double
            int Int = 9;
            double Double = Int;
            System.out.println(Int);
            System.out.println(Double);

        //narrowing(manual) : conver larger to smaller
            //double -> float -> long -> int -> char -> short -> byte
            double double2 = 9.9999d;
            int Int2 = (int) double2; //smaller data type in ()
            System.out.println(Int2);
            System.out.println(double2);

    }       
}
