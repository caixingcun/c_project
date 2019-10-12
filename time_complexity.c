
int for_add_method(int index){
    int i,sum = 0;
    for(i=1; i<=index; i++){
        sum = sum + i;  /**时间复杂度为O(1)的程序序列*/
    }
    return sum;
}


int add_method2(int n){
    int sum = 0;  /*执行一次*/
    sum = (1+n)*n/2; /*执行一次*/
    printf("%d",sum) /**执行一次*/
    return sum;
    /* f(n) = 3
     根据推导大O阶方法
     将常数项变成 1
     保留最高阶时，发现没有最高阶项
     所以算法时间复杂度 O(1)
    */
}

/**对ѩض*/
int log_level(int n){
    int count = 1;
    while(count < n){
     count = count *2;  /**时间复杂度为O(1)的程序步骤序列*/
    }
}
/**平کض*/
int sq_level(int n){
    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<n;j++){
            /**时间复杂度为O(1)的程序步骤序列*/
        }
    }
}
int sq_level1(int n){
    int i,j;
    for(i=0; i<n; i++){
        for(j=i; j<n;j++){
            /**时间复杂度为O(1)的程序步骤序列*/
        }
    }
}
/*将所有在线性表Lb中夸ΥܨLa中的数据元素插入到La中*/
void union(List *La,List Lb){
   int La_len,Lb_len,i;
   ElemType e;
}





int main(){
    printf("%d", add_method(100));
    return 0;
}

