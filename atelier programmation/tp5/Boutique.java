
public class Boutique {
	// author jihen HEDHLI
	Vetement[] tabVet;
	int nbVet=0;
	String nom;
	int taille;
		
	public Boutique(String nom, int taille) {
		// TODO Auto-generated constructor stub
		 this.nom=nom;
		 this.taille=20;
	  tabVet=new Vetement[taille];
	 
	
	}
  public void ajoutVetement(Vetement vt)
  {   
	//  System.out.println(nbVet+"   "+taille);
	 if(nbVet<taille)
	 {   tabVet[nbVet]=vt; nbVet++;}
	 else
		  System.out.println("Boutique Pleine");
	
  }
  
  public void afficheStock(int remise)
  {
	   for(int i=0;i<nbVet;i++)
	   { if(tabVet[i].getQtite()!=0)
		   {System.out.println(tabVet[i]);
	        System.out.println("prixTTC="+tabVet[i].prixTTC(remise));}}
	   
  }
  public static void main(String args[])
  {
	 
	Boutique bt=new Boutique("Jennifer",20) ;
	//System.out.println(bt.nom+"  "+bt.taille);
	Vetement vt1=new VetementEnfant("R100","Robe","rouge",29.900,0.5f);
	vt1.setQtite(10);
	 Vetement vt2=new Vetement("M200","Manteau","gris",169.900);
	vt2.setQtite(5);
	//vt2.setQtite(0);
	bt.ajoutVetement(vt1);
	bt.ajoutVetement(vt2);
	bt.afficheStock(60);
  }
}
