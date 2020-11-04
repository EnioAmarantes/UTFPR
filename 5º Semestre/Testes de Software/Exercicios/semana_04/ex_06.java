package semana_04;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;

class ex_06 {
	
	public Calculadora2 calc = new Calculadora2();;
	public int[] vet = {2,4};

	@Test
	//Caminho 1,2,4
	void testaInicioMenorZero() {
		
		assertEquals(-1, calc.calcularMedia(vet, -1, 0));
	}

	@Test
	//Caminho 1,2,3,4
	void testaFimMenorZero() {
		
		assertEquals(-1, calc.calcularMedia(vet, 1, -1));
	}
	
	@Test
	//Caminho 1,2,3,5,6
	void testaInicioMaiorFim() {
		
		assertEquals(-1, calc.calcularMedia(vet, 1, 0));
	}
	
	@Test
	//Caminho 1,2,3,5,6
	void testaInicioIgualFim() {

		assertEquals(-1, calc.calcularMedia(vet, 0, 0));
	}
	
	@Test
	//Caminho 1,2,3,5,7,8,13
	void testaVetorVazio() {
		int[] vet2 = {};
		assertThrows(ArithmeticException.class, () -> calc.calcularMedia(vet2, 1, 3));
	}
	
	@Test
	//Caminho 1,2,3,5,7,8,9,12,8,9,12,8,13
	void testaVetorMenorInicio() {
		assertThrows(ArithmeticException.class, () -> calc.calcularMedia(vet, 5, 6));
	}
	
	@Test
	//Caminho 1,2,3,5,7,8,9,10,12,8,9,10,12,13
	void testaVetorMaiorFim() {
		assertThrows(ArithmeticException.class, () -> calc.calcularMedia(vet, 0, 1));
	}
	
	
	@Test
	//Caminho 1,2,3,5,7,8,9,10,11,12,8,9,10,11,12,8,13
	void testaSucesso() {
		assertEquals(3, calc.calcularMedia(vet, 2, 4));
	}
	
}
