#include <iostream>

using namespace std;




struct datos
{
	int l,w,h;
};
datos data[6];

void prepara(int l,int w,int h)
{
	data[0].l = l;
	data[0].w = w;
	data[0].h = h;

	data[1].l = l;
	data[1].w = h;
	data[1].h = w;
	

	data[2].l = h;
	data[2].w = l;
	data[2].h = w;
	

	data[3].l = h;
	data[3].w = w;
	data[3].h = l;
	data[4].l = w;
	data[4].w = l;
	data[4].h = h;
	data[5].l = w;
	data[5].w = h;
	data[5].h = l;
}
int main(int argc, char const *argv[])
{
	string cad[] = {"bad","good"};
	int N;
	int l,h,w;
	int ans = 0;
	cin >> N;
	int i = 1;
	while(N--)
	{
		ans = 0;
       cin >> l >> h >> w;
       prepara(l,h,w);
       for (int i = 0; i < 6; ++i)
       {
       	 if(data[i].l <= 20 && data[i].w <=20 && data[i].h <=20)
       	 {
       	 	ans= 1;
       	 	break;
       	 }
       }
       cout << "Case "<<i<<": "<<cad[ans]<<endl;

       i++;
	}
	return 0;
}