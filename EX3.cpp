#include <iostream>
#include <string>
using namespace std;

struct Song {
    string title;
    Song* prev;
    Song* next;

    Song(string t) {
        title = t;
        prev = nullptr;
        next = nullptr;
    }
};

class Playlist {
private:
    Song* head;
    Song* tail;
    Song* current;

public:
    Playlist() {
        head = nullptr;
        tail = nullptr;
        current = nullptr;
    }

    // Add a song
    void addSong(string title) {
        Song* newSong = new Song(title);

        if (head == nullptr) {
            head = tail = current = newSong;
        } else {
            tail->next = newSong;
            newSong->prev = tail;
            tail = newSong;
        }

        cout << "Song added: " << title << endl;
    }

    // Move forward
    void nextSong() {
        if (current == nullptr) {
            cout << "Playlist is empty.\n";
        }
        else if (current->next == nullptr) {
            cout << "Already at the last song.\n";
        }
        else {
            current = current->next;
            cout << "Playing: " << current->title << endl;
        }
    }

    // Move backward
    void previousSong() {
        if (current == nullptr) {
            cout << "Playlist is empty.\n";
        }
        else if (current->prev == nullptr) {
            cout << "Already at the first song.\n";
        }
        else {
            current = current->prev;
            cout << "Playing: " << current->title << endl;
        }
    }

    // Display forward
    void displayForward() {
        Song* temp = head;

        cout << "\nPlaylist Forward:\n";

        while (temp != nullptr) {
            if (temp == current)
                cout << "-> ";

            cout << temp->title << endl;
            temp = temp->next;
        }
    }

    // Display backward
    void displayBackward() {
        Song* temp = tail;

        cout << "\nPlaylist Backward:\n";

        while (temp != nullptr) {
            if (temp == current)
                cout << "-> ";

            cout << temp->title << endl;
            temp = temp->prev;
        }
    }

    // Show current song
    void showCurrent() {
        if (current == nullptr)
            cout << "No song is currently playing.\n";
        else
            cout << "Currently playing: " << current->title << endl;
    }

    // Destructor
    ~Playlist() {
        Song* temp = head;

        while (temp != nullptr) {
            Song* next = temp->next;
            delete temp;
            temp = next;
        }
    }
};

int main() {
    Playlist playlist;

    playlist.addSong("Shape of You");
    playlist.addSong("Blinding Lights");
    playlist.addSong("Believer");
    playlist.addSong("Perfect");

    playlist.displayForward();

    playlist.showCurrent();

    playlist.nextSong();
    playlist.nextSong();

    playlist.previousSong();

    playlist.displayForward();
    playlist.displayBackward();

    return 0;
}