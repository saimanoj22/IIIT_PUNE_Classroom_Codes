#include<iostream>
#include<cstring>
using namespace std;

class Amazon_music{
    public:
        string singer_name, album_name;
        int no_songs, playtime;
        Amazon_music(){
            cout << "Enter singer name : ";
            cin >> singer_name;
            cout << "Enter album name : ";
            cin >> album_name;
            cout << "Enter number of songs :";
            cin >> no_songs;
            cout << "Enter playtime in minutes : ";
            cin >> playtime;
        }
        virtual void display(){
            cout << "Singer name : " <<  singer_name << endl;
            cout << "Album name : " <<  album_name << endl;
            cout << "Number of songs :" <<  no_songs << endl;
            cout << "Playtime in minutes : " <<  playtime << endl;
        }
        virtual ~Amazon_music(){
            cout << "\nAmazon_music destructor called.....\n";
        };
};

class Music_info : public Amazon_music{
    string genre;
    public:
        Music_info(){
            cout << "Enter genre :";
            cin >> genre;
        }
        virtual void display(){
            Amazon_music::display();
            cout << "Genre : " << genre << endl;
        }
        ~Music_info(){
            cout << "\nMusic_info desturctor called.....\n";
        };
};

int main(){
    Amazon_music a, *p1, *p2;
    Music_info m;
    cout << "---------------------------------------" << endl;
    a.display();
    cout << "---------------------------------------" << endl;
    m.display();
    cout << "---------------------------------------" << endl;
    p1 = &a;
    p1->display();
    cout << "---------------------------------------" << endl;
    p2 = &m;
    p2->display();
    cout << "---------------------------------------" << endl;

    Amazon_music *p = new Music_info(m);
    delete p;
    cout << "\nObject of Music_info class is deleted.\n" << endl;
    return 0;
}