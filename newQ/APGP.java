public class APGP {

 public static void main(String[] args)
 {
  // TODO Auto-generated method stub
  int a[] = {2,4,8,16,32};
  //int n = a.size();
  
  if(a[0]+a[1]==a[2] && a[1]+a[2]==a[3])
  {
   System.out.println(a[4]+a[3]);
   
  }
  else if (a[1]-a[0]==a[2]-a[1])
  {
   System.out.println(a[4]+(a[2]-a[1]));
  }
  else if(a[1]/a[0]==a[2]/a[1])
  {
   System.out.println(a[4]*(a[2]/a[1]));
  }
  else 
  {
   System.out.println("-999");
  }

 }

}