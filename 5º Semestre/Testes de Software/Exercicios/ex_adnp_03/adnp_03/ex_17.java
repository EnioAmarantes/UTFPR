/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package adnp_03;

import adnp_03.Salario;
import adnp_03.Calculadora;
import org.junit.After;
import org.junit.AfterClass;
import org.junit.Before;
import org.junit.BeforeClass;
import org.junit.Test;
import static org.junit.Assert.*;

/**
 *
 * @author enio
 */
public class ex_17 {
    
    public ex_17() {
    }
    
    @BeforeClass
    public static void setUpClass() {
    }
    
    @AfterClass
    public static void tearDownClass() {
    }
    
    @Before
    public void setUp() {
    }
    
    @After
    public void tearDown() {
    }

    // TODO add test methods here.
    // The methods must be annotated with annotation @Test. For example:
    //
    @Test
    public void testeC1(){
        Calculadora calc = new Calculadora();
        Salario salario = calc.calcularSalario("assalariado40h", 0);
        assertEquals(4000, salario.getValorSalario());
        assertEquals("", salario.getPendencia());
    }
    
        @Test
    public void testeC2(){
        Calculadora calc = new Calculadora();
        Salario salario = calc.calcularSalario("assalariado20h", 0);
        assertEquals(1500, salario.getValorSalario());
        assertEquals("", salario.getPendencia());
    }
    
        @Test
    public void testeC3(){
        Calculadora calc = new Calculadora();
        Salario salario = calc.calcularSalario("horista", 40);
        assertEquals((40 * 15), salario.getValorSalario());
        assertEquals("", salario.getPendencia());
    }
    
        @Test
    public void testeC4(){
        Calculadora calc = new Calculadora();
        Salario salario = calc.calcularSalario("horista", 25);
        assertEquals((25 * 15), salario.getValorSalario());
        assertEquals("relatorio de ausencia", salario.getPendencia());
    }
    
        @Test
    public void testeC5(){
        Calculadora calc = new Calculadora();
        Salario salario = calc.calcularSalario("horista", 60);
        assertEquals((60 * 15), salario.getValorSalario());
        assertEquals("relatorio de horas extras", salario.getPendencia());
    }
    
}
