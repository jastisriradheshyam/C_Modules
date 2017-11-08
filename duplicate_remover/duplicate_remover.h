#include<stdlib.h>
int compare (const void* p1, const void* p2)
{ 
   int i1 = *(int*) p1;
   int i2 = *(int*) p2;
   if (i1 < i2) return -1;
   else if (i1 == i2) return 0;
   else return 1;
   /* or simply: return i1 - i2; */
}
int *dup_rem(int *arr,int *no)
{
    int i,j,k=0;
    int n = *no;
    int *sup = calloc(n,sizeof(int));
    int *anarr = calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
     if(sup[i]!=1)
     {
      for(j=i+1;j<n;j++)
      {
       if(arr[i]==arr[j])
       {
        sup[i]=1;
        sup[j]=1;
       }
      }
     }
     else{continue;}
    }
    for(i=0;i<n;i++)
    {
     if(sup[i]==0)
     {
      anarr[k]=arr[i];
      k++;
     }
    }

    free(sup);
    *no = k;
    free(arr);
    return anarr;
}

int *dup_rem_sort(int *arr,int *no)
{
    int i,j,k=0;
    int n = *no;
    int *sup = calloc(n,sizeof(int));
    int *anarr = calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
     if(sup[i]!=1)
     {
      for(j=i+1;j<n;j++)
      {
       if(arr[i]==arr[j])
       {
        sup[i]=1;
        sup[j]=1;
       }
      }
     }
     else{continue;}
    }
    for(i=0;i<n;i++)
    {
     if(sup[i]==0)
     {
      anarr[k]=arr[i];
      k++;
     }
    }

    free(sup);
    *no = k;
    qsort(anarr,k,sizeof(int),compare);
    free(arr);
    return anarr;
}