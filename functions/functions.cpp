// functions.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

/*
int _array[5];
string Name;
int flag;


void Lenta() {
    string const _name = "Lenta";
    for (int i = 0; i < 5; i++) {
        cout << "Input random price" << endl;
        cin >> _array[i];
    }
    Name = _name;
    int flag = 1;
}

void Petyrochka() {
    string const _name = "Petyrochka";
    for (int i = 0; i < 5; i++) {
        cout << "Input random price" << endl;
        cin >> _array[i];
    }
    Name = _name;
    int flag = 2;
}

void Magnit() {
    string const _name = "Magnit";
    for (int i = 0; i < 5; i++) {
        cout << "Input random price" << endl;
        cin >> _array[i];
    }
    Name = _name;
    int flag = 3;
}
*/
/*
struct LentaProducts 
{
    double Milk = , banana = , bread = , cookies = , candies = ,meat = ;
    double cucamber =, tomato = , potato = , water_5L = ;

};*/




int Lenta() {
    const int size = 4;
    string array2[size];

    int array3[size];

    const int s = 10;
    const int s2 = 2;
    string arr[s][s2] = {
        {"Milk", "65.5"},
        {"banana", "55.5"},
        {"bread", "35.0"},
        {"cookies", "85.3"} ,
        {"candies", "93.8"},
        {"meat", "250.0"},
        {"cucamber", "99.9"},
        {"tomato", "89.5" },
        {"potato", "50.0"},
        {"water_5L", "75.6"},
    };

    string arr2[s] = { "Milk\t\t1","banana\t\t2", "bread\t\t3", "cookies\t\t4", "candies\t\t5", "meat\t\t6", "cucamber\t7", "tomato\t\t8", "potato\t\t9","water_5L\t10" };

    for (int i = 0; i < s; i++) {
        cout << arr2[i] << endl;
    } 
    //enum products {'Молоко' 1, "Хлеб", "Бананы", "Печенье", "Мясо", "Огурцы", "Помидоры", "Картофель", "Вода(5л)", "Конфеты" };
    cout << "\nВыберите 4 продукта из списка (выберите число): " << endl;
    
    int b;
    int c = 2;
    string _arr[size][2];
    
    for (int i = 0; i < size; i++) {
        cout << i + 1 << "-й продукт из списка: " << endl;
        cin >> array3[i];
        b = array3[i] - 1;
        for (int j = 0; j < c; j++) {
            _arr[i][j] = arr[b][j];
        }
        cout << "\n";
    }
    cout << endl;
    string price;
    float num2;
    float sum = 0;
    float credits;
    cout << "\n\tВаш чек: \n\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < c; j++) {
            cout << _arr[i][j] << "\t";
            cout << "\n";         
        }
        price = _arr[i][1];
        num2 = atof(price.c_str());
        sum += num2;
        credits = sum + sum * 0.19;
        //cout << num2;
        cout << endl;
    }
    cout << "Сумма покупки: " << sum << endl;
    cout << endl;
    cout << "При 19%- тной ставки кредита Вы должны оплатить: " << credits << "\n\n";

    return 0;
}


int Petyrochka() {
    const int size = 4;
    string array2[size];

    int array3[size];

    const int s = 10;
    const int s2 = 2;
    string arr[s][s2] = {
        {"Milk", "75.0"},
        {"banana", "65.5"},
        {"bread", "55.0"},
        {"cookies", "60.3"} ,
        {"candies", "120.5"},
        {"meat", "270.0"},
        {"cucamber", "85.9"},
        {" tomato", "72.5" },
        {"potato", "48.9"},
        {"water_5L", "95.6"},
    };

    string arr2[s] = { "Milk - 1","banana - 2", "bread - 3", "cookies - 4", "candies - 5", "meat - 6", "cucamber - 7", "tomato - 8", "potato - 9","water_5L - 10" };

    for (int i = 0; i < s; i++) {
        cout << arr2[i] << endl;
    }

    cout << "Выберите 4 продукта из списка (выберите число): " << endl;

    int b;
    int c = 2;
    string _arr[size][2];

    for (int i = 0; i < size; i++) {
        cout << i + 1 << "-й продукт из списка: " << endl;
        cin >> array3[i];
        b = array3[i] - 1;
        for (int j = 0; j < c; j++) {
            _arr[i][j] = arr[b][j];
        }
        cout << "\n\n";
    }
    string price;
    float num2;
    float sum2 = 0;
    float credits;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < c; j++) {
            cout << _arr[i][j] << "\t";
            cout << "\n\n";
        }
        price = _arr[i][1];
        num2 = atof(price.c_str());
        sum2 += num2;
        credits = sum2 + sum2 * 0.19;
        cout << endl;
    }
    cout << "Сумма покупки: " << sum2 << endl;
    cout << endl;
    cout << "При 19%- тной ставки кредита Вы должны оплатить: " << credits << "\n\n";
    return 0;
}



int Magnit() {
    const int size = 4;
    string array2[size];

    int array3[size];

    const int s = 10;
    const int s2 = 2;
    string arr[s][s2] = {
        {"Milk", "60.5"},
        {"banana", "49.5"},
        {"bread", "30.0"},
        {"cookies", "89.3"} ,
        {"candies", "99.8"},
        {"meat", "265.0"},
        {"cucamber", "75.9"},
        {" tomato", "86.5" },
        {"potato", "48.9"},
        {"water_5L", "79.9"},
    };

    string arr2[s] = { "Milk - 1","banana - 2", "bread - 3", "cookies - 4", "candies - 5", "meat - 6", "cucamber - 7", "tomato - 8", "potato - 9","water_5L - 10" };

    for (int i = 0; i < s; i++) {
        cout << arr2[i] << endl;
    }
    //enum products {'Молоко' 1, "Хлеб", "Бананы", "Печенье", "Мясо", "Огурцы", "Помидоры", "Картофель", "Вода(5л)", "Конфеты" };
    cout << "Выберите 4 продукта из списка (выберите число): " << endl;

    int b;
    int c = 2;
    string _arr[size][2];

    for (int i = 0; i < size; i++) {
        cout << i + 1 << "-й продукт из списка: " << endl;
        cin >> array3[i];
        b = array3[i] - 1;
        for (int j = 0; j < c; j++) {
            _arr[i][j] = arr[b][j];
        }
        cout << "\n\n";
    }
    string price;
    float num2;
    float credits;
    float sum3 = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < c; j++) {
            cout << _arr[i][j] << "\t";
            cout << "\n\n";
        }
        price = _arr[i][1];
        num2 = atof(price.c_str());
        sum3 += num2;
        credits = sum3 + sum3 * 0.19;
        //cout << num2;
        cout << endl;
    }
    cout << "Сумма покупки: " << sum3 << endl;
    cout << endl;
    cout << "При 19%- тной ставки кредита Вы должны оплатить: " << credits << "\n\n";
    return 0;
}






int main()
{
    setlocale(LC_ALL, "ru");
    int shop;
    bool ans = true;

    do {
        cout << "В каком магазине вы хотели бы совершить покупки? \n" <<
            " 1 - Лента" <<
            " 2 - Пятерочка" <<
            " 3 - Магнит" << 
            " 4 - выход" << endl;

        cin >> shop;
        switch (shop) {
        case 1:
            Lenta();
            break;
        case 2:
            Petyrochka();
            break;
        case 3:
            Magnit();
            break;
        case 4:
            ans = false;
            break;
        }
    } while (ans = true);
    

    

    /*
    Lenta();
    cout << "Who Change: " << Name << endl;
    Petyrochka();
    cout << "Who Change: " << Name << endl;
    Magnit();
    cout << "Who Change: " << Name << endl;
    */
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
