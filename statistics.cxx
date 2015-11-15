#include <cmath>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//---------------------------------------------
void fill(double*p,const int N,double a,double b, double r){
	for (int i=0;i<N;i++){
  b = RAND_MAX;
  a = rand();
  r = a/b;
	p[i]=r;}
}
void zaehle(const int N, double*p,double& mean,double& var){	
	for (int i=0;i<N;i++){	
		mean += p[i]*(1/N);
		var += pow(p[i]-mean,2)*(1/N);}
	}
//--------------------------------------------------

int main(){
   srand(time(NULL));
   const int N = 100;
   double p[N];
   double mean, var;
   double b ;
   double a ;
   double r ;
fill(p,N,a,b,r);
zaehle(N,p,mean,var);

   // Some lines here....

   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;
   
   return 0;
}
