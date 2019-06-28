//Find Your Cat!
//Simple Adventure Game Coded by Violex Ming

#include <iostream>
#include <string>

using namespace std;

int main()
{
	bool cat = 0;
	bool key = 0;
	const int inventory_count = 2;
	string inventory[inventory_count] = {"nothing", "nothing"};
	int room = 1;
	
	cout << "Your cat has ran away and you've managed to track it to an abandoned house. \n";
	cout << "After much deliberation, you've gathered a small backpack that can only hold two things and the courage to go into the house and bring back your beloved pet. \n \n";
	cout << "You enter the house and the door slams shut behind you... guess you can't go out that way anymore.....\n\n";
	
	while ((key == 0 || cat ==0))
	{
		switch(room)
		{
			case 1:
				cout <<"There is a fishbone on the floor that points to the door that is north. To the east, there is another door. Which door do you choose? \n";
				cout <<"Enter 2 for the door facing north and 4 for the door on the east: ";
				cin >> room;
				break;
			case 2:
				cout <<"\nYou spot a fishbone on the floor that is pointing to the door on east. Do you want to enter that door?\n";
				cout << "Enter 3 for the door the fishbone points to or 1 to go south: ";
				cin >> room;
				break;
			case 3:
				cout <<"\n You see another fishbone on the floor! It's pointing to the door thats north! You also see a door that is east and another door that's on the west wall'.\n";
				cout <<"Which door do you want to go through? Enter 6 for the north door, 5 for the door on the east wall, or 2 for the door on the west wall: ";
				cin >> room;
				break;
			case 4:
				cout <<"\nThe room is empty... There are no doors... \n";
				cout <<"But wait! You see something shining on the floor in the corner....\n";
				cout <<"Upon closer inspection, you see that it's some kind of.... key? Do you want to put the key in your bag?\n";
				cout <<"Enter 0 for no and 1 for yes: ";
				cin >> key;
				if (key)
				{
					key =1;
					inventory[0]="key";
					cout <<"\nYou've added the key in your bag! Your bag now contains: ";
					for (int i =0; i<2; i++)
					{
						cout << inventory[i]<<endl;
					}
				}
				else
				{
					cout << "\nYou put the key back down.\n";
				}
				cout<< "You go back the way that you entered.\n";
				room = 1;
				break;
			case 5:
				cout <<"There's nothing in this room....\n";
				cout <<"You go back the way that you entered.\n";
				room = 3;
				break;
			case 6:
				if (cat==0)
				{
					cout<<"There's nothing in this room... wait....\n";
					cout<<"You see something move....\n";
					cout <<"Its your cat!!! You pick up your cat and put him inside your backpack\n";
					cat = 1;
					inventory[1]="cat";
					cout <<"Your bag now contains:\n";
					for (int i =0; i<2; i++)
					{
						cout << inventory[i]<<endl;
					}
				}
				cout<<"\nYou spot a door to the north. Upon closer inspection, it's locked. You check your bag and you find you have:\n";
				for (int i =0; i<2; i++)
					{
						cout << inventory[i]<<endl;
					}
				if (key)
				{
					cout<<"You use the key to unlock the door and find it leads outside!";
					break;
				}
				else
				{
					cout<<"You don't have a key, so you have no choice but to go back to the room before.";
					room = 3;
				}
				break;
		}
	};
	cout <<"You've escaped the abandoned house with both your cat and your life!\n";
	cout <<"As you walk home, you think to yourself that you should really stop leaving the door open when you get the mail..\n";
	
	return 0;
}
