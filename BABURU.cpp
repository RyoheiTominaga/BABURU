// BABURU.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<ctime>
using namespace std;
void ShowArray(int* array,int size);
void BreakArray(int* array);
int main()
{
	//バブルソートテスト用-----------------------------------

	/*const int E = 5;
	int change = 0;
	int a[E] = { 4787,51,412,812,45 };
	for (int i = 0;i != E-1;++i) {
		for (int j = 0;E-j!=0;++j) {
			if (j + 1 < E) {
				if (a[j] > a[j + 1]) {
					change = a[j];
					a[j] = a[j + 1];
					a[j + 1] = change;
				}
			}
			cout << a[j]<<',';
		}
		cout << "\n";

	}-------------------------------------------------*/

	int* array;
	int size;
	cout << "数字数を入力してください>";
	cin >> size;
	array = new int[size];

	ShowArray(array, size);
	BreakArray(array);
}
void ShowArray(int* array,int size) {

	srand((unsigned int)time(NULL));
	for (int i = 0;i < size;++i)//0から99で初期化
	{
		array[i] = rand() % 100;
		cout << array[i] << ',';
	}
	int change = 0;
	cout << "\nバブルソート開始します" << endl;
	for (int i = 0;i < size;++i) {

		for (int j = 0;j < size ;++j) {
			if (j + 1 < size) {
				if (array[j] > array[j + 1]) {
					change = array[j];
					array[j] = array[j + 1];
					array[j + 1] = change;
				}
			}
			cout << array[j] << ',';
		}
		cout << endl;
	}
}
void BreakArray(int *array) //解放
{
		delete[] array;
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
