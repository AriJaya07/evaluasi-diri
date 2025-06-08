package persistence;

import model.Person;

import java.io.*;
import java.util.ArrayList;

/**
 * Class untuk simpan dan load data Person ke file dengan Serializable.
 */
public class PersonPersistence {

    public static void savePersons(ArrayList<Person> persons, String filename) {
        try (ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream(filename))) {
            oos.writeObject(persons);
            System.out.println("Data berhasil disimpan ke " + filename);
        } catch (IOException e) {
            System.out.println("Error simpan file: " + e.getMessage());
        }
    }

    public static ArrayList<Person> loadPersons(String filename) {
        ArrayList<Person> persons = null;
        try (ObjectInputStream ois = new ObjectInputStream(new FileInputStream(filename))) {
            persons = (ArrayList<Person>) ois.readObject();
            System.out.println("Data berhasil dibaca dari " + filename);
        } catch (IOException | ClassNotFoundException e) {
            System.out.println("Error load file: " + e.getMessage());
            persons = new ArrayList<>();
        }
        return persons;
    }
}
