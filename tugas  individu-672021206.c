#include <stdio.h>
#include <stdlib.h>

void main(){
 int pilih;
 printf("tugas mandiri mambuat program: ");
 printf("\n1.buble\n2.selection\n3.insertion\n");
 printf("\nmasukan pilihan: ");
 scanf("%d",&pilih);
 switch(pilih){
 case 1:
     buble();
     break;
 case 2:
    selection();
     break;
 case 3:
    insertion();
    break;

 }
}

//buble
void rum(int ang[], int n){
  int i, j, tmp;
  for(i = 0; i < n; i++){
    for(j=0; j < n-i-1; j ++){
      if(ang[j] > ang[j+1]){
        tmp = ang[j];
        ang[j] = ang[j+1];
        ang[j+1] = tmp;
      }
    }
  }
}
int buble()
{ system("cls");
  int angka[20], n, i, j;
  printf("Masukkan banyak data: ");
  scanf("%d", &n);
  printf("Masukkan data: \n");
  for(i = 0; i < n; i++){
    scanf("%d", &angka[i]);
  }
  printf("\nsebelum diurutkan : ");
     for(i=0;i<n;i++){
            printf("%d ",angka[i]);
}

  rum(angka, n);
  printf("\nsetelah diurtkan  : ");
  for(i = 0; i < n; i++){
    printf("%d ", angka[i]);
  }
  printf("\n");
}

//selection
int selection()
{   system("cls");
     int L[20],temp,i,j,n;
    printf("masukan berapa banyak data : ");
    scanf("%d",&n);
    printf("pengurutan berdasarkan Selection sort \nmasukkan data/angka %d : \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&L[i]);}

    printf("\nsebelum diurutkan: ");

    for(i=0;i<n;i++){
            printf("%d ",L[i]);
}

    for(i=0;i<(n-1);i++){
        for(j= i+1;j<n;j++){
            if(L[i]>L[j]){
                temp=L[i];
                L[i]=L[j];
                L[j]=temp;
            }
        }
    }
    printf("\nsetelah diurutkan: ");
    for(i=0;i<n;i++){
            printf("%d ",L[i]);
}
    printf("\n");
}

//insertion
int insertion()
{  system("cls");
    int L[20],temp,i,j,n;
    printf("masukan berapa banyak data : ");
    scanf("%d",&n);
    printf("pengurutan berdasarkan Selection sort \nmasukkan data/angka %d : \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&L[i]);}

    printf("\nsebelum diurutkan: ");

    for(i=0;i<n;i++){
            printf("%d ",L[i]);
            }

    for(i=1;i<n;i++){
        temp=L[i];
        j=i-1;
        while((temp<L[j])&&(j>=0)){
            L[j+1]=L[j];
            j=j-1;
        }
        L[j+1]=temp;
    }

    printf("\nsetelah diurutkan: ");
    for(i=0;i<n;i++){
            printf("%d ",L[i]);
    }
    printf("\n");
}
