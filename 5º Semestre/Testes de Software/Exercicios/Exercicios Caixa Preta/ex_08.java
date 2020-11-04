package semana_02;

import static org.junit.jupiter.api.Assertions.*;
import static org.mockito.Mockito.*;

import java.util.ArrayList;

import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

class ex_08 {
	
	public VerificadorDeSenhas ver;
	public Dicionario dicionarioMock;
	
	@BeforeEach
	void carregar() {
		dicionarioMock = mock(Dicionario.class);
		ArrayList<String> dicStr = new ArrayList<String>();
		
		dicStr.add("admin");
		dicStr.add("senha");
		
		when(dicionarioMock.getListaDeSenhasInvalidas())
			.thenReturn(dicStr);
		
		ver = new VerificadorDeSenhas(dicionarioMock);
	}

	//("olaola", true)
	@Test
	void testSenhaValida() {
		assertTrue(ver.validarNovaSenha("olaola"));
	}
	
	//("abcd", false)
	@Test
	void testSenhaMenorQue5Caracteres() {
		assertFalse(ver.validarNovaSenha("abcd"));
	}

	//("12345678910", false)
	@Test
	void testSenhaMaiorQue10Caracteres() {
		assertFalse(ver.validarNovaSenha("12345678910"));
	}

	//("?abcde", false)
	@Test
	void testSenhaCom1CaracterInvalido() {
		assertFalse(ver.validarNovaSenha("?abcde"));
	}

	//("aa&&v", false)
	@Test
	void testSenhaComCaracteresInvalidos() {
		assertFalse(ver.validarNovaSenha("aa&&v"));
	}

	//("admin", false)
	@Test
	void testSenhaNoDicionario() {
		assertFalse(ver.validarNovaSenha("admin"));
	}

}
