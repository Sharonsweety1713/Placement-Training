import java.util.*;
class Main{
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        int c=sc.nextInt();
        
        double delta=Math.sqrt(Math.pow(b,2)-4*a*c);
        if(delta<=0)
        System.out.print("No real roots");
        else{
        System.out.println("Real roots exist");
        double x=(-b+delta)/(2*a);
        double y=(-b-delta)/(2*a);
        System.out.print(x+" "+y);
            
        }
    }
}
