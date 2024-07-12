#include<iostream>

using namespace std;

int main(){
    int rows, columns, counter_number = 0;

    cout << "Enter the number of rows :";
    cin >> rows;
    
    cout << "Enter the number of columns :";
    cin >> columns;

    int array[rows][columns];

    // TODO: get matrix
    for (int i = 0 ; i < rows ; i++)
    {
        for (int j = 0 ; j < columns ; j++)
        {
            cout << "Enter the number of " << i << " "<< j << " box" << endl;
            cin >> array[i][j]; 

            if (array[i][j]!=0)
            {
                counter_number ++;
            }
        }
    }

    int espars_matrix[counter_number+1][3];
    int espars_matrix_rows = 1;
    espars_matrix[0][0] = rows;
    espars_matrix[0][1] = columns;
    espars_matrix[0][2] = counter_number;

    //TODO:make espars matrix
    for (int i = 0 ; i < rows ; i++)
    {
        for (int j = 0 ; j < columns ; j++)
        {
            if (array[i][j]!=0)
            {
                espars_matrix[espars_matrix_rows][0] = i ;
                espars_matrix[espars_matrix_rows][1] = j ;
                espars_matrix[espars_matrix_rows][2] = array[i][j] ;
                espars_matrix_rows ++;
            }
        }
    }

    //TODO:print espars matrix
    for (int i = 0 ; i < counter_number+1 ; i++)
    {
        for (int j = 0 ; j < 3 ; j++)
        {
            cout << espars_matrix[i][j] << " ";
        }
        cout << endl << endl;
    }
    
    char answer ;

    cout << "do you need the taranahade: (taranahade khob english chi mishe???)";
    cin >> answer ;

    if (answer == 'y' || answer == 'Y')
    {
        int matrix_taranahade [columns][rows];
        int taranahade_rows , taranahade_columns;

        taranahade_columns = rows;
        taranahade_rows = columns;

        //TODO: make taranahade matrix
        for (int i = 0 ; i < rows ; i ++)
        {
            for (int j = 0 ; j < columns ; j++)
            {
                matrix_taranahade [j][i] = array[i][j];
            }
        }

        espars_matrix_rows = 1;
        espars_matrix[0][0] = taranahade_rows;
        espars_matrix[0][1] = taranahade_columns;
        espars_matrix[0][2] = counter_number;

        //TODO: make espars matrix for taranahade matrix
        for (int i = 0 ; i < taranahade_rows ; i++)
        {
            for (int j = 0 ; j < taranahade_columns ; j++)
            {
                if (matrix_taranahade[i][j]!=0)
                {
                    espars_matrix[espars_matrix_rows][0] = i ;
                    espars_matrix[espars_matrix_rows][1] = j ;
                    espars_matrix[espars_matrix_rows][2] = matrix_taranahade[i][j] ;
                    espars_matrix_rows ++;
                }
            }
        }
        //TODO : print espars matrix for taranahade matrix
        for (int i = 0 ; i < counter_number+1 ; i++)
        {
            for (int j = 0 ; j < 3 ; j++)
            {
                cout << espars_matrix[i][j] << " ";
            }
            cout << endl << endl;
        }

    }
    else
    {
        return 0;
    }

    return 0;
}