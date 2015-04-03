#include <iostream>
using namespace std;

#include "list.h"

int main()
{
	List list;
	int num, in;

	if (InitList(list))
		cout << "InitList 测试成功" << endl;

	cout << "输入预输入的元素个数:"<<endl;
	cin >> num;
	cout << "请输入数据:" << endl;
	for (int i = 0; i < num; i++){
		//cin >> in;
		//ListInsert(list, i + 1, in);
		ListInsert(list, i + 1, i + 1);
	}
	while (1){
		cout << endl;
		cout << "显示所有数据输入0." << endl;
		cout << "测试ListDelete输入1." << endl;
		cout << "测试ListInsert输入2." << endl;
		cout << "测试LocateElem输入3." << endl;
		cout << "测试GetElem输入4." << endl;
		cout << "测试ListEmpty输入5." << endl;
		cout << "测试ClearList输入6." << endl;
		cout << "测试DestroyList输入7" << endl;
		cout << "按其它键退出程序" << endl;
		cin >> in;
		switch (in)
		{
		case 0:
			system("cls");
			cout << "所有元素如下:" << endl;
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
			cout << "输入你要删除的元素的位置:" << endl;
			cin >> in;
			int getNum;
			if (ListDelete(list, in, getNum)){
				cout << "删除成功" << endl;
				cout << "被删除的数是:" << getNum<< endl;
			}else{
				cout << "删除失败" << endl;
			}
			break;
		case 2:
			//ListInsert
			system("cls");
			cout << "输入你要插入的元素:" << endl;
			cin >> num;
			cout << "输入你要插入的位置:" << endl;
			cin >> in;
			if (ListInsert(list, in, num)){
				cout << "插入成功" << endl;
			} else {
				cout << "插入失败" << endl;
			}
			break;
		case 3:
			//LocateElem
			//若元素重复，则行不通
			system("cls");
			cout << "输入你要查询位置的元素:" << endl;
			cin >> in;
			num = LocateElem(list, in);
			if (-1 == num){
				cout << "未找到该元素" << endl;
			}
			else{
				cout << "该元素所在位置为:" << num << endl;
			}
			break;
		case 4:
			//GetElem
			system("cls");
			cout << "输入要获取的元素位置" << endl;
			cin >> in;
			if (GetElem(list, in, num)){
				cout << "查找成功" << endl;
				cout << "第" << in << "个位置的数是:" << num << endl;
			}
			else{
				cout << "something unexpected happened" << endl;
			}
			break;
		case 5:
			//ListEmpty
			system("cls");
			cout << "若不包含元素，则return true" << endl;
			if (ListEmpty(list)){
				cout << "List 为空" << endl;
			}
			else{
				cout << "List不为空" << endl;
			}
			break;
		case 6:
			//ClarList
			system("cls");
			cout << "确定要清空list?" << endl;
			cout << "输入1确定" << endl;
			cin >> in;
			if (1 == in){
				ClearList(list);
			}
			cout << "清空成功" << endl;
			break;
		case 7:
			//DestroyList
			system("cls");
			cout << "确定要清空list?" << endl;
			cout << "输入1确定" << endl;
			cin >> in;
			if (1 == in){
				DestroyList(list);
			}
			cout << "删除成功" << endl;
			break;
		default:
			break;
		}
	}
	system("pause");
}