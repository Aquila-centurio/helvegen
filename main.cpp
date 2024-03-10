
#include <iostream>
#include <string>

using namespace std;

bool check(string name){
    char answer;
    cout << "Пройти турникет и охрану" <<'\n';
    cout << "аудитория "<< name << " верна?"<<'\n';
    cout << "Введите y или n"<<'\n';
    cin >> answer;
    if( answer == 'y') {
        cout << "Аудитория найдена";
        return true;
    }
    else return false;

}

int main(){
    cout << "Выход из дома"<<'\n';
    cout << "Идти прямо 1 км, до пересечения улиц Мира и Малышева"<<'\n';

    bool audit = false;
    while (audit != true){
        cout << "Идти к Теплофаку"<<'\n';
        if (check("T 106") == true) {audit = true;}

        cout << "идти в Радиофак."<<'\n';
        if(check("R 339") == true) {audit = true;}

        cout << "Иначе идти в ГУК"<<'\n';
        if(check("2 Римская") == true) {audit = true;}

        else {
            cout << "Смотри расписание"<<'\n';
            audit = true;
        }
     }
    return 0;
}
