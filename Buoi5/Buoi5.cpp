#include<stdio.h>

void thuCung(){
	//Nhap thong tin
	char ten[100];
	char mauSac[100];
	int tuoi;
	char chungLoai[100];
	
	printf("Moi ban nhap ten : ");
	gets(ten);
	printf("Moi ban nhap mau sac : ");
	gets(mauSac);
	printf("Moi ban nhap tuoi : ");
	scanf("%d",&tuoi);
	fflush(stdin);
	printf("Moi ban nhap chung loai : ");
	gets(chungLoai);
	
	//In ra thong tin
	printf("\n\nThong tin cua thu cung vua nhap :\n");
	printf("Ten : %s\n",ten);
	printf("Mau sac : %s\n",mauSac);
	printf("Tuoi : %d\n",tuoi);
	printf("Chung Loai : %s\n",chungLoai);
}

void chucVu(){
	int thang;
	printf("Moi ban nhap so thang lam viec : ");
	scanf("%d",&thang);
	
	if(thang>=72){
		printf("Chuc vu : Ban lanh dao");
	}else if(thang>=36){
		printf("Chuc vu : Giam doc");
	}else if(thang>=24){
		printf("Chuc vu : Truong phong");
	}else if(thang>=12){
		printf("Chuc vu : Truong nhom");
	}else{
		printf("Chuc vu : Nhan vien");
	}
}

void tiengAnh(){
	//Nhap so luong sinh vien
	int n;
	printf("Moi ban nhap so luong sinh vien : ");
	scanf("%d",&n);
	
	//Nhap diem
	float diem[n];
	for(int i=0;i<n;i++){
		printf("Moi ban nhap diem sinh vien thu %d : ",i+1);
		scanf("%f",&diem[i]);
	}
	
	//In so luong
	printf("So luong sinh vien la : %d\n",n);
	
	//In ra diem thap nhat va cao nhat
	float minDiem = diem[0];
	float maxDiem = diem[0];
	for(int i=1;i<n;i++){
	  if(diem[i]<minDiem){
	  	minDiem = diem[i];
	  }
	  if(diem[i]>maxDiem){
	  	maxDiem = diem[i];
	  }
	}
	printf("Diem cao nhat la : %.2f\n",maxDiem);
	printf("Diem thap nhat la : %.2f\n",minDiem);
	
	//Co sinh vien nao dc 10 khong
	int check = 0;
	for(int i=0;i<n;i++){
		if(diem[i]==10){
			check =1;
			break;
		}
	}
	if(check == 1){
		printf("Co sinh vien co diem 10\n");
	}else{
		printf("Khong co sinh vien co diem 10\n");
	}
	
	//Xuat theo giam dan
	// 0 1 2 3 4 5
	printf("Diem sau khi duoc sap sep la : \n");
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
		 if(diem[i]<diem[j]){
		 	//Hoan doi
		 	float temp = diem[i];// temp=diem[i] - diem[i]=diem[i] - diem[j]=diem[j]
		 	diem[i] = diem[j];// temp=diem[i] - diem[i]=diem[j] - diem[j]=diem[j]
		 	diem[j] = temp;// temp=diem[i] - diem[i]=diem[j] - diem[j]=temp=diem[i]
		 }	
		}
		printf("Diem %.2f\n",diem[i]);
	}
}
int main(){
	while(true){
		int chon;
		printf("\n\n-----MENU-----\n");
		printf("1, Thong tin thu cung\n");
		printf("2, Thong tin chuc vu nhan vien\n");
		printf("3, Diem mon Tieng Anh\n");
		printf("4, Thoat\n");
		printf("Moi ban chon mot chuc nang (1-4) : ");
		scanf("%d",&chon);
		fflush(stdin);
		
		switch(chon){
			case 1 :
				printf("\n\nBan chon chuc nang 1\n");
				thuCung();
				break;
			case 2 :
				printf("\n\nBan chon chuc nang 2\n");
				chucVu();
				break;
			case 3 :
				printf("\n\nBan chon chuc nang 3\n");
				tiengAnh();
				break;
			case 4 :
				printf("Xin chao va hen gap lai");				
				break;
			default :
				printf("Khong co chuc nang moi ban chon lai !");
		}
	}
} 
