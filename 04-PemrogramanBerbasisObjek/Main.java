import model.Person;
import persistence.PersonPersistence;
import threads.HelloThread;
import gui.SimpleGUI;
import db.DBConnection;

import java.util.ArrayList;
import java.sql.Connection;

public class Main {
    public static void main(String[] args) {

        // Exception Handling contoh
        try {
            int a = 10 / 0;  // Ini akan menyebabkan ArithmeticException
        } catch (ArithmeticException e) {
            System.out.println("Exception tertangkap: " + e.getMessage());
        }

        // Collection (ArrayList)
        ArrayList<Person> people = new ArrayList<>();
        people.add(new Person("Andi", 20));
        people.add(new Person("Budi", 25));

        // Loop dan panggil method sayHello dari setiap Person
        for (Person p : people) {
            p.sayHello();
        }

        // Object Persistence: simpan dan load list Person
        String filename = "persons.dat";
        PersonPersistence.savePersons(people, filename);
        ArrayList<Person> loadedPeople = PersonPersistence.loadPersons(filename);
        System.out.println("Data dari file:");
        for (Person p : loadedPeople) {
            p.sayHello();
        }

        // Multithreading contoh
        HelloThread thread1 = new HelloThread("Thread-1");
        thread1.start();

        // GUI sederhana (Swing)
        javax.swing.SwingUtilities.invokeLater(() -> {
            new SimpleGUI().setVisible(true);
        });

        // Database connection contoh (MySQL)
        try (Connection conn = DBConnection.getConnection()) {
            if (conn != null) {
                System.out.println("Koneksi ke database berhasil!");
            }
        } catch (Exception e) {
            System.out.println("Error koneksi DB: " + e.getMessage());
        }
    }
}
