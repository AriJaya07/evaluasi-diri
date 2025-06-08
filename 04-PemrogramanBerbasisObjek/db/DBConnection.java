package db;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

/**
 * Class helper untuk koneksi database MySQL.
 */
public class DBConnection {
    private static final String URL = "jdbc:mysql://localhost:3306/person_data";  // ganti dbname sesuai database kamu
    private static final String USER = "root";  // ganti user db kamu
    private static final String PASSWORD = "root1234";

    public static Connection getConnection() throws SQLException {
        return DriverManager.getConnection(URL, USER, PASSWORD);
    }
}
