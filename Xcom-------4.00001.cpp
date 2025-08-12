
#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
#include <mmsystem.h>

#pragma comment (lib, "Winmm.lib")

using namespace std;

int main()
{
PlaySound(TEXT("C:\\Users\\student-1\\source\\repos\\Xcom-------4.00001\\Xcom-------4.00001\\Ifekt1.wav"), NULL, SND_FILENAME | SND_ASYNC);
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    enum class Inventory1 { orudio1, orudio2 };

    string intemLib[] = { "Сковородка" ,"orudio2" };

    struct loc1 { // Создаем базовую инфу по локам 
        string name;
        vector<Inventory1> Inventory;
        string opis;


    };

    loc1 loc[4]; // Тут мы берем баз инфу по лока и создаем локации по баз инфе
    loc[0].name = { "Хол" };
    loc[0].opis = { "Когда вы входите в комнату, вас встречает уютный хол. На стенах висят картины и светильники, создающие теплую атмосферу. В центре стоит массивный деревянный стол с несколькими стульями, на нем разбросаны карты и старинные книги.\n В углу — уютный камин, из которого мягко пылает огонь, добавляя тепла и уюта. Рядом — шкаф с различными предметами и артефактами, а на полках — свечи и небольшие статуэтки. В воздухе пахнет древесиной и пряностями, создавая ощущение спокойствия."};
    loc[1].name = { "Кухня" };
    loc[1].opis = { "Когда вы входите на кухню, вас встречает уютное и функциональное пространство. По обеим сторонам расположены деревянные шкафы и полки, на которых стоят посуда, специи и кухонные принадлежности.\n В центре — просторная рабочая поверхность с раковиной и плитой. На столе — свежие фрукты, хлеб и чашки с горячим напитком. В углу стоит холодильник, а рядом — небольшой островок для приготовления пищи.\n В воздухе пахнет свежей выпечкой и ароматными специями, создавая ощущение домашнего уюта и готовности к вкусным приключениям.\n\n " };
    loc[2].name = { "Спальня" };
    loc[2].opis = { "Комната, в которую вы входите, погружена в приглушённый свет, создавая уютную и спокойную атмосферу. Нежно-голубые стены, обитые мягким текстилем, украшены картинами с изображениями лесных пейзажей, которые словно дышат живой природой.\n Прямо напротив входа стоит большая кровать с изголовьем, обитыми бархатной тканью, на которой аккуратно уложены мягкие подушки в тон общему цвету комнаты.\nПо обеим сторонам кровати расположены маленькие деревянные тумбочки, на одной из них стоит тихо тикающие часы, на второй – свеча в красивом подсвечнике, создающая теплый свет.\nВ углу — кресло - качалка с пледом, которое приглашает к уютному вечернему чтению.Рядом с ним – небольшой книжный шкаф, заполненный увлекательными произведениями.\nНа полу расстелен мягкий ковер, который приятно мягко поглощает шаги.Окно, обрамлённое плотными шторами, открывает вид на уединённый сад, где поют птицы, а летний дождик стучит по подоконнику.\nВ комнате стоит аромалампа, наполняющая воздух лёгким запахом лаванды, что способствует расслаблению после долгого дня.В углу комнаты, рядом с зеркалом, расположена небольшая комод с аккуратно расставленными туалетными принадлежностями.\nОсвещение мягкое и уютное, создающее идеальные условия для отдыха или спокойного уединения. Эта комната словно создана для того, чтобы забыть о заботах внешнего мира и насладиться моментом покоя.\n\n Куда пойдешь теперь?\n" };
    loc[3].name = { "Подвал" };
    loc[3].opis = { "В подвале, освещенном тусклым светом единственной лампочки, царила гнетущая атмосфера. Стены были покрыты пятнами от сырости, а пол устлан грязью и мусором. \nВ углу, на высоком стуле, сидел он — босс игры. Его фигура казалась внушительной, несмотря на тень, заслоняющую большую часть его лица.Он был одет в темный плащ, который обвевал его вокруг, создавая ощущение таинственности.\n В руке у него был мощный артефакт, источник его силы. На каждом шаге, который ты делал, ты ощущал, как напряжение растет, и в воздухе витало напряжение ожидающей битвы.\n\nТы готов?\n" };


    struct hero1 { // Наш герой и его баз инфа для сборки
        string name;
        int HP;
        int DM;
        int TD;
        string opis;
        string current;
        vector<Inventory1> Inventory;
    };
    hero1 user;

    hero1 hero; // Тут его собираем 
    cout << "Как тебя зовут?\n";
    cout << "\n";
    cin >> hero.name;
    PlaySound(TEXT("C:\\Users\\student-1\\source\\repos\\Xcom-------4.00001\\Xcom-------4.00001\\drow.wav"), NULL, SND_FILENAME);
    Sleep(1);
    cout << "\n";
    hero.opis = { "" };
    hero.HP = { 100 };
    hero.DM = { 5 };
    hero.TD = { 0 };
    hero.current = { "" };

    struct Boss_Gachi { // Базавая инфа по боссу 
        string name;
        int HP;
        int DM;
        string opis;
        string currentbossi;
    };

    Boss_Gachi boss1; // Наш первый босс для битвы и его тут собираем по шаблону 
    boss1.name = { "Степа" };
    boss1.HP = { 1000 };
    boss1.DM = { 20 };
    boss1.opis = { "You went down to the basement, the dim light from the only bulb illuminates the room. At the other end of the basement you do not clearly notice a silhouette. You wondered 'Hey, what is he doing in my basement?'..... Unexpectedly the bulb goes out, a tense song plays, you are covered in sweat. The light turns on again and the same silhouette is in the middle of the room. When you managed to make it out... You wondered who it was..." };
    boss1.currentbossi = { "Подвал" };


    struct Boss_Gachi2 { // Базавая инфа по боссу его тут собираем по шаблону 
        string name;
        int HP;
        int DM;
        string opis;
        string currentbossa;
    };

    Boss_Gachi2 boss2; // Второй секретный босс за 5 ошибок 
    boss2.name = { "Главный Game School" };
    boss2.HP = { 9999999 };
    boss2.DM = { 9999999 };
    boss2.opis = { "You went down to the basement, the dim light from the only bulb illuminates the room. At the other end of the basement you do not clearly notice a silhouette. You wondered 'Hey, what is he doing in my basement?'..... Unexpectedly the bulb goes out, a tense song plays, you are covered in sweat. The light turns on again and the same silhouette is in the middle of the room. When you managed to make it out... You wondered who it was..." };
    boss2.currentbossa = { "Подвал" };

 PlaySound(TEXT("C:\\Users\\student-1\\source\\repos\\Xcom-------4.00001\\Xcom-------4.00001\\krupnyiy-plan-ognya-v-kamine-v-komnate.wav"), NULL, SND_FILENAME | SND_ASYNC);
cout << hero.name << ", ты как обычно пришел домой с занятий по программированию С++, но когда ты заходишь в свой дом,он выглядит совсем иначе, чем как ты его помнишь. \n";
cout << "\n";
cout << loc[0].opis << "\n"; // Тут мы выводим инфу по первой локи
hero.current = "Хол";
cout << "\n";
for (int a = 0; a < 4; a++) { // Тут проверяем циклом все существующие локи и выводим их список консоль 
    cout << loc[a].name;
    cout << "\n";
}
string Attake;
string Zawita;
cout << "\n";
cout << "Куда пойдешь?\n";
cout << "\n";
bool xod = true; // Посуте правда и лож как Java но тут ее используем что бы потом активировать цикл работы кода игры
int f = 0;

while (xod == true) { // Вот тут как раз и указываем , пока правда цикл работает , можем в любой момент в коде поставить лож и цикл завершиться 

    string hewloc1;// Не дающая вещь покинуть подвал , можно изменить
    string hewloc; // То что позволяет передвигаться по локам 
    cin >> hewloc;
    if (hero.current == hewloc) { // первая переменная сравнющая где мы сейчас находиммся и куда хотим пойти 
        cout << "\n";
        cout << "Нет!\n";
        cout << "\n";
        f += 1;
        if (f == 5) {
            cout << "Большая ошибка!\n";// Наказание для очень умного играка в дальнейшем
            cout << "\n";
            boss1.name = "Главный Game School\n";
            cout << "\n";
            boss1.DM = boss2.DM;
            boss1.HP = boss2.HP;
            boss1.opis = boss2.opis;
            hero.current = boss1.currentbossi;
        }
    }
    else // Локация с боссо с тест боевкой
        if (boss2.currentbossa == hero.current || boss1.currentbossi == hero.current) {
            PlaySound(TEXT("C:\\Users\\student-1\\source\\repos\\Xcom-------4.00001\\Xcom-------4.00001\\Final_Boss.wav"), NULL, SND_FILENAME | SND_ASYNC);
            cout << "\n";
            cout << boss1.opis << "\n";
            cout << "\n";
            cout << "Бой начинается!\n";
            cout << "\n";
            cout << boss1.name << "\n";
            cout << "\n";
            cout << "Готов?\n";
            hewloc = hewloc1;
            boss1.DM -= hero.TD;
            while (boss1.HP > 0) { // цикл при котором если хп босса больше 0 то мы пиздимся 
                if (hero.HP <= 0) {// тут мы умираем если ниже 00
                    cout << "Конец боя!!!\n";
                    cout << "\n";
                    xod = false;
                    PlaySound(NULL, 0, 0);
                    PlaySound(TEXT("C:\\Users\\student-1\\source\\repos\\Xcom-------4.00001\\Xcom-------4.00001\\Smert.wav"), NULL, SND_FILENAME | SND_ASYNC);

                }
                else
                    if (boss1.HP <= 0) {// а тут мы побеждаем
                        cout << "\n";
                        cout << "Ты победил босса\n";
                        cout << "\n";
                        cout << "А что дальше?\n";
                        hero.current = loc[0].name;
                        loc[3].name = "Not";
                    }
                cin >> hewloc1;
                if ("Ударить" == hewloc1) {// if нашей атаки
                    boss1.HP -= hero.DM;
                    hero.HP -= boss1.DM;
                    cout << "\n";
                    cout << boss1.HP << " " << "Хп босса\n";
                    cout << "\n";
                    cout << hero.HP << " " << "Твое хп\n";
                    cout << "\n";

                }
                else
                    if ("Защититься" == hewloc1) {// if нашей защиты .... такая конечно но все же 
                        hero.HP -= boss1.DM;
                        cout << "\n";
                        cout << hero.HP << " " << "Твое хп\n";
                        cout << "\n";
                    }
                cout <<"1." << "Ударить\n";
                cout <<"2." << "Защититься\n";
            }

        }
        else // Отвечает за переходы между локациями
            for (int i = 0; i < 4; i++) { // цикл запускающий проверку лок 
                if (hewloc == loc[i].name) { // тут сравниваем куда хотел пойти игрок и есть ли такая лока 
                    hero.current = hewloc; // если такая лока была то она записывается в инфу героя , куда мы перешли 
                    PlaySound(NULL, 0, 0);
                    PlaySound(TEXT("C:\\Users\\student-1\\source\\repos\\Xcom-------4.00001\\Xcom-------4.00001\\korotkiy-chtkiy-bodryiy-zvuk-shaga.wav"), NULL, SND_FILENAME );
                    PlaySound(TEXT("C:\\Users\\student-1\\source\\repos\\Xcom-------4.00001\\Xcom-------4.00001\\korotkiy-chtkiy-bodryiy-zvuk-shaga.wav"), NULL, SND_FILENAME );
                    PlaySound(TEXT("C:\\Users\\student-1\\source\\repos\\Xcom-------4.00001\\Xcom-------4.00001\\korotkiy-chtkiy-bodryiy-zvuk-shaga.wav"), NULL, SND_FILENAME );
                    cout << "\n";
                    cout << loc[i].opis;
                    cout << "\n";
                    
                }

            }

        
    if (hero.current == loc[1].name) { // Лока в которой можем взять оружие
        cout << "\n";
        cout << "Вы видите сковородку. Поднять?\n";
        cout << "\n";
        cout << "1." << "Да\n";
        cout << "2." << "Нет\n";
        cout << "\n";
        cin >> hewloc;
        cout << "\n";
        if ("Да" == hewloc) { // если согласится лока закроется 
            user.Inventory.push_back(Inventory1::orudio1); // Добовляет предмет в инвентарь
            cout << "\n";
            cout << "Вы подняли предмет '" << intemLib[(int)user.Inventory[0]]<<"'" << "\n";// выводит нам придмет
            cout << "\n";
            cout << "Вот что ты теперь можешь делать:\n";
            cout << "\n";
            cout << "1." << "Ивентарь\n";// три строчки это команды для игрока
            cout << "2." << "Бросить\n";
            cout << "3." << "Использовать\n";
            cout << "\n";
            Sleep(2000);
            cout << "Тебя выбрасывает со свистом в хол. Как только ты вылетил, дверь резко захлопывется. Куда ты пойдешь теперь?\n";
            cout << "\n";
            loc[1].name = "Not loc\n"; // меняет название локи
            hero.current = loc[0].name; // меняет место нахождение игрока
        }
        else
            if ("Нет" == hewloc) {
                cout << "\n";
                cout << "Куда пойдешь теперь?\n";
                cout << "\n";
            }
    }
    else
        if ("Кухня" == hewloc) {
            cout << "\n";
            cout << " Дверь заперта\n";
            cout << "\n";

        }
    if ("Бросить" == hewloc || "Бросить" == hewloc1) { // уничтожить оружие
        cout << "\n";
        cout << " Предмет уничтожен.\n";
        cout << "\n";
        user.Inventory.clear();
        hero.DM = 5;
        hero.TD = 0;


    }
    if ("Ивентарь" == hewloc || "Бросить" == hewloc1) { // посмотреть инвентрать игрока , если конечно имеется придметы.
        for (int i = 0; i < user.Inventory.size(); i++) {

            if (user.Inventory.size() > 0) {
                cout << "\n";
                cout << intemLib[(int)user.Inventory[0]];
                cout << "\n";
            }

        }
    }
    if ("Использовать" == hewloc || "Бросить" == hewloc1) { // использовать придмет с ивенторя
        cout << "\n";
        cout << " Если вы поднимали предмет то он использован.\n";
        cout << "\n";
        for (int i = 0; i < user.Inventory.size(); i++) {
            if (user.Inventory.size() > 0) {
                hero.TD = 10;
                hero.DM = 15;
            }

        }
    }
    if (hero.current == loc[0].name) {
        PlaySound(TEXT("C:\\Users\\student-1\\source\\repos\\Xcom-------4.00001\\Xcom-------4.00001\\krupnyiy-plan-ognya-v-kamine-v-komnate.wav"), NULL, SND_FILENAME | SND_ASYNC);
    }
}
}
