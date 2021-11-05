
public class Vetement {
// author jihen HEDHLI
public static final double tva=18;
 String  code;
 String libelle;
 String couleur;
 double prixHT;
 private int qtite;

 
public Vetement(String c, String lib, String coul, double pht) {
		// TODO Auto-generated constructor stub
		code=c;
		libelle=lib;
		couleur=coul;
		prixHT=pht;
	}

public void setQtite(int q)
{ 
	qtite=q;
}

public int getQtite()
{ 
	return qtite;
}

public String toString()
{return(code+"  "+libelle+"  "+couleur+" :PrixHT="+prixHT+" DT et Qtite= "+qtite);}

double prixTTC()
{  // System.out.println("bonjour");
	return( prixHT*(1+ tva/100));}

double prixTTC(float remise)
{  return( prixTTC()*(1- (remise/100)));}

}
