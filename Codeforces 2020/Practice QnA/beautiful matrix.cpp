#include<iostream>
using namespace std;
void beautifulMatrix(int arr[5][5], int onerow, int onecol)
{

    int minstep=0;
    //for top left
    if(onerow<2 && onecol<2)
    {
        for(int col=onecol;col<2;col++)
            minstep++;
        for(int row=onerow;row<2;row++)
            minstep++;
    }
    //for top right
    else if(onerow<2 && onecol>2)
    {
        for(int col=onecol;col>2;col--)
            minstep++;
        for(int row=onerow;row<2;row++)
            minstep++;
    }
    //for bottom left
    else if(onerow>2 && onecol<2)
    {
        for(int col=onecol;col<2;col++)
            minstep++;
        for(int row=onerow;row>2;row--)
            minstep++;
    }
    //for bottom right
    else if(onerow>2 && onecol>2)
    {
        for(int col=onecol;col>2;col--)
            minstep++;
        for(int row=onerow;row>2;row++)
            minstep++;
    }
    //for top vertical
    else if(onecol==2 && onerow<2)
    {
        for(int row=onerow;row<2;row++)
            minstep++;
    }
    //for bottom vertical
    else if(onecol==2 && onerow>2)
    {
        for(int row=onerow;row>2;row--)
            minstep++;
    }
    //for left horizontal
    else if(onerow==2 && onecol<2)
    {
        for(int col=onecol;col<2;col++)
            minstep++;
    }
    //for right horizontal
    else if(onerow==2 && onecol>2)
    {
        for(int col=onecol;col>2;col--)
            minstep++;
    }
    cout<<minstep<<endl;

}
int main()
{
    int arr[5][5];
    int onerow,onecol;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                onerow=i;
                onecol=j;
            }
        }
        cout<<endl;
    }
    beautifulMatrix(arr,onerow,onecol);
    return 0;
}
