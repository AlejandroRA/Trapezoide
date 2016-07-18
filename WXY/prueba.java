import java.util.*;

class Main
{

	public static void main(String args[])
	{
		String dato;
		String aux = "";
		Scanner sc = new Scanner(System.in);
		dato = sc.nextLine();
        dato = dato.substring(0,dato.indexOf(".")+4);
        for(int i = dato.length() ; i < 7;i++)
        	aux +=" ";
        aux += dato;
        System.out.println(aux + " "+aux.length());

        


	}
}