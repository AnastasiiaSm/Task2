#include <iostream>

//������� 1
//������� 4:
//�������� �������� �� ������� ����� n-�� �������� �������. ������ ������� ������ ����������� ������.

void deleteFromMas(int* source,int n, int size) {
	for (int i = n-1; i < size-1; i++) {
		source[i] = source[i+1];
	}
	source[size-1] = 0;
	for (int i = 0; i < size; i++) {
		std::cout << source[i] << " ";
	}
}

//������� 2

void test(int n, int size) {
			if (size < n || n<=0 || size <=0) {
		std::cout << "������������ ������";
		exit(0);
	}
}

int main() {
	int a,b;
	std::cout << "������� ������ �������:";
	std::cin >> a;
	std::cout << "������� �������, ������� ����� �������:";
	std::cin >> b;
	test (b, a);
	int arr[a];
	std::cout << "������� ������:" << std::endl;
	for (int i = 0; i < a; i++) {
		std::cin >> arr[i];
	}
	deleteFromMas(arr, b, a);
	return 0;
}
