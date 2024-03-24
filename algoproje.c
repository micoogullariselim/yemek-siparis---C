#include <stdio.h>
#include <stdlib.h>
//kulandýðým konular:fonksiyonlar, if else, diziler, while döngüsü, switch case
//öðrenci indirimi uygular öðrenci indirimi %20 dir.
int tutar_yazdir(int tutar , char tur){
	
	if(tur=='o'){
	  tutar = tutar - (tutar * 0.2) ;
	   
	}
	
	return tutar;
	
}
	


int main()
 {
 	int yemek;
 	char adres[11];
 	char tur;
 	int telefon;
 	int kartno;
 	int cvv;
 	int karttarih;
 	int fiyat;
 	char cikis='N';
 	//fiyat sirasi 1:hamburger 2:tost 3:doner 4:kebap 5:iskender 6:cig kofte 7:pide
 	int fiyatliste[7]={10,8,12,18,25,15,30};
 	printf("1:hamburger:10TL\n2:tost:8TL\n3:doner:12TL\n4:kebap:18TL\n5:iskender:25TL\n6:cig kofte:15TL\n7:pide:30TL\n");
 	printf("siparisiniz tamamlandiginda siparis teslim bilgilerini girmek icin 0 a basin\n");
 	
 	 printf("ogrenci iseniz o ya degilseniz entere basin\n") ;
 	 scanf("%c", &tur);
 	 printf("yemek secmeye baslamak icin 1 basin\n");
 	 scanf("%d",&yemek);
 	 
 	    while(cikis!='Y'){
 	    
		while(yemek!=0)	{   
		
	
		
 	   printf("yemek seciniz\n");
 	   scanf("%d",&yemek);
 	     switch(yemek){
 	     	case 0:
 	     		printf("adres bilgilerine geciliyor\n");
			    break;
 	     	case 1:
 	     		printf("hamburger sectiniz\n");	   
 	     	    fiyat+=tutar_yazdir(fiyatliste[0] ,tur );
 	     	    printf("toplam fiyat %d dir\n",fiyat);
			    break;
			case 2:
			    printf("tost sectiniz\n");
			    fiyat+=tutar_yazdir(fiyatliste[1] ,tur );
			    printf("fiyat %d dir\n",fiyat);
			    break;
			case 3:
			    printf("doner sectiniz\n");	
			    fiyat+=tutar_yazdir(fiyatliste[2] ,tur );
			    printf("fiyat %d dir\n",fiyat);
				break;     	
			case 4:
				 printf("kebap sectiniz\n");
				 fiyat+=tutar_yazdir(fiyatliste[3] ,tur );
				 printf("fiyat %d dir\n",fiyat);
				 break; 
			case 5:
				 printf("iskender sectiniz\n");
				 fiyat+=tutar_yazdir(fiyatliste[4] ,tur );
				 printf("fiyat %d dir\n",fiyat);
				 break;
			case 6:
				 printf("cig kofte sectiniz\n");
				 fiyat+=tutar_yazdir(fiyatliste[5] ,tur );
				 printf("fiyat %d dir\n",fiyat);
				 break; 
	 	    case 7:
				 printf("pide sectiniz\n");
				 fiyat+=tutar_yazdir(fiyatliste[6] ,tur );
				 printf("fiyat %d dir\n",fiyat);
				 break; 
			default:
				 printf("yanlis girdiniz\n");
				 
				 
		  } 	   
		     
	      } 
		    
      
 	   printf("adres giriniz\n");
 	   scanf("%s",&adres);
 	   printf(" telefon giriniz\n");
 	   scanf("%d",&telefon);
       printf("kartno giriniz\n");
	   scanf("%d",&kartno);
	   printf("cvv giriniz\n");
	   scanf("%d",&cvv);
	   printf("karttarih giriniz\n");
	   scanf("%d",&karttarih);	
	   printf("SIPARISINIZ ALINDI TESEKKURLER :)\n");
	   printf("cikis yapmak icin Y gir, devam etmek icin N gir\n ");
	   scanf("%s",&cikis);
	   yemek=-1;
	   fiyat=0;
         }
 	
 	
	return 0;
}
