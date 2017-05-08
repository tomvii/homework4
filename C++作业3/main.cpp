#include"calcu.h"
using namespace std;
int main(int argc, char *argv[])
{
	int u,z;
	char *p = argv[1];
	char *p2;
	p2 = argv[2];
	int total;
	total = fileread(p);
	boundary();
	u = test(total,p2);
	z = total - u;
	print(p2,u,z);
	system("pause");
	return 0;
}
