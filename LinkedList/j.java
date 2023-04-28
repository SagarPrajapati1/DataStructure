import java.io.*;
import java.net.*;
class Address{
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(InputStreamReader(System.in));
		System.out.println("Enter website Name : ");
		String site = br readline();
		try{
			InetAddress ip = InetAddress.getByNamesite(site);
			System.out.println("The IP Address" +ip);
		}
		catch(UnknownHostExceptionne){
			System.out.println("Website not found");
		}
	}
}
