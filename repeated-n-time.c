#include<stdio.h>
int main()
{
    int n,k,flag=0;
    scanf("%d",&n);
    int a[n],i,j;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {   for(j=i;j<n;j++)
        if(a[i]==a[j])
        flag++;
    }
    for(i=1;i<n;i++)
    if(flag==k) 
    printf("%d ",a[i]);
    
}
// https://thecodemind.io/app/discription.php?pageCategory=c3pzTm1NaHFsYWVCeFpGMVpkTDloZz09&Tid=S09iaUlkZFh0OHVSZFl2OVdPUndTdz09&Pid=blB3cjllcUV5bzR3ZW1qaVdyckNFUT09&Course=d09uOGdaVjNCL2FTTVN3UldlR0Jhdz09&Technology=czBLTlF3bnFzSXN2amhYQnpkTW9hbmlZeXAwcFFTZk5Nd20zWktQakgxUT0=&Topic=RFFLWjRDMFN1L0JQMS9ROWtSUisyQT09