//yash2322
#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define pb(a) push_back(a);
#define out(a) cout<<a;
#define st(v) sort(v.begin(),v.end())
#define stg(v) sort(v.begin(),v.end(),greater<int>())
#define str(v) sort(v.rbegin(),v.rend())

//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
typedef long long int ll;
/*ll gcd(ll a,ll b){
    if(b==0)
        return a;
        return(b,a%b);
}*/


// actual implementation starts here
class team_move_echostar{
    int floor;
    vector<class Engg_managers*> observers;
public:
    void enterred_floor(int curr_floor){
        floor=curr_floor;
        push_notification();
}
    int get_curr_floor(){
        return floor;
    }
    void attach(Engg_managers *mng){
        observers.pb(mng);
    }
    void detach(Engg_managers *mng){
        auto it=find(observers.begin(),observers.end(),mng);
        observers.erase(it);
    }
    void push_notification();
};
class Engg_managers{
    team_move_echostar *team_member;
    public:
        Engg_managers(team_move_echostar *_team_member){
            team_member=_team_member;
            team_member->attach(this);
        }
        virtual void notifying_managers()=0;
        team_move_echostar  *get_team_member(){
            return team_member;
        }
};
void team_move_echostar::push_notification(){
            FORS(i,0,observers.size()){
                observers[i]->notifying_managers();
            }
        }
class floor_1_observing:public Engg_managers{
    public:
    floor_1_observing(team_move_echostar *team_member):Engg_managers(team_member){}
    void notifying_managers(){
        if((get_team_member()->get_curr_floor())==1)
            cout<<"team member is now at first floor"<<endl;
    }
};
class floor_2_observing:public Engg_managers{
    public:
    floor_2_observing(team_move_echostar *team_member):Engg_managers(team_member){}
    void notifying_managers(){
        if((get_team_member()->get_curr_floor())==2)
            cout<<"team member is now at Second floor"<<endl;
    }
};
class floor_3_observing:public Engg_managers{
    public:
    floor_3_observing(team_move_echostar *team_member):Engg_managers(team_member){}
    void notifying_managers(){
        if((get_team_member()->get_curr_floor())==3)
            cout<<"team member is now at third floor"<<endl;
    }
};
class floor_4_observing:public Engg_managers{
    public:
    floor_4_observing(team_move_echostar *team_member):Engg_managers(team_member){}
    void notifying_managers(){
        if((get_team_member()->get_curr_floor())==4)
            cout<<"team member is now at fourth floor"<<endl;
    }
};

int main(){
    team_move_echostar *team_member=new team_move_echostar();
    cout<<"Enter the number of floor you want to monitor for your team\n :(Less than 5)";
    int n;
    cin>>n;
    cout<<"Enter the floors, it should be between 1-4 separated by spaces or enter(carriage return)"<<endl;
    vector<int>values;
    FORS(i,0,n){
        int fl;
        cin>>fl;
        values.pb(fl);
    }
    FORS(i,0,values.size()){
        switch (values[i])
        {
        case 1:{
            floor_1_observing Floor_1_obs(team_member);
            break;
        }
        case 2:{
            floor_2_observing Floor_2_obs(team_member);
            break;
        }
        case 3:{
            floor_3_observing Floor_3_obs(team_member);
            break;
        }
        case 4:{
            floor_4_observing Floor_4_obs(team_member);
            break;
        }
        default:{
        cout<<"Wrong Floor value encountered\n";
            break;
        }
        }
    }
    cout<<"now observing floor accessed"<<endl;
    int floor_captured_on_card;
    while(1){
        cin>>floor_captured_on_card;
        switch (floor_captured_on_card)
        {
        case 1:{
            team_member->enterred_floor(1);
            break;
        }
        case 2:{
            team_member->enterred_floor(2);
            break;
        }
        case 3:{
            team_member->enterred_floor(3);
            break;
        }
        case 4:{
            team_member->enterred_floor(4);
            break;
        }
        default:
        cout<<"Some error occured\n";
            break;
        }
    }
}
