package semana_02;

import static org.junit.jupiter.api.Assertions.*;
import static org.mockito.Mockito.*;

import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

class ex_10 {
	private BancoDeDados bd;
	private VerificadorDeCodigos verMock;
	
	@BeforeEach
	void carrega() {
		verMock = mock(VerificadorDeCodigos.class);
		bd = new BancoDeDados(verMock);
	}
	
	//("IF55S", "ES66", 27, "sucesso")
	@Test
	void testaCadastroValido() {
		when(verMock.verificarCodigoDisciplina("IF55S"))
			.thenReturn(true);
		when(verMock.verificarCodigoTurma("ES66"))
		.thenReturn(true);

		assertEquals("sucesso", bd.cadastrarTurma("IF55S", "ES66", 27));
	}


	//("IF5$$", "ES66", 27, "codigo de disciplina invalido")
	@Test
	void testaDisciplinaInvalida() {
		when(verMock.verificarCodigoDisciplina("IF5$$"))
			.thenReturn(false);
		when(verMock.verificarCodigoTurma("ES66"))
			.thenReturn(true);

		assertEquals("codigo de disciplina invalido", bd.cadastrarTurma("IF5$$", "ES66", 27));
	}

	//("IF55S", "4555", 27, "codigo de turma invalido")
	@Test
	void testaTurmaInvalida() {
		when(verMock.verificarCodigoDisciplina("IF55S"))
			.thenReturn(true);
		when(verMock.verificarCodigoTurma("4555"))
			.thenReturn(false);
		
		assertEquals("codigo de turma invalido", bd.cadastrarTurma("IF55S", "4555", 27));
	}

	//("IF55S", "ES66", 2, "numero de alunos invalido")
	@Test
	void testaAlunosMenor() {

		assertEquals("numero de alunos invalido", bd.cadastrarTurma("IF55S", "ES66", 2));
	}

	//("IF55S", "ES66", 56, "numero de alunos invalido")
	@Test
	void testaAlunosMaior() {

		assertEquals("numero de alunos invalido", bd.cadastrarTurma("IF55S", "ES66", 56));
	}


}
