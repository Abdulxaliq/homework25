#include <iostream>
#include <list>
#include <cstdlib>
#include <ctime>
#include <iomanip> 

using namespace std;

//1-ci
//template <typename T>
//void fillListRandom(list<T>& lst, int size, T min, T max) {
//    srand(time(0));
//    for (int i = 0; i < size; ++i) {
//        T randomValue = min + rand() % (max - min + 1);
//        lst.push_back(randomValue);
//    }
//}
//template <typename T>
//void printList(const list<T>& lst) {
//    for (const auto& value : lst) {
//        cout << value << " ";
//    }
//    cout << endl;
//}

//2-ci
//template <typename T>
//void printList(const list<T>& lst) {
//    for (const auto& value : lst) {
//        cout << value << " ";
//    }
//    cout << endl;
//}


//4-cu
//template <typename T>
//int findElementIndex(const list<T>& lst, const T& target) {
//    int index = 0;
//    for (const auto& value : lst) {
//        if (value == target) {
//            return index;
//        }
//        ++index;
//    }
//    return -1;
//}

int main()
{
    //1-ci
    //list<int> intList;
    //fillListRandom(intList, 10, 1, 100);
    //cout << "Int list: ";
    //printList(intList);
    //return 0;


    //2-ci
    //list<int> intList = { 1, 2, 3, 4, 5 };
    //cout << "Int list: ";
    //printList(intList);
    //list<char> charList = { 'a', 'b', 'c', 'd' };
    //cout << "Char list: ";
    //printList(charList);
    //return 0;


    //4-cu
    //list<int> myList = { 10, 20, 30, 40, 50 };
    //int target = 30;
    //int index = findElementIndex(myList, target);
    //if (index != -1) cout << "Element " << target << " tapildi, indeksi: " << index << endl;
    //else cout << "Element " << target << " tapilmadi." << endl;


    //5-ci
    //srand(time(0));
    //const int rounds = 5;
    //int player1Total = 0, player2Total = 0;
    //cout << "Zer oyunu basliyor!" << endl;
    //for (int i = 0; i < rounds; ++i)
    //{ 
    //    int player1Roll = (rand() % 6) + 1; 
    //    int player2Roll = (rand() % 6) + 1;

    //    player1Total += player1Roll;
    //    player2Total += player2Roll;

    //    cout << "Round " << (i + 1) << ": Komputer " << player1Roll
    //        << ",istifadeci " << player2Roll << endl;
    //}
    //double player1Avg = player1Total / 5.0;   
    //double player2Avg = player2Total / 5.0;   
    //cout << fixed << setprecision(1); 
    //cout << "\nNETİCE\n";
    //cout << "ORTALAMA: Komputer = " << player1Avg << ", istifadeci = " << player2Avg << endl;
    //cout << "TOPLAM: Komputer = " << player1Total << ", istifadeci = " << player2Total << endl;
    //if (player1Total > player2Total) cout << "QAZANAN: Kompuetr" << endl;
    //else if (player2Total > player1Total) cout << "QAZANAN: istifadeci" << endl;
    //else cout << "Beraberlik!" << endl;

    //return 0;

}