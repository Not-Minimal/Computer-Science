package Clases;

public class Ampolleta {

    private int potencia;
    private String tipoLuz;
    private boolean estado;

    public Ampolleta(int potencia, String tipoLuz) {
        this.potencia = potencia;
        this.tipoLuz = tipoLuz;
    }

    public void subirConsumo(int cantidad) {
        potencia += cantidad;
    }

    public void encender() {
        estado = true;
    }

    public void apagar() {
        estado = false;
    }

    public boolean esEncendida() {
        return estado;
    }
}
