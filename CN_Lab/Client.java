package CN_Lab;

import java.io.*;
import java.net.*;

public class Client  
{
    public static void main(String[] args)
    {
        String  message = null;

        try {
            BufferedReader k = 
                new BufferedReader(new InputStreamReader(System.in));
            
            Socket cs = new Socket("localhost", 6789);

            DataOutputStream outNet = 
                new DataOutputStream(cs.getOutputStream());
            
            BufferedReader inNet = 
                new BufferedReader(new InputStreamReader(cs.getInputStream()));
            
            message = k.readLine();
            outNet.writeBytes(message + "\n");
            
            message = inNet.readLine();
            cs.close();
            
            System.out.println("Server sent: " + message);
        }
        catch(IOException e) {
            System.out.println(e.getMessage());
        }
    }
}