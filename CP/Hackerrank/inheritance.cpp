#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
		}

};

class Student :  public Person{
	private:
		vector<int> testScores;
	public:
        int average,arr;
        string firstName,lastName;
        char c;
    Student(string f,string l,int x,vector<int> &a):Person(f,l,x)
    {
        int size=a.size();
        int sum=0;
        firstName=f;
        lastName=l;
        for(int i=0;i<size;i++)
        sum+=a[i];
        average=sum/size;
    }
    char calculate()
    {
        cout<<"a="<<average<<endl;
        if(average>=90&&average<=100)
        c='O';
        else if(average>=80&&average<90)
        c='E';
        else if(average>=70&&average<80)
        c='A';
        else if(average>=60&&average<70)
        c='P';
        else if(average>=50&&average<60)
        c='D';
        else
        c='T';
        return c;
    }
    /*
        *   Class Constructor
        *
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here

        /*
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
