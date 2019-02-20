package p1;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.ArrayList;
import java.util.Scanner;

public class a1 {
	static int i=18;

	public static void main(String[] args) throws Exception {
	
		//putbalance("ac11",500);
		//int a = getbalance("ac11").get(0);
		//System.out.println(a);
		//getdetails("ac11");
        //loandetails("l11");
		int deposit1,deposit2,deposit4,with1,with2,with4;
		String deposit3,with3,get1,get2;
		String name,street,gender;
		int mob;
		while(true) {
			System.out.println("Enter your choice\n1.create account\n2.deposit\n3.withdraw\n4.customer details\n5.loan details\n6.exit\n");
			Scanner sc=new Scanner(System.in);
			int choice;
			choice=sc.nextInt();
		
			switch(choice) {
				case 1:{
					System.out.println("enter name : ");
					name=sc.next();
					System.out.println("enter street : ");
					street=sc.next();
					System.out.println("enter gender(M/F) : ");
					gender=sc.next();
					System.out.println("enter mobile number : ");
					mob=sc.nextInt();
					createaccount(name,street,gender,mob);
					
				}break;
				case 2:{
					System.out.println("enter account number : ");
					deposit3=sc.next();
					System.out.println("enter amount to deposit : ");
					deposit1=sc.nextInt();
					deposit2=getbalance(deposit3).get(0);
					deposit4=deposit2+deposit1;
					putbalance(deposit3,deposit4);	
					System.out.println("deposit Completed.\n");
				}break;
				case 3:{
					System.out.println("enter account number : ");
					with3=sc.next();
					System.out.println("enter amount to withdraw : ");
					with1=sc.nextInt();
					with2=getbalance(with3).get(0);
					if(with2>=with1) {
					with4=with2-with1;
					putbalance(with3,with4);
					System.out.println("withdraw Completed.\n");}
					else {System.out.println("\nInsufficient balance\n");}
					
				}break;
				case 4:{
					System.out.println("enter account number : ");
					get1=sc.next();				
					getdetails(get1);
				}break;
				case 5:{
					System.out.println("enter loan number : ");
					get2=sc.next();				
					loandetails(get2);
				}break;
				default:System.exit(0);break;
			}
		
	    }
    }
	 public static void putbalance(String accno,int newbal) throws Exception{
	        
	        try{
	            Connection con = getconnection();
	            PreparedStatement updatebalance = con.prepareStatement("update account set balance ="+newbal+" where account_number = '"+accno+"'; ");
	           
	            updatebalance.executeUpdate();
	        } catch(Exception e){System.out.println(e);}
	        finally {
	            //System.out.println("deposit Completed.\n");
	        }
	    }
	 public static int accountnumber() {
		 i++;
		return i;
		 
	 }
	 public static void createaccount(String name,String street,String gender,int mob) throws Exception{
	        
	        try{
	            Connection con = getconnection();
	            String h=Integer.toString(accountnumber());
	            h="ac"+h;
	            PreparedStatement insertaccount = con.prepareStatement("insert into account(account_number,branch_name,balance) values('"+h+"','anekal','100'");
	            PreparedStatement insertcustomer = con.prepareStatement("insert into customer(customer_name,customer_street,customer_city,sex,accno,mobileno) values('"+name+"','"+street+"','bangalore','"+gender+"','"+h+"','"+mob+"'");
	           
	            insertaccount.executeUpdate();
	            insertcustomer.executeUpdate();
	        } catch(Exception e){System.out.println(e);}
	        finally {
	            System.out.println(" account created.");
	        }
	    }
	 public static ArrayList<Integer> getbalance(String accno1) {
		 try{
	            Connection con = getconnection();
	            PreparedStatement statement = con.prepareStatement("SELECT balance FROM account where account_number = '"+accno1+"'");
	           
	            ResultSet result = statement.executeQuery();
	            ArrayList<Integer> array = new ArrayList<Integer>();
	            while(result.next()){             
	                array.add(result.getInt("balance"));
	            }
	            return array;
	           
	        }catch(Exception e){System.out.println(e);}
	        return null;	 
	 }
	 public static void getdetails(String accno1) {
		 try{
	            Connection con = getconnection();
	            PreparedStatement statement = con.prepareStatement("SELECT * FROM customer where acc_no = '"+accno1+"'");
	           
	            ResultSet result = statement.executeQuery();
	            while(result.next()){             
	                System.out.println("name : "+result.getString("customer_name"));
	                System.out.println("street : "+result.getString("customer_street"));
	                System.out.println("city : "+result.getString("customer_city"));
	                System.out.println("gender : "+result.getString("sex"));
	                System.out.println("account number : "+result.getString("acc_no"));
	                System.out.println("mobile number : "+result.getString("mobileno"));
	            }   
	        }catch(Exception e){System.out.println(e);}
	 }
	 
	 public static void loandetails(String accno1) {
		 try{
	            Connection con = getconnection();
	            PreparedStatement statement = con.prepareStatement("SELECT * FROM loan where loan_number = '"+accno1+"';");
	           
	            ResultSet result = statement.executeQuery();
	            while(result.next()){             
	                System.out.println("loan number : "+result.getString("loan_number"));
	                System.out.println("branch name : "+result.getString("branch_name"));
	                System.out.println("amount : "+result.getString("amount"));
	                System.out.println("customer name : "+result.getString("customer_customer_name"));
	             
	            }   
	        }catch(Exception e){System.out.println(e);}
	 }
	 
	public static Connection getconnection() throws Exception{
		try {
			String driver="com.mysql.jdbc.Driver";
			String url="jdbc:mysql://localhost/bank";
			String user="root";
			String pass="jaydev@1";
			Class.forName(driver);
			
			Connection conn= DriverManager.getConnection(url,user,pass);
			//System.out.println("connected");
			return conn;
		}catch(Exception e) {System.out.println(e);}
		return null;
	}

}
