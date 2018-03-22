int prime(int i){
  int flag=0, d=1;
  while(i>=d){
    if(i%d==0) flag++;
    d++;
  }
return flag;
}

int solve(int n) {
  int ans, i=0, l=1;   
  while(i<=n){
    ans=l;
    if(l>9){
      int m=l, flag=0;
      while(m!=0){
        if(prime(m%10)==2){
          flag++;
          m=0;
        } 
        m/=10;        
      }
      if(flag==0){       
        if(prime(l)!=2) i++;
      }
    }else{
    if(prime(l)!=2) i++;
    }
    l++;
  }
  return ans;
}
