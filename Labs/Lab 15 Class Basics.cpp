#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Room
{
};

class Building
{
};

void RoomProgram()
{
	/*
    // This function works with the Room object

    Room room;
    room.SetDimensions( 5, 4 );

    cout << "Room area is: " << room.GetArea() << endl;

    room.SetTitle( "closet" );

    cout << "Room name is: " << room.GetTitle() << endl;
    */
}

void BuildingProgram()
{
	/*
    // This function works with the Building object

    Building building( 5 );

    building.SetRoomTitle( 0, "Entryway" );
    building.SetRoomTitle( 1, "Living Room" );
    building.SetRoomTitle( 2, "Kitchen" );
    building.SetRoomTitle( 3, "Bedroom" );
    building.SetRoomTitle( 4, "Bathroom" );

    building.SetRoomDimensions( 0, 5, 10 );
    building.SetRoomDimensions( 1, 5, 10 );
    building.SetRoomDimensions( 2, 5, 10 );
    building.SetRoomDimensions( 3, 5, 10 );
    building.SetRoomDimensions( 4, 5, 10 );

    building.PrintBuildingInformation( "building.txt" );
    */
}

int main()
{
    RoomProgram();
    BuildingProgram();

    return 0;
}
