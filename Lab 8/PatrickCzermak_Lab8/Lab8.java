/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;
import java.util.Random;
import javax.swing.*;
import static javax.swing.JFrame.EXIT_ON_CLOSE;

/* CLASS */
public class Lab8 extends JFrame {
    static { System.loadLibrary("Lab8"); }
    
    public int[] numbers;
    public Random rand = new Random();
    JLabel label1, label1b, labelSpace1, labelSpace2, labelSpace3, labelMean, labelSD;
    JTextField field1, fieldMean, fieldSD;
    JButton goButton;
    
    // declaring C++ functions to be native to this .java file
    public native double calculateMean(int[] numbers);
    public native double calculateSTDDev(int[] numbers);
    
    /* MAIN */
    public static void main(String[] args) {
        Lab8 obj = new Lab8();
        new Lab8().setVisible(true);
    }
    /* CONSTRUCTOR */
    public Lab8() {
        setTitle("Lab8 - Patrick Czermak");
        setSize(500, 300);
        getContentPane().setLayout(new GridBagLayout()); 
        GridBagConstraints position = new GridBagConstraints();
        
        label1 = new JLabel();
        label1.setText("  Enter the number of ");
        label1.setFont(new Font("Ariel", Font.PLAIN, 20));
        position.gridx = 1;
        position.gridy = 1;
        add(label1, position);
        label1b = new JLabel();
        label1b.setText("samples to generate: ");
        label1b.setFont(new Font("Ariel", Font.PLAIN, 20));
        position.gridx = 2;
        position.gridy = 1;
        add(label1b, position);
        
        field1 = new JTextField();
        field1.setColumns(6);
        field1.setFont(new Font("Ariel", Font.PLAIN, 20));
        position.gridx = 2;
        position.gridy = 2;
        add(field1, position);
        
        labelSpace1 = new JLabel();
        labelSpace1.setText(" ");
        position.gridx = 2;
        position.gridy = 4;
        add(labelSpace1, position);
        
        goButton = new JButton();
        goButton.setText("     GO!     ");
        goButton.setFont(new Font("Ariel", Font.BOLD, 20));
        position.gridx = 2;
        position.gridy = 5;
        add(goButton, position);
        
        labelSpace2 = new JLabel();
        labelSpace2.setText(" ");
        position.gridx = 1;
        position.gridy = 6;
        add(labelSpace2, position);
        
        labelMean = new JLabel();
        labelMean.setText("Mean=                     ");
        labelMean.setFont(new Font("Ariel", Font.BOLD + Font.ITALIC, 20));
        position.gridx = 1;
        position.gridy = 7;
        add(labelMean, position);
        
        fieldMean = new JTextField();
        fieldMean.setColumns(6);
        fieldMean.setFont(new Font("Ariel", Font.PLAIN, 20));
        position.gridx = 2;
        position.gridy = 7;
        add(fieldMean, position);
        
        labelSD = new JLabel();
        labelSD.setText("Standard Deviation=");
        labelSD.setFont(new Font("Ariel", Font.BOLD + Font.ITALIC, 20));
        position.gridx = 1;
        position.gridy = 8;
        add(labelSD, position);
        
        fieldSD = new JTextField();
        fieldSD.setColumns(6);
        fieldSD.setFont(new Font("Ariel", Font.PLAIN, 20));
        position.gridx = 2;
        position.gridy = 8;
        add(fieldSD, position);

        goButtonListener();
        
        addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent e) {
                System.exit(EXIT_ON_CLOSE); /* close+stop program */
            }
        });
    } // end constructor
    
    /* FUNCTION FOR ACTION LISTENER-> GO-BUTTON */
    private void goButtonListener() {
        goButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                int num;
                String text = field1.getText();
                
                if (text == null) {
                    return;
                }
                try {
                    num = Integer.parseInt(text);
                } catch (Exception ee) {
                    return;
                }
                
                numbers = new int[num];
                for (int i = 0; i < num; i++) {
                    numbers[i] = rand.nextInt();
                }
                
                // call C++ functions
                double mean = calculateMean(numbers);
                double deviation = calculateSTDDev(numbers);
                
                fieldMean.setText(Double.toString(mean));
                fieldSD.setText(Double.toString(deviation));
            }
        });
        
    }
    
}
