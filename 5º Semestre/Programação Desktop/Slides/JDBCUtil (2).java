package bancodados;

import java.io.File;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.io.FileInputStream;
import java.io.IOException;
import java.sql.ResultSet;
import java.util.Properties;

/**
 * A simple data source for getting database connections.
 */
public class JDBCUtil {

    private static String url;
    private static String username;
    private static String password;

    private static final String PATH = System.getProperty("user.dir");
    private static final File CONFIG_FILE = new File(PATH + "/src/bancodados/configuracaobd.properties");

    /**
     * Initializes the data source.
     *
     */
    public static void init() {
        try {
            Properties props = new Properties();
            FileInputStream in = new FileInputStream(CONFIG_FILE);
            props.load(in);
            String driver = props.getProperty("jdbc.driver");
            url = props.getProperty("jdbc.url");
            username = props.getProperty("jdbc.username");
            if (username == null) {
                username = "";
            }
            password = props.getProperty("jdbc.password");
            if (password == null) {
                password = "";
            }
            if (driver != null) {
                Class.forName(driver);
            }
        } catch (ClassNotFoundException erro) {
            System.err.println("Driver não encontrado." + erro);
        } catch (IOException erro) {
            System.err.println("Erro na leitura do arquivo de configuração JDBC." + erro);
        }
    }

    /**
     * Gets a connection to the database.
     *
     * @return the database connection
     */
    public static Connection getConnection() {
        try {
            return DriverManager.getConnection(url, username, password);
        } catch (SQLException erro) {
            System.err.println("Erro ao criar conexão com o banco de dados JDBC."+erro);
            return null;
        }
    }

    public static boolean MovProximo(ResultSet rsdados) {
        try {
            if (rsdados != null) {
                if (!rsdados.isLast()) {
                    rsdados.next();
                    return true;
                }
            }
        } catch (SQLException erro) {
            System.out.println(erro);
            return false;
        }
        return false;
    }

    public static boolean MovAnterior(ResultSet rsdados) {
        try {
            if (rsdados != null) {
                if (!rsdados.isFirst()) {
                    rsdados.previous();
                    return true;
                }
            }
        } catch (SQLException erro) {
            System.out.println(erro);
            return false;
        }
        return false;
    }

    public static boolean MovUltimo(ResultSet rsdados) {
        try {
            if (rsdados != null) {
                if (!rsdados.isLast()) {
                    rsdados.last();
                    return true;
                }
            }
        } catch (SQLException erro) {
            System.out.println(erro);
            return false;
        }
        return false;
    }

    public static boolean MovPrimeiro(ResultSet rsdados) {
        try {
            if (rsdados != null) {
                if (!rsdados.isFirst()) {
                    rsdados.first();
                    return true;
                }
            }
        } catch (SQLException erro) {
            System.out.println(erro);
            return false;
        }
        return false;
    }
}
