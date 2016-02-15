public class p003 {
    public static void main(String[] args) {
        long num=600851475143L;
        while(num%2==0)num/=2;
        for(int i=3;i<Math.sqrt(num);i+=2){
            while(num%i==0)num/=i;
        }
        System.out.print(num);
    }
}
