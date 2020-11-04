package semana_04;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;

class ex_10 {

	@Test
	// Caminho: 1, 2, 4, 5, 6, 4, 7, 9
	void test() throws Exception {
		Calculadora calc = new Calculadora();
		
		assertEquals(1, calc.somatoriaLimitada(0, 1));
	}
	
	@Test
	// Caminho: 1, 2, 3, 4, 5, 6, 4, 5, 6, 4, 7, 9
	void test2() throws Exception {
		Calculadora calc = new Calculadora();
		
		assertThrows(Exception.class, () -> calc.somatoriaLimitada(-1,  1));
	}
	
	@Test
	//Caminho: 1, 2, 4, 5, 6, 4, 5, 6, 4, 7, 8
	void teste3() throws Exception {
		Calculadora calc = new Calculadora();
		
		assertThrows(Exception.class,() -> calc.somatoriaLimitada(1, 0));
	}
	
	@Test
	// Caminho 1, 2, 4, 5, 7, 8
	void teste4()throws Exception {
		Calculadora calc = new Calculadora();
		
		assertThrows(Exception.class, () -> calc.somatoriaLimitada(0, -1));
	}

}
