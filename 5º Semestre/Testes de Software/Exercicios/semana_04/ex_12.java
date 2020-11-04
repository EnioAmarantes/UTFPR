package semana_04;

import static org.junit.jupiter.api.Assertions.*;
import static org.mockito.Mockito.*;

import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

class ex_12 {
	public UsuarioDAO usuarioDAOMock;
	public SenhaValidator senhaValidatorMock;
	public UsuarioValidator usuarioValido;
	public Usuario usuario;
	
	@BeforeEach
	void carrega() {
		usuarioDAOMock = mock(UsuarioDAO.class);
		senhaValidatorMock = mock(SenhaValidator.class);
		
		usuarioValido = new UsuarioValidator(usuarioDAOMock);
		usuarioValido.setSenhaValidator(senhaValidatorMock);
		
	}

	@Test
	void nomeMenor3Char() {
		usuario = new Usuario("ab", "senha", "senha");
		
		assertThrows(Exception.class, () -> usuarioValido.ehUsuarioValido(usuario));
	}
	
	@Test
	void testaSenhasDiferentes() {
		usuario = new Usuario("admin", "senha", "paçoca");
		
		assertThrows(Exception.class, () -> usuarioValido.ehUsuarioValido(usuario));
	}
	
	@Test
	void testeUsuarioExiste() {
		when(usuarioDAOMock.existe("admin"))
			.thenReturn(true);
		
		usuario = new Usuario("admin", "senha", "senha");
		
		assertThrows(Exception.class, () -> usuarioValido.ehUsuarioValido(usuario));
	}


	
	@Test
	void testaSenhaInvalida() {
		when(senhaValidatorMock.verificar("senha"))
			.thenReturn(true);
		
		usuario = new Usuario("admin", "senha", "senha");
		
		assertThrows(Exception.class, () -> usuarioValido.ehUsuarioValido(usuario));
	}
	
	@Test
	void testaUsuarioValido() throws Exception {
		
		usuario = new Usuario("admin123", "senha", "senha");
		
		assertTrue(usuarioValido.ehUsuarioValido(usuario));
		
	}
	
	@Test
	void testaUsuarioNaoValido() throws Exception {
		usuario = new Usuario("##admin123##", "senha", "senha");
		
		assertFalse(usuarioValido.ehUsuarioValido(usuario));
	}
}
