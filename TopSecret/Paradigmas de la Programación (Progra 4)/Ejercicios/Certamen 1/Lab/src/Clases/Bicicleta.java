package Clases;

public class Bicicleta {
    
    private String marca;
    private String color;
    private float distancia;
    private float velocidad;
    

    public Bicicleta(String marca, String color) {
        this.marca = marca;
        this.color = color;        
        velocidad = 100;//km/hr;
    }
    
    public void recorrerDistancia(int kilometros)
    {
        this.distancia+=kilometros;
    }
    
    public float totalRecorrido()
    {
        return distancia;
    }
    
    public float tiempoNecesarioParaRecorrer(int kilometros)
    {
        return kilometros/velocidad;
    }
    
}
