package Clases;

public class BalonFutbol {

    private float aire;
    private float aireCapacidadMaxima;

    public BalonFutbol(float aire, float aireCapacidadMaxima) {
        this.aire = aire;
        this.aireCapacidadMaxima = aireCapacidadMaxima;
    }

    public void agregarAire(int aire) {
        this.aire += aire;
        
        if(esPresionMaxima())
            this.aire = aireCapacidadMaxima;
    }

    public boolean esPresionMaxima() {
        return aire >= aireCapacidadMaxima;
    }
}
