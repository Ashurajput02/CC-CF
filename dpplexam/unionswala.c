union ash {
    int a;
    char b;
};
struct jig{
    int c;
    char d;
};

int num=0;
 
 int *solve(int i){
    num+=i;
    return &num;

 }


 int main(){
    ash abhijeet;
    jig entry;
    int *k=solve(5);
    char boy[5];
    return 0;
    
 }