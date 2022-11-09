import java.util.Scanner;

public class MetodosMain {

	public static void main(String[] args) {
		
		Scanner ler = new Scanner(System.in);
		int op;
		
		do {
			System.out.println("***********************\n**** Program Pizza Delivery ****\n***********************");
			System.out.println("[ 1 ] - Pedir uma pizza.");
			System.out.println("[ 2 ] - Cancelar meu pedido.");
			System.out.println("[ 3 ] - Reclame aqui!");
			System.out.println("[ 4 ] - Sair.");
					
			System.out.println("> ");
			op = ler.nextInt();
		
			switch(op) {
				
				case 1:
					pedirPizza();
					break;
				
				case 2:
					cancelarPedido();
					break;
			
				case 3:
					reclame();
					break;
			
				case 4:
					System.out.println("Saindo do programa...");
					break;
				
				default:
					System.out.println("Input invalido tente de novo.");
					break;
			}
					
		} while(op == 4); 
		
		ler.close();
		
	}
	
	public static void pedirPizza() {
		System.out.println("oi");
	}
	
	public static void cancelarPedido() {
		System.out.println("oi");
	}
	
	public static void reclame() {
		System.out.println("oi");
	}

}
