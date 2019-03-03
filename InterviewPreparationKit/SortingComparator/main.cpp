/**
 * HackerRank IPK Sorting Sorting:Comparator
 * main.cpp
 * Purpose: To compare given objects in particular fashion.
 *
 * Note: My own work is only the static int comparator() function
 *      rest of code is from HackerRank site.
 *
 * @author  Szymon Czapracki
 * @version 1.0 13/01/2018
 */
#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>

/** Player structure
 * @member1 player score
 * @member2 player name
 */
struct Player {
    int score;
    std::string name;
};

/** Class with compare method */
class Checker {
public:

    /** Compare method
     * @param1 player 1
     * @param2 player 2
     * @return 0 if comparing values are equal
     *         1 if player 1 > player 2 (values)
     *        -1 if player 1 < player 2 (values)
     */
    static int comparator (Player a, Player b) {
        if (a.score == b.score) {
            if (a.name < b.name) {
                return 1;
            } else if (a.name == b.name) {
                return 0;
            } else if (a.name > b.name) {
                return -1;
            }
        } else if (a.score != b.score) {
            if (a.score > b.score) {
                return 1;
            } else if (a.score == b.score) {
                return 0;
            } else if (a.score < b.score) {
                return -1;
            }
        }
        return 0;
    }
};

/** Compare function
 * @param1 player 1
 * @param2 player 2
 * @return true if player 1 > player 2
 *        false  if player 1 < player 2
 */
bool compare(Player a, Player b) {

    if(Checker::comparator(a,b) == -1) {
        return false;
    }

    return true;
}

/** Input handling and general options */
int main()
{
    int n;
    std::cin >> n;
    std::vector< Player > players;
    std::string name;
    int score;

    for(int i = 0; i < n; i++){
        std::cin >> name >> score;
        Player player;
        player.name = name, player.score = score;
        players.push_back(player);
    }

    sort(players.begin(), players.end(), compare);

    for(int i = 0; i < players.size(); i++) {
        std::cout << players[i].name << " " << players[i].score << std::endl;
    }

    return 0;
}