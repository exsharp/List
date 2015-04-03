#include <iostream>
using namespace std;

#include "list.h"

int main()
{
	List list;
	int num, in;

	if (InitList(list))
		cout << "InitList ���Գɹ�" << endl;

	cout << "����Ԥ�����Ԫ�ظ���:"<<endl;
	cin >> num;
	cout << "����������:" << endl;
	for (int i = 0; i < num; i++){
		//cin >> in;
		//ListInsert(list, i + 1, in);
		ListInsert(list, i + 1, i + 1);
	}
	while (1){
		cout << endl;
		cout << "��ʾ������������0." << endl;
		cout << "����ListDelete����1." << endl;
		cout << "����ListInsert����2." << endl;
		cout << "����LocateElem����3." << endl;
		cout << "����GetElem����4." << endl;
		cout << "����ListEmpty����5." << endl;
		cout << "����ClearList����6." << endl;
		cout << "����DestroyList����7" << endl;
		cout << "���������˳�����" << endl;
		cin >> in;
		switch (in)
		{
		case 0:
			system("cls");
			cout << "����Ԫ������:" << endl;
			for (int len = 0; len < ListLength(list); len++){
				if (GetElem(list, len+1, num))
					cout << num<<"  ";
				else{
					cout << "something unexpected happened" << endl;
					break;
				}
			}
			cout << endl;
			break;
		case 1:
			//ListDelete
			system("cls");
			cout << "������Ҫɾ����Ԫ�ص�λ��:" << endl;
			cin >> in;
			int getNum;
			if (ListDelete(list, in, getNum)){
				cout << "ɾ���ɹ�" << endl;
				cout << "��ɾ��������:" << getNum<< endl;
			}else{
				cout << "ɾ��ʧ��" << endl;
			}
			break;
		case 2:
			//ListInsert
			system("cls");
			cout << "������Ҫ�����Ԫ��:" << endl;
			cin >> num;
			cout << "������Ҫ�����λ��:" << endl;
			cin >> in;
			if (ListInsert(list, in, num)){
				cout << "����ɹ�" << endl;
			} else {
				cout << "����ʧ��" << endl;
			}
			break;
		case 3:
			//LocateElem
			//��Ԫ���ظ������в�ͨ
			system("cls");
			cout << "������Ҫ��ѯλ�õ�Ԫ��:" << endl;
			cin >> in;
			num = LocateElem(list, in);
			if (-1 == num){
				cout << "δ�ҵ���Ԫ��" << endl;
			}
			else{
				cout << "��Ԫ������λ��Ϊ:" << num << endl;
			}
			break;
		case 4:
			//GetElem
			system("cls");
			cout << "����Ҫ��ȡ��Ԫ��λ��" << endl;
			cin >> in;
			if (GetElem(list, in, num)){
				cout << "���ҳɹ�" << endl;
				cout << "��" << in << "��λ�õ�����:" << num << endl;
			}
			else{
				cout << "something unexpected happened" << endl;
			}
			break;
		case 5:
			//ListEmpty
			system("cls");
			cout << "��������Ԫ�أ���return true" << endl;
			if (ListEmpty(list)){
				cout << "List Ϊ��" << endl;
			}
			else{
				cout << "List��Ϊ��" << endl;
			}
			break;
		case 6:
			//ClarList
			system("cls");
			cout << "ȷ��Ҫ���list?" << endl;
			cout << "����1ȷ��" << endl;
			cin >> in;
			if (1 == in){
				ClearList(list);
			}
			cout << "��ճɹ�" << endl;
			break;
		case 7:
			//DestroyList
			system("cls");
			cout << "ȷ��Ҫ���list?" << endl;
			cout << "����1ȷ��" << endl;
			cin >> in;
			if (1 == in){
				DestroyList(list);
			}
			cout << "ɾ���ɹ�" << endl;
			break;
		default:
			break;
		}
	}
	system("pause");
}