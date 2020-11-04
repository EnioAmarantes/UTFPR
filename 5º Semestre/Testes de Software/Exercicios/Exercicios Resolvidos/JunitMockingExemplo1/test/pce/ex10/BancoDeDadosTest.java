package pce.ex10;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import static org.mockito.Mockito.*;

class BancoDeDadosTest {

	@Test
	void testSucesso() {
		VerificadorDeCodigos verificadorMock = mock(VerificadorDeCodigos.class);
		when(verificadorMock.verificarCodigoDisciplina("IF55S"))
			.thenReturn(true);
		when(verificadorMock.verificarCodigoTurma("ES66"))
			.thenReturn(true);
		
		BancoDeDados bd = new BancoDeDados(verificadorMock);
		String res = bd.cadastrarTurma("IF55S", "ES66", 27);
		assertEquals("sucesso", res);
	}

	
	@Test
	void testCodigoDisciplinaInvalido() {
		VerificadorDeCodigos verificadorMock = mock(VerificadorDeCodigos.class);
		when(verificadorMock.verificarCodigoDisciplina("IF6$$"))
			.thenReturn(false);
		when(verificadorMock.verificarCodigoTurma("ES66"))
			.thenReturn(true);
		
		BancoDeDados bd = new BancoDeDados(verificadorMock);
		String res = bd.cadastrarTurma("IF6$$", "ES66", 27);
		assertEquals("codigo de disciplina invalido", res);
	}
	
	//	(“IF55S”, “4555”, 27; “codigo de turma invalido”)
//	(“IF55S”, “ES66”, 2; “numero de alunos invalido”)
//	(“IF55S”, “ES66”, 56; “numero de alunos invalido”)

	
}
