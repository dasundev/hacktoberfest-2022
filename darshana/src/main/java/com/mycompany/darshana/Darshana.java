/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.darshana;
import java.util.Scanner;
/**
 *
 * @author Darshana
 */
public class Darshana {

    public static void main(String[] args) {
        //System.out.println("Hello World!");
        Scanner input =new Scanner(System.in);
        int [] myarray = new int [10];
        
        for(int i=0;i<10;i++)
        {
            System.out.println("Enter the element :");
            myarray[i]=input.nextInt();
        }
        
        for(int y=0;y<10;y++)
        {
            System.out.println(myarray[y]);
        }
        for(int a=0;a<10;a++)
        {
            myarray[a]=myarray[a]*2;
        }
        for(int x=0;x<10;x++)
        {
            System.out.println("\n"+myarray[x]);
        }
    }
}
