/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package adnp_03;

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
public class ex_09 {
    
    public ex_09() {
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
     public void C1() {
         CartaoCredito cc = new CartaoCredito();
         
         assertEquals(10, cc.calculaDesconto("clienteNovo", false));
     }
     
     @Test
     public void C2() {
         CartaoCredito cc = new CartaoCredito();
         
         assertEquals(0, cc.calculaDesconto("clienteAntigo", false));
     }
     
     @Test
     public void C3() {
         CartaoCredito cc = new CartaoCredito();
         
         assertEquals(12, cc.calculaDesconto("clienteOuro", false));
     }
     
     @Test
     public void C4() {
         CartaoCredito cc = new CartaoCredito();
         
         assertEquals(25, cc.calculaDesconto("clienteAntigo", true));
     }
     
     @Test
     public void C5() {
     
         CartaoCredito cc = new CartaoCredito();
         
         assertEquals((25 + 12), cc.calculaDesconto("clienteOuro", true));
     }
}
