#include <iostream>
#include <deque>

using namespace std;

enum CommandType
{
	MoveLeft,
	MoveRight,
	MoveForward,
	MoveBackward
};

char* CommandTypeNames[] = {"Moving left", "Moving right", "Moving forward", "Moving backward"};

class RoboCommander{
    private:
        deque<CommandType> deq;
    public:
        AddCommand(CommandType type){
            deq.push_back(type);
        }
        UndoCommand(){
            if(!deq.empty())
                deq.pop_back();
        }
        Execute(){
            for(int i = 0; i < deq.size(); ++i)
                cout << CommandTypeNames[deq[i]] << endl;
            cout << "Ready" << endl;
        }
};

int main()
{
    RoboCommander commander;
	commander.AddCommand(MoveLeft);
	commander.AddCommand(MoveRight);
	commander.UndoCommand();
	commander.UndoCommand();
	commander.UndoCommand();
	commander.AddCommand(MoveLeft);
	commander.AddCommand(MoveForward);
	commander.AddCommand(MoveLeft);
	commander.AddCommand(MoveForward);
	commander.AddCommand(MoveRight);
	commander.AddCommand(MoveBackward);
	commander.Execute();
	commander.UndoCommand();
	commander.UndoCommand();
	commander.UndoCommand();
	commander.UndoCommand();
	commander.AddCommand(MoveForward);
	commander.Execute();
    return 0;
}
