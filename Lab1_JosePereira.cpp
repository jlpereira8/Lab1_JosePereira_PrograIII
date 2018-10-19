
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <math.h>


	int main(){
	   char d='s';
	   while(d!='n'){
	       int des;
               cout<<"      MENU       "<<endl;
	       cout<<"1) Ejercicio 1"<<endl;
	       cout<<"2) Ejercicio 2"<<endl;
	       cout<<"3) Ejercicio 3"<<endl;
	       cout<<"4) Salir"<<endl;
	       cout<<"Ingrese su desicion: ";
	       cin>>des;
	          if(des==1){
	            int n;
		    int filas;
		    int columnas;
		      cout<<"Ingrese un numero n: "<<endl;
                      cin>>n;
                      filas=2*(n+1);
		      columnas=2*(filas)-1;
		      cout<<"filas "<<filas<<endl;
		      cout<<"columnas "<<columnas<<endl;
		      int mitad=filas/2;
		      int blank=filas-1;
		      int cont=1;
		      int cont2=0;
		      cout<<"mita "<<mitad<<endl;
		         for(int i=0;i<filas;i++){
				 cout<<" ";
		            for(int j=0;j<columnas;j++){
			        if(j==blank){
				  for(int x=0;x<cont;x++){
                                        cout<<"*";
	   	                  } 				       	  
				      cont+=2;

				  }else if(j<=blank){
                                    cout<<" ";
				  }
			    }
			    blank--;
			    cout<<endl;
			 
		  }
		  }else if(des==3){
                       double m;
		       double y;
		       double p;
		       double resp;
		       cout<<"Ingrese el valor de m: ";
		       cin>>m;
                       cout<<"Ingrese el valor de y: ";
		       cin>>y;
		       cout<<"Ingrese el valor de p: ";
		       cin>>p;
		       //
		       resp=p;
		          while(m*sqrt(p)<y){
	                    cout<<"P :"<<p<<endl;
                            p+=resp; 
		          }
			cout<<"La respuesta es: "<<p<<endl;
		        
		  }else if(des==2){
	              double num;
		      cout<<"Ingrese un numero : ";
		      cin>>num;
		        if(num<=99){
			
			}else if(num>=100&&num<=999){
			   double r=num/10;
			   double fin=(round(r))*10;
			   cout<<fin<<endl;
			}else if(num>=1000&&num<=9999){
			  double num2=num;
			  double r=num/100;
			  double fin=(round(r))*100;
			  cout<<fin<<endl;
			  int t=0;
			    while(num>10){
                              num=num/10;
			      t++;
			    }
			   cout<<"log ("<<num2<<") = ";
			        for(int i=0;i<t;i++){
				   cout<<"log ("<<"10";
			        }
				cout<<"log ("<<num<<")";
			}else if(num>=10000&&num<=99999){
			  double r=num/1000;
			  double fin=(round(r))*1000;
			  double num2=num;
			  int t=0;
			     while(num>10){
                               num=num/10;
			       t++;
			     }
			  cout<<"log ("<<num2<<") = ";
			     for(int i=0;i<t;i++){
			        cout<<"log ("<<"10";
			     }
			     cout<<"log ("<<num<<")";
			}else if(num>=100000&&num<=999999){
		          double r=num/10000;
			  double fin=(round(r))*100000;
			  cout<<fin<<endl;

			}
		  }else if(des==4){
                    d='n';
		  }else{
		     cout<<"Opcion no valida";
		  }
           }
	return 0;
	}
