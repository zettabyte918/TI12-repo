
public class VetementEnfant extends Vetement {
	//author Jihen HEDHLI
 
	float age;
  
	public VetementEnfant (String c, String lib, String coul, double pht, float age) {
	super(c,lib,coul,pht);
	this.age=age;
	}

	public void setAge(float age)
	{ 
		this.age=age;
	}
	
	public String toString()
	{return(super.toString()+" age vetement "+age);}
	
	double prixTTC(float remise)
	{  if(remise<50)
		return( prixTTC()*(1- remise/100));
    	else
    		return(prixTTC());
	}

}
