package model;

import java.io.Serializable;

/**
 * Contoh class Person dengan enkapsulasi dan Serializable untuk persistence.
 */
public class Person implements Serializable {
    private String name;
    private int age;

    public Person(String name, int age){
        this.name = name;
        this.age = age;
    }

    // Getter dan Setter (enkapsulasi)
    public String getName() { return name; }
    public void setName(String name) { this.name = name; }

    public int getAge() { return age; }
    public void setAge(int age) { this.age = age; }

    public void sayHello() {
        System.out.println("Halo, saya " + name + ", umur " + age);
    }
}
