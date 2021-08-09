#include <iostream>
using namespace std;

void welcome(){
  cout << "Welcome to my Jelly Bean estimate program!!";
}

int calcJBVolume(double beanLength, double beanHeight){
  double beanVolume;

  beanVolume = (5 * PI * beanLength * beanHeight * beanHeight) / 24;

  return beanVolume;
}

int calcEstimate (double beanVolume, int jarVolume){
  const double loadFactor = 0.745;
  double numBean;

  numBean = (jarVolume * loadFactor) / beanVolume;

  return numBean;
}




int main(){

double avgBean = 0;
int count = 0;
double largestBean;

do{
  
  cout << welcome << endl;
  cout << "Enter jelly bean length (cm) jelly bean height, and jar size separted by space: ";
  cin >> beanLength >> beanHeight >> jarVolume;

  cout << " Estimate of jelly beans in the jar: " << numBean << endl;
  avgBean = avgBean + numBean;

  if(numBean > largestBean){
    largeBeanLength = beanLength;
    largeBeanHeight = beanHeight;
    largeJarVolume = jarVolume;
    largestBean = numBean;
  }
  count++;
}while(( beanLength !=0) && (beanHeight !=0) && (jarVolume !=0));



return 0;
}