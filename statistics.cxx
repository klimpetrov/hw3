#include <cmath>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//---------------------------------------------
void fill(double*p,const int N){
	for (int i=0;i<N;i++){
	p[i]=(double) rand()/(double)RAND_MAX;
        cout << p[i] << endl;
        }
}
void zaehle(const int N, double*p,double& mean,double& var){	
	for (int i=0;i<N;i++){	
		mean += p[i];
		mean /=N;
            
        }
        for( int i=0; i<N; i++){
        
                var += pow(p[i]-mean,2);
                var /= N;
            
        }
}

int main(){
   srand(time(NULL));
   const int N = 100;
   double p[N];
   double mean, var;
fill(p,N);
zaehle(N,p,mean,var);

   // Some lines here....

   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;
   
   return 0;
}
