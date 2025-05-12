public class VerificaErros {

    public boolean VerificaVazio(String[] argumentos){

        for(String s : argumentos) {
            if(s.isBlank()) return true;
        }
        return false;
    }

    public boolean VerificaNumero(String[] argumentos) {

        for(String s: argumentos) {
            try {
                Integer.parseInt(s);
            }
            catch(Exception e) {
                return true;
            }
        }
        return false;
    }

    public boolean VerificaNumeroDouble(String[] argumentos) {

        for(String s: argumentos) {
            try {
                Double.parseDouble(s);
            }
            catch(Exception e) {
                return true;
            }
        }
        return false;
    }

    public boolean VerificaLimite(int[] argumentos, int[] liminf, int[] limsup) {

        int i = 0;
        for(int a:argumentos) {
            if(a < liminf[i] || a > limsup[i]) return true;
            i++;
        }
        return false;
    }

    public boolean VerificaLimite(double[] argumentos, double[] liminf, double[] limsup) {

        int i = 0;
        for(double a:argumentos) {
            if(a < liminf[i] || a > limsup[i]) return true;
            i++;
        }
        return false;
    }


}