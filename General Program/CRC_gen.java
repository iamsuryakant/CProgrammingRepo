import java.util.*;
class CRC_gen{ 
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int i,j,flag=0;
        System.out.print("Enter the dividend: ");
        String dividend = sc.next();
        System.out.print("Enter the divisor: ");
        String divisor = sc.next();
        int dividend_length = dividend.length();
        int divisor_length = divisor.length();
        int dividend_array[] = new int[dividend_length + divisor_length - 1];
        int send_arr[] = new int[dividend_length + divisor_length - 1];
        int divisor_array[] = new int[divisor_length];
        for(i=0;i<dividend_length;i++){
            dividend_array[i] = Integer.parseInt(""+dividend.charAt(i));
            send_arr[i] = dividend_array[i];
        }
        for(i=dividend_length;i<dividend_array.length;i++){
            dividend_array[i] = 0;
        }
        for(i=0;i<divisor_length;i++){
            divisor_array[i] = Integer.parseInt(""+divisor.charAt(i));
        }
        int temp[] = new int[divisor_length];
        for(i=0;i<dividend_array.length;i++){
            if(dividend_array[i] == 1){
                for(j=0;j<divisor_length;j++){
                    if(i+j>dividend_array.length-1){
                            flag=1;
                            break;
                    }
                    else{
                            temp[j] = dividend_array[i+j];
                    }
                }
                if(flag==0){
                    for(j=0;j<divisor_length;j++){
                        if(temp[j] == divisor_array[j]){
                                dividend_array[i+j] = 0;
                        }
                        else{
                                dividend_array[i+j] = 1;
                        }
                    }
                }
            }
        }
        for(i=dividend_length;i<dividend_array.length;i++){
            send_arr[i] = dividend_array[i];
        }
        System.out.print("\nMessage to be transmitted is: ");
        for(i=0;i<send_arr.length;i++){
                System.out.print(send_arr[i]);
        }
        System.out.println();
    }
}
