package pce.ex08;

import static org.junit.jupiter.api.Assertions.*;
import static org.mockito.Mockito.*;

import java.util.ArrayList;

import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

class VerificadorDeSenhasTest {

	VerificadorDeSenhas ver;
	
	@BeforeEach
	void before() {
		// Dic = {“senha”, “admin”}
		Dicionario dicionarioMock = mock(Dicionario.class);
		ArrayList<String> dicStr = new ArrayList<String>();
		dicStr.add("senha");
		dicStr.add("admin");
		when(dicionarioMock.getListaDeSenhasInvalidas())
			.thenReturn(dicStr);
		
		ver = new VerificadorDeSenhas(dicionarioMock);
	}
	
	@Test
	void testSenhaValida() {
		assertTrue(ver.validarNovaSenha("olaola"));
	}
	
	@Test
	void testSenhaMenorQue5Caracteres() {
		assertFalse(ver.validarNovaSenha("abcd"));
	}
	
	@Test
	void testSenhaMaiorQue10Caracteres() {
		assertFalse(ver.validarNovaSenha("12345678910"));
	}
		
	@Test
	void testSenhaCom1CaracterInvalido() {
		assertFalse(ver.validarNovaSenha("?abcde"));
	}
	
	@Test
	void testSenhaComCaracteresInvalidos() {
		assertFalse(ver.validarNovaSenha("aa&&v"));
	}
	
	@Test
	void testSenhaQueEstaNoDicionario() {
		assertFalse(ver.validarNovaSenha("admin"));
	}
}
