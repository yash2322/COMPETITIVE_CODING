#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=b;i--)
using namespace std;

int main()
{
int number_of_cards,sum_for_sereja=0,sum_for_dima=0;
char turn_variable='S';
cin>>number_of_cards;
int array_of_card_values[number_of_cards];
FORS(i,0,number_of_cards)
{
cin>>array_of_card_values[i];
}
int left_index=0,right_index=number_of_cards-1;

while(left_index!=right_index)
{
    if(turn_variable=='S')
    {
        if(array_of_card_values[left_index]>array_of_card_values[right_index])
        {
            sum_for_sereja=sum_for_sereja+array_of_card_values[left_index];
            left_index++;
            turn_variable='D';
        }
        else{
            sum_for_sereja=sum_for_sereja+array_of_card_values[right_index];
            right_index--;
            turn_variable='D';
        }

    }
    else
    {
     if(array_of_card_values[left_index]>array_of_card_values[right_index])
        {
            sum_for_dima=sum_for_dima+array_of_card_values[left_index];
            left_index++;
            turn_variable='S';
        }
        else{
            sum_for_dima=sum_for_dima+array_of_card_values[right_index];
            right_index--;
            turn_variable='S';
        }
    }


}
if(turn_variable=='S')
{
    sum_for_sereja=sum_for_sereja+array_of_card_values[left_index];

}
else
sum_for_dima=sum_for_dima+array_of_card_values[left_index];

cout<<sum_for_sereja<<" "<<sum_for_dima;
}
