package lab;

import Clases.Ampolleta;
import Clases.BalonFutbol;
import Clases.Bicicleta;
import Clases.Boligrafo;
import Clases.Vaso;

public class Lab {

    public static void main(String[] args) {
        /*1*/
        Vaso vasoVidrio = new Vaso(100, "Vidrio");
        vasoVidrio.agregarLiquido(20);
        vasoVidrio.agregarLiquido(20);
        System.out.println("Total almacenado: " + vasoVidrio.totalAlmacenado());
        System.out.println("Vaciando...");
        vasoVidrio.vaciar();
        System.out.println("Total almacenado: " + vasoVidrio.totalAlmacenado());
        System.out.println("Intentos agregar líquido: " + vasoVidrio.intentosAgregarLiquido());

        System.out.println("\n***************************\n");

        /*2*/
        BalonFutbol balonAdidas = new BalonFutbol(90, 100);
        balonAdidas.agregarAire(10);
        System.out.println("¿Presión máxima? :" + balonAdidas.esPresionMaxima());

        System.out.println("\n***************************\n");

        /*3*/
        Bicicleta mtv = new Bicicleta("MTV", "Cyan");
        mtv.recorrerDistancia(100);
        System.out.println("Total recorrido :" + mtv.totalRecorrido());
        System.out.println("Tiempo necesario:" + mtv.tiempoNecesarioParaRecorrer(100) + " hr.");

        System.out.println("\n***************************\n");

        /*4*/
        Boligrafo bic = new Boligrafo("azul", "Pasta");
        bic.recargarTinta(20);
        bic.recargarTinta(20);
        bic.ocuparTinta(50);
        System.out.println("¿Está vacío? :" + bic.esVacio());
        System.out.println("Contador - Veces sin tinta: " + bic.contadorVecesSinTinta());

        System.out.println("\n***************************\n");

        /*5*/
        Ampolleta philips = new Ampolleta(45, "Blanca");
        philips.subirConsumo(50);

        System.out.println("¿On?:" + philips.esEncendida());
        System.out.println("Encendiendo...");
        philips.encender();
        System.out.println("¿On?:" + philips.esEncendida());
        System.out.println("Apagando...");
        philips.apagar();
        System.out.println("¿On?:" + philips.esEncendida());
    }

}
