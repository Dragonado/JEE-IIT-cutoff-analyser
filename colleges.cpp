// Enter Source:
#include <bits/stdc++.h>
#define MOD (1000000000+7)

typedef long long int lli;

using namespace std;

int main()
{
	bool quit = false;
	while(quit == false)
	{
		ifstream fin("colleges.txt");
		
		string longest_IIT_name = "IIT Bhubaneswar";
		int cat_no = -1, gender_no = -1, closing_rank, opening_rank, rank_user = -1, IIT_no = -1, course_no = -1;
		string gender_user, gender_temp1 = "Female-Only", gender_temp2 = "Gender-Neutral";
		string cat_user, cat_temp2 = "SC", cat_temp3 = "ST", cat_temp4 = "OBC-NCL", cat_temp1 = "OPEN";
		string IIT_name, course, IIT_name_user, course_user;
		
		cout << "Hello! Welcome to the 2018 cutoff ranking analytics program"<< endl;
		while(!(cat_no == 1 || cat_no == 2 || cat_no == 3 || cat_no == 4))
		{
			cout << "1) OPEN(general)\n2) SC\n3) ST\n4) OBC_NCL\nEnter your category number: ";
			cin >> cat_no;
			//cat_no = 1;
		}
		if(cat_no == 1) cat_user = cat_temp1;
		else if(cat_no == 2) cat_user = cat_temp2;
		else if(cat_no == 3) cat_user = cat_temp3;
		else if(cat_no == 4) cat_user = cat_temp4;
		
		system("cls");
		
		cout << "Hello! Welcome to the 2018 cutoff ranking analytics program"<< endl;
		while(!(gender_no ==1 || gender_no == 2))
		{
			cout << "1) Female\n2) Gender-Neutral(male or trans)\nEnter your gender number: ";
			cin >> gender_no;
			//gender_no = 2;
		}
		if(gender_no == 1) gender_user = gender_temp1;
		else if(gender_no == 2) gender_user = gender_temp2;
		
		system("cls");
		
		cout << "Hello! Welcome to the 2018 cutoff ranking analytics program"<< endl;
		while(rank_user < 0)
		{
			cout << "Enter your rank: ";
			cin >> rank_user;
			//rank_user = 3174;
			cout << endl;
		}
		system("cls");
		
		cout << "Hello! Welcome to the 2018 cutoff ranking analytics program"<< endl;
		while(!(0 <= IIT_no && IIT_no <=23))
		{
			cout << " 0) Display all IIT\n 1) IIT Kharagpur\n 2) IIT Bombay\n 3) IIT Kanpur\n 4) IIT Madras\n 5) IIT Delhi" << endl;
			cout << " 6) IIT Guwahati\n 7) IIT Roorkee\n 8) IIT (BHU) Varnasi\n 9) IIT Bhubhaneswar\n10) IIT Gandhinagar" << endl;
			cout << "11) IIT Hyderabad\n12) IIT Jodhpur\n13) IIT Patna\n14) IIT Ropar\n15) IIT Indore\n16) IIT Mandi\n17) IIT Palakkad" << endl;
			cout << "18) IIT Tirupati\n19) IIT Dhanbad\n20) IIT Bhilai\n21) IIT Goa\n22) IIT Jammu\n23) IIT Dharwad" << endl;
			cout << "Enter your preference: ";
			cin >> IIT_no;
			if(IIT_no == 1) IIT_name_user = "IIT Kharagpur";
			else if(IIT_no == 2 ) IIT_name_user = "IIT Bombay";
			else if(IIT_no == 3 ) IIT_name_user = "IIT Kanpur";
			else if(IIT_no == 4 ) IIT_name_user = "IIT Madras";
			else if(IIT_no == 5 ) IIT_name_user = "IIT Delhi";
			else if(IIT_no == 6 ) IIT_name_user = "IIT Guwahati";
			else if(IIT_no == 7 ) IIT_name_user = "IIT Roorkee";
			else if(IIT_no == 8 ) IIT_name_user = "IIT Varanasi";
			else if(IIT_no == 9 ) IIT_name_user = "IIT Bhubaneswar";
			else if(IIT_no == 10) IIT_name_user = "IIT Gandhinagar";
			else if(IIT_no == 11) IIT_name_user = "IIT Hyderabad";
			else if(IIT_no == 12) IIT_name_user = "IIT Jodhpur";
			else if(IIT_no == 13) IIT_name_user = "IIT Patna";
			else if(IIT_no == 14) IIT_name_user = "IIT Ropar";
			else if(IIT_no == 15) IIT_name_user = "IIT Indore";
			else if(IIT_no == 16) IIT_name_user = "IIT Mandi";
			else if(IIT_no == 17) IIT_name_user = "IIT Palakkad";
			else if(IIT_no == 18) IIT_name_user = "IIT Tirupati";
			else if(IIT_no == 19) IIT_name_user = "IIT Dhanbad";
			else if(IIT_no == 20) IIT_name_user = "IIT Bhilai";
			else if(IIT_no == 21) IIT_name_user = "IIT Goa";
			else if(IIT_no == 22) IIT_name_user = "IIT Jammu";
			else if(IIT_no == 23) IIT_name_user = "IIT Dharwad";
		}
		
		system("cls");
		
		cout << "Hello! Welcome to the 2018 cutoff ranking analytics program"<< endl;
		while(!(0 <= course_no && course_no <= 30))
		{
			cout << "0)Display all branches\nCourses related to:\n 1) Computer Science\n 2) Electrical \n 3) Electronics\n";
			cout << " 4) Civil\n 5) Chemical\n 6) Aerospace \n 7) Metallurgical\n 8) Mechanical\n 9) Chemistry\n10) Physics\n";
			cout << "11) Economics\n12) Mathematics\n13) Bio\n14) Environmental Science\n15) Industrial\n";
			cout << "16) Textile\n17) Food \n18) Instrumentation\n19) Manufacturing \n20) Mining\n";
			cout << "21) Ocean and Naval\n22) Architecture\n23) Geology\n24) Geophysics\n25) Earth Science\n";
			cout << "26) Materials Sciences\n27) Mineral\n28) Petroleum\n";
			cout << "29) Pharmaceutical\n30) Ceramic\n";
			cout << "Enter your preferences: ";
			
			cin >> course_no;
			
			if(course_no == 1) course_user = "Computer";
			else if(course_no == 2 ) course_user = "Electrical";
			else if(course_no == 3 ) course_user = "Electronics";
			else if(course_no == 4 ) course_user = "Civil";
			else if(course_no == 5 ) course_user = "Chemical";
			else if(course_no == 6 ) course_user = "Aerospace";
			else if(course_no == 7 ) course_user = "Metal";
			else if(course_no == 8 ) course_user = "Mech";
			else if(course_no == 9 ) course_user = "Chemistry";
			else if(course_no == 10) course_user = "Physics";
			else if(course_no == 11) course_user = "Economics";
			else if(course_no == 12) course_user = "Math";
			else if(course_no == 13) course_user = "Bio";
			else if(course_no == 14) course_user = "Environ";
			else if(course_no == 15) course_user = "Indus";
			else if(course_no == 16) course_user = "Textile";
			else if(course_no == 17) course_user = "Food";
			else if(course_no == 18) course_user = "Instru";
			else if(course_no == 19) course_user = "Manu";
			else if(course_no == 20) course_user = "Mining";
			else if(course_no == 21) course_user = "Ocean";
			else if(course_no == 22) course_user = "Arch";
			else if(course_no == 23) course_user = "Geology";
			else if(course_no == 24) course_user = "Geophysic";
			else if(course_no == 25) course_user = "Earth";
			else if(course_no == 26) course_user = "Material";
			else if(course_no == 27) course_user = "Mineral";
			else if(course_no == 28) course_user = "Petro";
			else if(course_no == 29) course_user = "Pharma";
			else if(course_no == 30) course_user = "ceramic";
		}
		system("cls");
		
		int count = 0;
		while(fin)
		{
			string temp;
			getline(fin,temp);
			if(temp[0] == 'I' && temp[1] == 'I' && temp[2] == 'T')
			{
				IIT_name = temp;
				
				getline(fin,temp); // course
				course = temp;
				
				getline(fin,temp); // quota
				getline(fin,temp); // cat
				
				if(temp == cat_user)
				{
					getline(fin,temp); // gender
					if(temp == gender_user)
					{
						getline(fin,temp); // opening rank
						opening_rank = stoi(temp);
						getline(fin,temp); // closing rank
						closing_rank = stoi(temp);
						if(rank_user <= closing_rank)
						{
							auto it = search(course.begin(),course.end(),course_user.begin(),course_user.end());
							bool course_found;
							if(it != course.end()) course_found = true;
							else course_found = false;
							
							if((IIT_no == 0 || IIT_name_user == IIT_name)&&(course_no == 0 || course_found == true))
							{
	 							count++;
	 							if(count < 10) cout <<"  ";
	 							else if(count < 100) cout << " ";
								cout << count << ") " << IIT_name;
								for(int i = 0; i < longest_IIT_name.size()- IIT_name.size(); i++) cout << " ";
								cout  << " ! " << course << ", Opening Rank = " <<opening_rank << ", Closing Rank = " << closing_rank<< endl;
							}
						}
					}
				}
			}
		}
		cout << "\n\n\nDo you want to quit?\n0) No\n1) Yes :";
		cin >> quit;
		system("cls");
	}
	return 0;
}


