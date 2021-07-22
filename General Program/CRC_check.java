import java.util.*;
class CRC_check{
	public static void main(String snr[]){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the transmitted data : ");
		String data = sc.next();
        System.out.println("Enter the divisor : ");
        String divisor = sc.next();
        int n=data.length();
        int m=divisor.length();
        int data_array[] = new int[n];
        int divisor_array[]=new int[m];
        for(int i=0;i<data.length();i++){
        data_array[i] = Integer.parseInt(""+data.charAt(i));
        }
        for(int j=0;j<divisor.length();j++){
        divisor_array[j] = Integer.parseInt(""+divisor.charAt(j));
        }
        receive(data_array, divisor_array);
	}

	public static int[] divide(int old_data[], int divisor[]){
		int remainder[] , i;
		int data[] = new int[old_data.length + divisor.length];
		System.arraycopy(old_data, 0, data, 0, old_data.length);
		remainder = new int[divisor.length];
		System.arraycopy(data, 0, remainder, 0, divisor.length);
		for(i=0 ; i < old_data.length ; i++){
			if(remainder[0] == 1){
				for(int j=1 ; j < divisor.length ; j++) {
					remainder[j-1] = exor(remainder[j], divisor[j]);
				}
			}
			else{
				for(int j=1 ; j < divisor.length ; j++){
					remainder[j-1] = exor(remainder[j], 0);
				}
			}
			remainder[divisor.length-1] = data[i+divisor.length];
		}
		return remainder;
	}
	
	public static int exor(int a, int b){
		if(a == b){
            return 0;
        }
		return 1;
	}

	public static void receive(int data_array[], int divisor_array[]){
		int remainder[] = divide(data_array, divisor_array);
		for(int i=0 ; i < remainder.length ; i++){
			if(remainder[i] != 0){
				System.out.println("There is an error in received data.");
				return;
			}
		}
		System.out.println("Data was received without any error.");
	}
}

