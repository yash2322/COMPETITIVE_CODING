#include<bits/stdc++.h>
using namespace std;
int main()
{

    long int s;
    cin>>s;
    for(long int i=0;i<s;i++)
    {
        long int number_of_buildings,rupee,visible_buildings=0,initial_visible=INT_MIN;
        cin>>number_of_buildings>>rupee;
        long int building_heights[number_of_buildings];
        for(long int j=0;j<number_of_buildings;j++)
        {
            cin>>building_heights[number_of_buildings];
            if(building_heights[number_of_buildings]>initial_visible)
            {
                visible_buildings++;
                initial_visible=building_heights[number_of_buildings];
            }
        }
        cout<<rupee*visible_buildings<<endl;

    }


}
