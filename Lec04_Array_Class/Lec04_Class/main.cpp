//#include "Complex.h"
//#include "SportsCar.h"
#include "Music.h"


int main()
{
	// music streaming service를 생성
	MusicStreamingService my_service("spotify");
	
	// add music to music streaming service
	my_service.addMusic("PolaroidLove", "ENHYPEN", "DIMENSION", 2022);
	my_service.addMusic("Ditto", "NewJeans", "ALBUM", 2023);
	my_service.addMusic("Attention", "NewJeans", "ALBUM", 2023);
	my_service.addMusic("CAKE", "ITZY", "ALBUM", 2023);
	my_service.addMusic("SundayMorning", "Maroon5", "ALBUM", 2023);
	my_service.addMusic("Sugar", "Maroon5", "ALBUM", 2015);
	// add by user
	// music 객체 선언 --> 사용자 입력받기 (cin 사용)
	// 입력받은 값을 선언한 music객체 멤버변수에 하나씩 채우기
	// 마지막으로 music객체 my_service의 music_list에 push_back()

	// search music by title 
	string music_title;
	cout << "Enter the Music Title: ";
	cin >> music_title;
	Music* result = my_service.searchByTitle(music_title);
	if (result != NULL) {
		cout << "Found: " << result->getTitle() << " by " << result->getArtist() << endl;
	}
	else {
		cout << "not found" << endl;
	}
	// search music by artist
	string artist_name;
	cout << "Enter the Artist Name: ";
	cin >> artist_name;
	vector<Music*> artist_result = my_service.searchByArtist(artist_name);
	if (artist_result.size() > 0) {
		cout << "Found " << artist_result.size() << " songs by " << artist_name << " : " << endl;
		for (int i = 0; i < artist_result.size(); i++) {
			cout << artist_result[i]->getTitle() << endl; 
		}

	}
	else {
		cout << "Not found" << endl;
	}
	return 0;
}