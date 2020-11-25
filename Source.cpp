#include <iostream>
#include <cmath>
#include <time.h> 
using namespace std;
/*
int main() {
	int j = 0;
	j++;
	j = j + 1;
	j--;
	j = j - 1;

	for (int i = 0; i < 9; i++) 
	{
		cout << i << " ";
	}

	//int n = 1, res, res2;
	while (true)
	{
		//res = 3 * (n * n * n * n) - 730 * n;
		//res2 = pow(2.78, n) - 1000 * log10(n);
        //if (res > 5)
		//{ 
		//	break;
		//}
		if (res2 > 10) {
			break;
		}
		//cout << "n =" << n << ", res =" << res << endl;
		//cout << "n =" << n << ", res =" << res2 << endl;
		//cout << "n =" << n << ", res =" << res << endl;
		n++;
	}
	//cout << "n =" << n << ", res =" << res << endl;
	//cout << "n =" << n << ", res =" << res2 << endl;
	

	system("pause");
	return 0;
}
{
	int num, sum = 0;
	cout << "Input numbers to sum up: " << endl;

	whilr(true) {

	}



	return 0;
}

*/

/*
int main()
{
	int num, sum = 0;
	cout << "Input numbers to sum up:" << endl;

	while (true)
	{
		cin >> num;
		if (num == 0) {
			break;
		}
		sum += num;
	}


	cout << "Sum = " << sum << endl; 
	return 0;


} */

/*
int main()
{
	srand(time(NULL));

	int randNum, num;
	randNum = rand();
	randNum = randNum % 100; // получили чило от 0 до 99
	while (true)
	{
		cin >> num;
		if (num == randNum) {
			cout << "You win!" << endl; 
			break; 
		}
		else if (num > randNum) {
			cout << "You num is greater" << endl;
		}
		else if(num < randNum) {
			cout << "Yor num is lesser" << endl;
		}
	}



	return 0;
}*/

/*
int main()
{
	int num, fact = 1;
	cout << "Input num to calc factorial: " << endl;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		fact *= i;

	}
	cout << "Factorial = " << fact << endl;

	return 0;
}*/

/*
int main() 
{
	double a, b, h, x, y;
	cin >> a >> b >> h; 
	int n = (b - a) / h + 1;
	for (int i = 0; i < n; i++)
	{
		x = a + i * h;
		y = sqrt(1 + 2 * x + 3 * x * x * x);
		cout << "x =" << x << ", y = " << y << endl;

	}




	return 0; 
}*/

/*
int main()
{
	double res = 0;
	for (int k = 0; k <= 100; k++) {
		//res += pow(-1, k + 1) * 1 / (2 * k - 1);
		if (k % 2 != 0) {
			res += 1.0 / (2 * k - 1);
		}
		else {
			res -= 1.0 / (2 * k - 1);
		}
	}
	cout << "Res loop = " << res << endl;
	cout << "Res = " << 3.14 / 4 << endl;

	return 0;
}*/

/*
int main()
{
	double res = 0;
	for (int k = 0; k <= 100; k++)
	{
		res += 1 / (k * k);
	}
	cout << "Res loop = " << res << endl;

	return 0;
}*/

int fact(int n);

 int  main(){
	double res = 0;
	double x = 0.25;
	for (int n = 0; n <= 10; n++)
	{
		int f = fact(2 * n + 1);
		//res += pow(-1, k + 1) * 1 / (2 * k - 1);
		if (n % 2 == 0) {
			res += pow(x, 2 * n + 1) / f;
		}
		else {
			res -= pow(x, 2 * n + 1) / f;
		}
		cout << "Res loop = " << res << endl;
		cout << "Res = " << sin(x) << endl;

	}	return 0;
}
 

 int fact(int n)
 {
	 int f = 1;
	 for (int i = 1; i <= n; i++)
	 {
		 f *= i;
	 }
	 return f;
 }
