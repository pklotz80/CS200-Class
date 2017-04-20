#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Room
{
private:
	string m_title;
	int m_width;
	int m_length;

public:
	int GetWidth()
	{
		return m_width;
	}

	int GetLength()
	{
		return m_length;
	}

	int GetArea()
	{
		int area = m_length * m_width;
		return area;
	}

	string GetTitle()
	{
		return m_title;
	}

	void SetTitle(string newTitle)
	{
		m_title = newTitle;
	}

	void SetDimensions(int newWidth, int newLength)
	{
		if (newWidth > -1)
		{
			m_width = newWidth;
		}
		if (newWidth > -1)
		{
			m_length = newLength;
		}
	}
};

class Building
{
private:

	int m_roomCount;
	Room* m_rooms;

public:
	Building(int roomCount)
	{
		m_rooms = nullptr;
		if (roomCount > -1)
		{
			m_roomCount = roomCount;
			m_rooms[roomCount];
			m_rooms = new Room[m_roomCount];
		}
	}

	~Building()
	{
		if (m_rooms != nullptr)
		{
			delete[] m_rooms;
		}
	}

	void SetRoomTitle(int room, string title)
	{
		if (room < 0 || room >= m_roomCount)
		{
			cout << "Invalid" << endl;
		}
		else
		{
			m_rooms[room].SetTitle(title);
		}
	}

	void SetRoomDimensions(int room, int newWidth, int newLength)
	{
		if (room < 0 || room >= m_roomCount)
		{
			cout << "Invalid" << endl;
		}
		else
		{
			m_rooms[room].SetDimensions(newWidth, newLength);
		}
	}

	int GetTotalArea()
	{
		int sum;
		for (int i = 0; i < m_roomCount; i++)
		{
			sum = m_rooms[i].GetArea();
		}
		return sum;
	}


	void PrintBuildingInformation(string filename)
	{
		ofstream output(filename);

		output << "BUILDING Dimensions: " << GetTotalArea() << " sqft" << endl << endl;

		for (int i = 0; i < m_roomCount; i++)
		{
			output << endl << "ROOM " << (i + 1) << " ("
				<< m_rooms[i].GetTitle() << "):"
				<< "\n\t * Dimensions: " << m_rooms[i].GetWidth() << " x " << m_rooms[i].GetLength()
				<< "\n\t * Area:       " << m_rooms[i].GetArea() << " sqft" << endl;
		}

		output.close();
	}
};

void RoomProgram()
{
	Room room;
	room.SetDimensions(5, 4);

	cout << "Room area is: " << room.GetArea() << endl;

	room.SetTitle("closet");

	cout << "Room name is: " << room.GetTitle() << endl;
}

void BuildingProgram()
{
	Building building(5);

	building.SetRoomTitle(0, "Entryway");
	building.SetRoomTitle(1, "Living Room");
	building.SetRoomTitle(2, "Kitchen");
	building.SetRoomTitle(3, "Bedroom");
	building.SetRoomTitle(4, "Bathroom");

	building.SetRoomDimensions(0, 5, 10);
	building.SetRoomDimensions(1, 5, 10);
	building.SetRoomDimensions(2, 5, 10);
	building.SetRoomDimensions(3, 5, 10);
	building.SetRoomDimensions(4, 5, 10);

	building.PrintBuildingInformation("building.txt");
}

int main()
{
	RoomProgram();
	BuildingProgram();

	while (true) {}
	return 0;
}