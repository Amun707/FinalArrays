#include<iostream>
#include<cstdlib>
#include<ctime>


int main() {
	system("chcp 1251>nul");

	//������ 1
	std::cout << "������1.\n ����������� ������.\n";
	const int size1 = 10;
	int arr1[size1];
	srand(time(NULL));
	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % (10 + 1 - 1) + 1;//[1....10]
		std::cout << arr1[i] << ' ';
	}
	std::cout << std::endl;

	//����������� ����������
	for (int i = 5 - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
			if (arr1[j] > arr1[j + 1])
				std::swap(arr1[j], arr1[j + 1]);

	std::cout << "�������� ������:\n";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ' ';
	std::cout<<"\n\n";





	return 0;
}