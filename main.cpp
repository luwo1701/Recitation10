

#include <cstdlib>
#include <iostream> //provides cin and coutt
#include <fstream>  //provides ifstream
#include <string>   //provides c++ string methods
#include <cstring>
#include <iomanip>
#include <sstream> //provides c style string methods
#include  "exam2.h"

using namespace std;
int main()
{
    MovieTree Netflix;
    Netflix.buildTree();

    int input = 0;
    while (input!=5)
    {


    //Netflix.printMovieInventory();
    cout << "======Main Menu=====" << endl;
    cout << "1. Rent a movie" << endl;
    cout << "2. Print the inventory" << endl;
    cout << "3. Delete a movie" << endl;
    cout << "4. Count the movies" << endl;
    cout << "5. Quit" << endl;
     cin>>input;
        if(input==1)
        {
            int num;


            cout<<"Enter  title:"<<endl;
            cin>>num;
            Netflix.findMovie(num);


        }
        if(input==2)
        {
            Netflix.printMovieInventory();

        }
        if(input==3)
        {
            int  num;
            cin>>num;
            Netflix.deleteMovieNode(num);
        }
        if (input==4)
        {
           cout<< Netflix.countMovieNodes()<<endl;
        }
        if(input==5)
        {
            //4Netflix.DeleteAll(root);
            cout<<"Goodbye"<<endl;
        }

    }


}




