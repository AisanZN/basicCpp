/***
 * تمرین
 * 
 * یه برنامه بنویس که از کاربر مقدار عرض و طول را بگیرد و محیط و مساحت را محاسبه کند
 * 
 * خلاقیت شما با خوشحالی ما رابطه مستقیم دارد.
 */

 
 #include<iostream>
 using namespace std;
int main()
{
 float length,width;
 cout<<"enterlength :";
 cin>>length;
 cout<<"enter width :";
 cin>>width;
 float s = length*width;
 float p = 2*(length+width);
 cout<<"s ="<<s<<endl;
 cout<<"p ="<<p<<endl;
 return 0;
}

