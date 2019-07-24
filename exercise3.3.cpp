#include <iostream>
#include <complex>
#include <string>
#include <cmath>
#include <typeinfo>

using namespace std ;
typedef complex<float> complexNumber ;
class findRoot{

    public:
        findRoot():a(0),b(0),c(0) {}
        bool isDeltaPositive() ;
        void getRoots(const float A, const float B, const float C) ;
        float getDeltaValue() ;

    private:

        float a, b, c ;
} ;

void findRoot::getRoots(const float A,const float B,const float C){

    a = A ;
    b = B ;
    c = C ;

    complexNumber root1, root2 ;
    auto temp = 0.0f ;
       
    root1 = (-b + sqrt(complex<float>(getDeltaValue(),0)))/(2*a) ;
    root2 = (-b - sqrt(complex<float>(getDeltaValue(),0)))/(2*a) ;

    if (isDeltaPositive()){

        cout <<"root 1 = " << root1.real() <<"\n"
             << "root 2 = " <<root2.real()<<endl ;
        
    }else
    {   
        if (root1.imag() < 0){

            cout << "root 1 = " <<root1.real() <<" "<<root1.imag() <<"j"<<endl ;
        } else{

            cout << "root 1 = " <<root1.real() <<"+"<<root1.imag() <<"j"<<endl ;
        }

        if(root2.imag() < 0){

            cout << "root 2 = " <<root2.real() <<" "<<root2.imag() <<"j"<<endl ;
        } else{

            cout << "root 2 = " <<root2.real() <<"+"<<root2.imag() <<"j"<<endl ;
        }
    } 
}

bool findRoot::isDeltaPositive( ){

    auto delta = pow(b,2) - 4*a*c ;

    if(delta > 0 || delta == 0)
        return true ;
    
    return false ;
}

float findRoot::getDeltaValue(){

    return pow(b,2) - 4*a*c  ;
}
main(void){

    findRoot *calcQuadratic = new findRoot ;

    auto a = 0.0f , b = 0.0f, c = 0.0f ;
    char Quit =' ';
    
    while (Quit != 'q'){
        
        tryAgain :
            cout <<"Enter a " <<endl ;
            cin >> a ; 
            if(typeid(a) == typeid(string)){         //Checks if a is not a char or string
               // a = 0.0;                          //
                goto tryAgain ;                      // 
            }
                
        cout <<"Enter b " <<endl ;
        cin >> b ;
        cout <<"Enter c " <<endl ;
        cin >> c ;
        cout <<"Answer is: " <<endl ;
        (*calcQuadratic).getRoots(a,b,c) ;
        cout <<"Press q to quit or any other key to continue" <<endl ;
        cin >> Quit ;
    }

    return 0 ;
}