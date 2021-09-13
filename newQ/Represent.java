import java.util.*;
class Represent{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
          int n=sc.nextInt();
          int arr[]=new int[n];
          for(int i=0;i<n;i++)
            arr[i]=sc.nextInt();
            int t=sc.nextInt();
            Arrays.sort(arr);
            if(t==1)
             System.out.println(arr[n-1]);
             else{
             int min=arr[1]-arr[0];
             ArrayList<Integer> al=new ArrayList<>();
             for(int i=1;i<n-1;i++)
             {
                 int dif=arr[i+1]-arr[i];
                 if(dif<min){
                     min=dif;
                     al.add(arr[i]);
                     al.add(arr[i+1]);
                 }
             }
             int k=al.size();
             System.out.println(al.get(k-2)+" "+al.get(k-1));
            }
    }
}