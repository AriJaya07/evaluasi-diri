package gui;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/**
 * Contoh GUI sederhana pakai Swing.
 */
public class SimpleGUI extends JFrame {

    private JButton button;
    private JLabel label;

    public SimpleGUI() {
        setTitle("Simple GUI");
        setSize(300, 150);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);

        button = new JButton("Klik Aku");
        label = new JLabel("Belum ada aksi");

        button.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                label.setText("Tombol sudah diklik!");
            }
        });

        getContentPane().setLayout(new java.awt.FlowLayout());
        getContentPane().add(button);
        getContentPane().add(label);
    }
}
