#include <stdio.h>
#include <stdlib.h>

void DataStructure(){
    char A[]="\n   ISBAT University 2025-Results ";
    printf("%s\n\n",A);
    char i[]="Data Structure & Algorithm";
    printf("   1. %s\n",i);
    char z[]="Data storage & Security";
    printf("   2. %s\n",z);
    char y[]="Computer Organ & Architecture";
    printf("   3. %s\n\n",y);
    int a_num, c_num, m_num, e_num;
    printf("  Enter Assignment marks: ");
    scanf("%d",&a_num);
    printf("  Enter Coursework marks: ");
    scanf("%d",&c_num);
    printf("  Enter Mid term marks: ");
    scanf("%d",&m_num);
    printf("  Enter End term marks: ");
    scanf("%d",&e_num);

    int s = a_num + c_num + m_num + e_num;
    float average = s / 4.0;
    printf("Average for Data Structure Algorithm: %.2f\n\n",average);
}

void DataStorage(){
  int a_num,c_num,m_num,e_num;
    printf("  Enter Assignment marks: ");
    scanf("%d",&a_num);
    printf("  Enter Coursework marks: ");
    scanf("%d",&c_num);
    printf("  Enter Mid term marks: ");
    scanf("%d",&m_num);
    printf("  Enter End term marks: ");
    scanf("%d",&e_num);

    int s = a_num + c_num + m_num + e_num;
    float average = s / 4.0;
    printf("Average for Data Storage & Security: %.2f\n\n",average);
}


void computer(){
int a_num,c_num,m_num,e_num;
    printf("  Enter Assignment marks: ");
    scanf("%d",&a_num);
    printf("  Enter Coursework marks: ");
    scanf("%d",&c_num);
    printf("  Enter Mid term marks: ");
    scanf("%d",&m_num);
    printf("  Enter End term marks: ");
    scanf("%d",&e_num);

    int s = a_num + c_num + m_num + e_num;
    float average = s / 4.0;
    printf("Average for Computer organisation & Architecture: %.2f\n",average);
}

int main(){
    DataStructure();
    DataStorage();
    computer();
    return 0;
}



