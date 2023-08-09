package Clases;

public class Boligrafo {

    private String color;
    private String tipoTinta;
    private int tinta;
    private int contadorVST;

    public Boligrafo(String color, String tipoTinta) {
        this.color = color;
        this.tipoTinta = tipoTinta;
    }

    public void recargarTinta(int cantidad) {
        tinta += cantidad;
    }

    public boolean esVacio() {
        return tinta == 0;
    }

    public void ocuparTinta(int cantidad) {
        tinta -= cantidad;
        tinta = (tinta < 0) ? 0 : tinta;

        if (esVacio()) {
            contadorVST++;//Contar cuantas veces sin tinta
        }
    }

    public int contadorVecesSinTinta() {
        return contadorVST;
    }

}
