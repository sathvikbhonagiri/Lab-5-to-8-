void towerOfHanoi(int n, char source, char destination, char aux_rod)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c",source,destination);
        return;
    }
    else
    {towerOfHanoi(n-1,source, aux_rod,destination);
    printf("\n Move disk %d from rod %c to rod %c", n,source,destination);
    towerOfHanoi(n-1, aux_rod, destination,source);}
}
  
void main()
{
    int n;
    printf("enter no of disc \n");
    scanf("%d",&n);
    towerOfHanoi(n,'A','C', 'B');  
  
}