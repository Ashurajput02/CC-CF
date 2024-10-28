int main(){
    int i=getint();
    int j=getint();

while(i!=j){
    if(i>j)
    i-=j;
else
{
    j-=i;

}
}
putint(i);


}

index    symbol           type
1         void             type
2         int             type
3         main          func (1) ->(2)
4         number        func (2) ->(1) 
5       reversednumber        (2)
6       reversenumber        (2)
7        num                (2)
8        reversed          (2)
9        digit              (2)

float n=9.2;
float * tashu=&n;

int n=9;
int  *tashu=&n;
int ** ash=&tashu;
