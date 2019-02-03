#include "pch.h"
#include <iostream>

using namespace std;
int printf(int *a, int size) {
	for (int i = 0; i <= size ; i++)
		cout << a[i] << endl;
	return 0;
}
 int swap(int &a,int &b){
	 int temp = a;
	 a = b;
	 b = a;
	 return 1;
int sort(int *a, int size) {
	for (int i = size - 1; i >= 0;i--) {
		for(int j=0;j<i;j++){
			swap(a[j], a[j + 1]);
			}
		
		}

	}
	return 1;
}
int main()
{
	int n;
	cout << "请输入数组大小" << endl;
	cin >> n;
	int *a = new int[n];
	cout << "请输入数组成员" << endl;
	for (int i = 0; i <= n; i++) cin >> a[i];
	cout << "排序之前的顺序" << endl;
	printf(a, n);
	sort(a, n);
	cout << "排序后的顺序" << endl;
	printf(a, n);
	return 0;

	

}