package Clases;

public class Vaso {
    
    private int capacidad;
    private String material; 
    private int liquido;
    private int contadorIntentosAL;
    
    public Vaso(int capacidad, String material) {
        this.capacidad = capacidad;
        this.material = material;
    }
    
    public void agregarLiquido(int liquido)
    {
        contadorIntentosAL++;
        this.liquido+=liquido;
    }
    
    public int totalAlmacenado()
    {
        return liquido;
    }
    
    public void vaciar()
    {
        liquido=0;
    }
    
    public int intentosAgregarLiquido()
    {
        return contadorIntentosAL;
    }
}
