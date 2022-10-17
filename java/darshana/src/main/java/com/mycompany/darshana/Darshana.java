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
        
       Scanner objarray = new Scanner(System.in);
       
       int [] myarray = new  int [10] ;
       
       for(int i =0 ;i<10;i++)
       {
           System.out.println("Enter the number : ");
           myarray[i] = objarray.nextInt();
           
       }
       for(int s=0 ;s<10;s++)
       {
           System.out.println(myarray[s]);
       }
      for(int y=0 ;y<10;y++)
       {
           myarray[y]=myarray[y]*2;
       }
      System.out.println("\n Ater the multipilcation \n");
       for(int z=0 ;z<10;z++)
       {
           
           System.out.println(myarray[z]);
       }
       
       
    }
}
