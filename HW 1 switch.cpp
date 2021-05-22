#include<iostream>;

using namespace std;

int main(){
	
	char ch;
	cout<<" Enter alphabet : ";
	cin>>ch;
	
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
		cout<<"It is a alphabet"<<endl;
	}else
		cout<<"You have entered non alphabetic character";
	
	 switch (ch){	
		case 'a':
			cout<<"vowel";
			break;
		case 'e':
			cout<<"vowel";
			break;
		case 'y':
			cout<<"vowel";
			break;
		case 'u':
			cout<<"vowel";
			break;
		case 'i':
			cout<<"vowel";
			break;
		case 'o':
			cout<<"vowel";
			break;
		
		default:
			cout<<"If not a vowel, it is a constant";
	}
	

	
	return 0;
}
