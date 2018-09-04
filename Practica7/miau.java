
import java.util.Random;

/**
 *
 * @author abraham
 */
public class miau {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        String suma="IPN ";
       // System.out.println(Cadena());
       suma=suma.concat(Cadena().concat(" ").concat(Cadena()));
        for (int i = 0; i < 1757600; i++) {
            
            suma=suma.concat(" ");
            suma=suma.concat(Cadena());
        
        }
        //System.out.println(suma);
 
      //cadenaDondeBuscar.concat(this.Cadena());              
      String buscando = "IPN"; 
      int lastIndex = 0;
int count = 0;

     while(lastIndex != -1){

    lastIndex = suma.indexOf(buscando,lastIndex);

    if(lastIndex != -1){
        count ++;
        lastIndex += buscando.length();
    }
}
System.out.println(count);
    }
    public static String Cadena() {
  
    int leftLimit = 65; //
    int rightLimit = 90; // 
    int targetStringLength = 3;
    Random random = new Random();
    StringBuilder buffer = new StringBuilder(targetStringLength);
    for (int i = 0; i < targetStringLength; i++) {
        int randomLimitedInt = leftLimit + (int) 
          (random.nextFloat() * (rightLimit - leftLimit + 1));
        buffer.append((char) randomLimitedInt);
    }
    String generatedString = buffer.toString();
    //System.out.println(generatedString);
    return generatedString;
    
}
    
}
