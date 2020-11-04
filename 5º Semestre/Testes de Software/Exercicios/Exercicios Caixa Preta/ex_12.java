package semana_02;

import static org.junit.jupiter.api.Assertions.*;
import static org.mockito.Mockito.*;

import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;


class ex_12 {

	public Calculadora calc;
	
	@BeforeEach
	public void carregaMock() {
		CustoDAO custoMock = mock(CustoDAO.class);
		calc = new Calculadora(custoMock);
	}
    
    @Test
    public void testaRegiaoValida() throws Exception{
        
        assertEquals(0,calc.calcularFrete("Norte", 100));
    }
//((Centro Oeste, 100), Exception)
    @Test
    public void testaRegiaoInvalida() throws Exception{
                      
       assertThrows(Exception.class, () -> calc.calcularFrete("Centro-Oeste", 100));
    }
    
//((Norte, -100), Exception)
    @Test
    public void testaPesoInvalidoMenor() throws Exception {
      	
    	assertThrows(Exception.class, () -> calc.calcularFrete("Norte", -100));
    }
//((Norte, 3000000), Exception)
    @Test
    public void testaPesoInvalidoMaior() throws Exception {
    	
    	assertThrows(Exception.class, () -> calc.calcularFrete("Norte", 3000000));
    	
    }
//((Centro Oeste, 100), -10)
    @Test
    public void testaValorFreteRegiaoInvalida() throws Exception {
    	
    	assertEquals(-10, calc.calcularFrete("Centro-Oeste", 100));
    }

}
