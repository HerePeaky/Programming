#include<cmath>
bool narcissistic( int value ){
  int v2 = value;
  int f = value;
  int test = 0;
  int dn = 0;
  while(value > 0){
    ++dn;
    value = value / 10;
  }
  while(v2 > 0){
    test += pow((v2 % 10),dn);
    v2 = v2 / 10;
  }
  if(test == f){
    return true;
  } else return false;
}
