#include <stdio.h>
#include <math.h>
int main (){
	int ngay,thang,nam;
	int songay;
	int ngay1=ngay,thang1=thang,nam1=nam;
	printf ("Hay nhap ngay :");
	scanf ("%d",&ngay);
	printf ("Hay nhap thang:");
	scanf ("%d",&thang);
	printf ("Hay nhap nam:");
	scanf ("%d",&nam);
	// xac dinh so ngay trong thang
		switch(thang){
			case 4: case 6: case 9: case 11:
				songay=30;
				break;
			case 2: 
			songay = 28 + ((nam%4==0 && nam%100) || (nam%400==0));
            break;
//				if ((nam%4==0 && nam%100) || (nam%400==0)){
//                        songay=29;
//                    }
//                    else {
//                    	songay=28;
//                    }
//
//                    break;
            default :
            	songay=31;
		}
	// xac dinh ngay mai 
	ngay=(ngay%songay)+1;
	if (ngay==1){
		thang=(thang%12)+1;
	}
	printf ("Ngay mai:",ngay/thang/nam+(thang==1 && ngay==1));
	// xac dinh ngay hom qua 
	if (ngay1==1){
		switch (thang1-1){
			case 4: case 6: case 9: case 11:
				ngay1=30;
				break;
			case 2: 
			 	songay = 28 + ((nam%4==0 && nam%100) || (nam%400==0));
          		 break;
//				if ((nam1%4==0 && nam1%100) || (nam1%400==0)){
//                    	ngay1=29;
//                    }
//                    else {
//                    	ngay1=28;
//                    }
//
//                    break;
            default :
            	ngay1=31;
		}
		if (thang1==1){
			thang1=12;
			nam1--;
		}
		else {
			thang1--;
		}
	   	
	}
	else {
		ngay1--;
	}
	printf ("Ngay hom qua : ",ngay1/ thang1/nam1);
	
}
//#include<iostream>
//#include<stdio.h>
//#include<math.h>
//
//using namespace std;
//
////===chuong trinh chinh===
//int main()
//{
//    // Khai bao bien
//    int day, month, year, tg, day1, month1, year1;
//
//    // Nhap du lieu
//    cout<<"Nhap vao ngay: "; cin>>day; day1=day;
//    cout<<"Nhap vao thang: "; cin>>month; month1=month;
//    cout<<"Nhap vao nam: "; cin>>year; year1=year;
//
//    // Xac dinh so ngay trong thang
//    switch(month)
//    {
//        case 4:
//        case 6:
//        case 9:
//        case 11:
//            tg = 30;
//            break;
//        case 2:
//            tg = 28 + ((year%4==0 && year%100) || (year%400==0));
//            break;
//        default:
//            tg = 31;
//    }
//
//    // Hien thi ngay mai
//    day = (day%tg)+1;
//    if(day==1)
//    {
//        month = (month%12)+1;
//    }
//
//    cout<<"Ngay mai: "<<day<<"/"<<month<<"/"<<year+(month==1 && day==1);
//
//    // Hien thi ngay hom qua
//    if(day1==1)
//    {
//        switch(month1-1)
//        {
//            case 4:
//            case 6:
//            case 9:
//            case 11:
//                day1=30;
//                break;
//            case 2:
//                day1=28+((year1%4==0 && year1%100) || (year1%400==0));
//                break;
//            default:
//                day1=31;
//        }
//        if(month1==1)
//        {
//            month1=12;
//            year1--;
//        }
//        else
//        {
//            month1--;
//        }
//    }
//    else
//    {
//        day1--;
//    }
//
//    cout<<"\nHom qua: "<<day1<<"/"<<month1<<"/"<<year1;
//
//    cout<<endl;
//    return 0;
//}
////===dinh nghia ham===

