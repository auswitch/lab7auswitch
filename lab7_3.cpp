int adiff(int A,int B){
  int C;
  while(A > 360){
    A -= 360;
  }
  while(B > 360){
    B -= 360;
  }
  if(A > B){
    C = A - B;
  }else{
    C = B - A;
  }
  while(C >= 360){
    C -= 360;
  }
  if(C>180){
    C = 360 - C;
  }
  return C ;
}
