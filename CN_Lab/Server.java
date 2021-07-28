import java.io.*;
import java.net.*;

public class Server
{
    public static void main(String args[])
    {
        String msgIn;
        String msgOut;
        
        try {
            ServerSocket s = new ServerSocket(6789);
            while(true)
            {
                Socket cs = s.accept();
                
                InputStreamReader inStr =  
                    new InputStreamReader(cs.getInputStream());
                
                BufferedReader inNet = new BufferedReader(inStr);
                
                DataOutputStream outNet = 
                    new DataOutputStream(cs.getOutputStream());
                
                msgIn = inNet.readLine();
                msgOut = msgIn.toLowerCase() + "\n";
                outNet.writeBytes(msgOut);
            }
        }
        catch(IOException e) {
            System.out.println(e.getMessage());
        }
    }
}