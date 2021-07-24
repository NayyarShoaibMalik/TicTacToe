#include <iostream>
using namespace std;


char Board_Array[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

void display_board()
{
    
    cout<<"     ||     ||     \n";
    cout<<" "<<Board_Array[1] <<"   ||  "  <<Board_Array[2]<< "  ||  "   <<Board_Array[3]<<"\n";

    cout<<" ____||_____||_____\n";
    cout<<"     ||     ||     \n";

    cout<<" "<<Board_Array[4] <<"   ||  "  <<Board_Array[5]<< "  ||  "   <<Board_Array[6]<<"\n";

    cout<<" ____||_____||_____\n";
    cout<<"     ||     ||     \n";

    cout<<" "<<Board_Array[7] <<"   ||  "  <<Board_Array[8]<< "  ||  "   <<Board_Array[9]<<"\n";
    cout<<"     ||     ||     \n\n";
}



int playerwin()
{
    
    // checking horizontally
    if (Board_Array[1] == Board_Array[2] && Board_Array[2] == Board_Array[3])
        return 1;
        
    else if (Board_Array[4] == Board_Array[5] && Board_Array[5] == Board_Array[6])
        return 1;
        
    else if (Board_Array[7] == Board_Array[8] && Board_Array[8] == Board_Array[9])
        return 1;
        
    
    // checking Vertically
    else if (Board_Array[1] == Board_Array[4] && Board_Array[4] == Board_Array[7])
        return 1;
        
    else if (Board_Array[2] == Board_Array[5] && Board_Array[5] == Board_Array[8])
        return 1;
        
    else if (Board_Array[3] == Board_Array[6] && Board_Array[6] == Board_Array[9])
        return 1;
        
    
    // checking diagonally
    else if (Board_Array[1] == Board_Array[5] && Board_Array[5] == Board_Array[9])
        return 1;
        
    else if (Board_Array[3] == Board_Array[5] && Board_Array[5] ==Board_Array[7])
        return 1;
        
    else if (Board_Array[1] != '1' && Board_Array[2] != '2' && Board_Array[3] != '3' &&
             Board_Array[4] != '4' && Board_Array[5] != '5' && Board_Array[6] != '6' && Board_Array[7]
        != '7' && Board_Array[8] != '8' && Board_Array[9] != '9')

        return 0;
    else
        return  - 1;
}



int main()
{
    int player = 1, i, choice;

    char cell;
    
    cout<<"\n\n\tTic Tac Toe"<<endl;
    cout<<endl;

    cout<<"Player 1 (X)  -  Player 2 (Y)"<<endl<<endl;
    
    do
    {
        display_board();
        player = (player % 2) ? 1 : 2;

        cout<<"Enter a number Player"<< player<<" : ";
        cin>>choice;
        cout<<endl<<endl;
        //if player1 choose a number then mark that cell with  "X" and for player 2, mark with "Y"
        cell = (player == 1) ? 'X' : 'Y';

        if (choice == 1 && Board_Array[1] == '1')
            Board_Array[1] = cell;
            
        else if (choice == 2 && Board_Array[2] == '2')
            Board_Array[2] = cell;
            
        else if (choice == 3 && Board_Array[3] == '3')
            Board_Array[3] = cell;
            
        else if (choice == 4 && Board_Array[4] == '4')
            Board_Array[4] = cell;
            
        else if (choice == 5 && Board_Array[5] == '5')
            Board_Array[5] = cell;
            
        else if (choice == 6 && Board_Array[6] == '6')
            Board_Array[6] = cell;
            
        else if (choice == 7 && Board_Array[7] == '7')
            Board_Array[7] = cell;
            
        else if (choice == 8 && Board_Array[8] == '8')
            Board_Array[8] = cell;
            
        else if (choice == 9 && Board_Array[9] == '9')
            Board_Array[9] = cell;
            
        else
        {
           cout<<"Invalid move "<<endl;

            player--;
        }
        
        i = playerwin();
        player++;
    }while (i ==  - 1);
    display_board();
    
    if (i == 1)
    {
        player --;
        cout<<"Congratulations! Player"<<player<<" win "<<endl;
    }
    else
        cout<<"Game draw"<<endl;
    
    return 0;
}
