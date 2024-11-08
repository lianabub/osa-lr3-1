g namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    int a, b, c, D, x1, x2;

    cout << "Введите коофиценты ";
    cin >> a >> b >> c;
    D = b * b - (4 * a * c);
    if (D < 0)
    {
        cout << "Нет корней";
    }
    else if (D = 0)
    {
        x1 = -b / 2 * a;
        cout << "Существует только один корень" << x1;
    }
    else
    {
        x1 = (-b + sqrt(D)) / 2 * a;
        x2 = (-b - sqrt(D)) / 2 * a;
        cout << "Корни этого уравнения " << x1 << x2;
    }
    }
