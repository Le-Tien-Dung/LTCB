#include<stdio.h>
int main(){
	int nam, thang, x;
	printf("nhap nam:");
	scanf("%d", &nam);
	printf("nhap thang:");
	scanf("%d", &thang);
	
switch (thang) {
	case 1: printf ("thang 1 nam %d co 31 ngay ", nam);
	case 2: if (nam%4==0){
		printf("thang 2 nam %d co 29 ngay ", nam);
	}
	else { printf("thang 2 nam %d co 28 ngay ", nam);
	}
	break;
	case 3: printf ("thang 3 nam %d co 31 ngay ", nam);break;
	case 4: printf ("thang 4 nam %d co 30 ngay ", nam);break;
	case 5: printf ("thang 5 nam %d co 31 ngay ", nam);break;
	case 6: printf ("thang 6 nam %d co 30 ngay ", nam);break;
	case 7: printf ("thang 7 nam %d co 31 ngay ", nam);break;
	case 8: printf ("thang 8 nam %d co 31 ngay ", nam);break;
	case 9: printf ("thang 9 nam %d co 30 ngay ", nam);break;
	case 10: printf ("thang 10 nam %d co 31 ngay ", nam);break;
	case 11: printf ("thang 12 nam %d co 30 ngay ", nam);break;
	case 12: printf ("thang 13 nam %d co 31 ngay ", nam);break;
}
}
