#include <iostream>
using namespace std;

void welcomefnc(){
  cout << "Welcome to my Jelly Bean estimate program!!";
}

int calcJBVolume(double beanLength, double beanHeight){
  double beanVolume;
  const double PI = 

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
double beanLength, beanHeight, jarVolume, largeBeanLength, largeBeanHeight, largeJarVolume, largestBean, numBean;

cout << welcomefnc << endl;

do{
  
  cout << "Enter jelly bean length (cm) jelly bean height, and jar size separted by space: ";
  cin >> beanLength >> beanHeight >> jarVolume;

  cout << " Estimate of jelly beans in the jar: " << calcEstimate(double beanVolume, int jarVolume) << endl;

  avgBean = avgBean + calcEstimate(double beanVolume, int jarVolume);

  if(numBean > largestBean){
    largeBeanLength = beanLength;
    largeBeanHeight = beanHeight;
    largeJarVolume = jarVolume;
    largestBean = numBean;
  }
  count++;
}while(( beanLength !=0) && (beanHeight !=0) && (jarVolume !=0));

avgBean =avgBean / count;

cout << "Total number entries: " << count << endl;
cout << "Average number of beans: " << avgBean << endl;
cout << "Bean size for the largest bean estimate: " << largeBeanLength <<" cm" << largeBeanHeight << " cm" << endl;
cout << "Jar size for the largest jelly bean estimate: " << largeJarVolume << " cm" << endl;
cout << "Thank you for using my program."
return 0;
}