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
int *dup_rem(int*,int*);
int *dup_rem_sort(int*,int*);
char *char_dup_rem(char*,int*);
float *float_dup_rem(float*,int*);
double *double_dup_rem(double*,int*);
int *dup_rem(int *arr,int *no)
{
    int i,j,k=0;
    int n = *no;
    short *sup = calloc(n,sizeof(short));
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
    short *sup = calloc(n,sizeof(short));
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

char *char_dup_rem(char *arr,int *no)
{
    int i,j,k=0;
    int n = *no;
    short *sup = calloc(n,sizeof(short));
    char *anarr = calloc(n,sizeof(char));
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

float *float_dup_rem(float *arr,int *no)
{
    int i,j,k=0;
    int n = *no;
    short *sup = calloc(n,sizeof(short));
    float *anarr = calloc(n,sizeof(float));
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

double *double_dup_rem(double *arr,int *no)
{
    int i,j,k=0;
    int n = *no;
    short *sup = calloc(n,sizeof(short));
    double *anarr = calloc(n,sizeof(double));
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
