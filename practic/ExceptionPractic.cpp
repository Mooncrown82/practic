#include<iostream>
#include<vector>
#include<regex>
using namespace std;
//burda kodun icinde guya ki deyisiklik etdim
bool isValid(const string& email)
{

	// Regular expression definition
	const regex pattern(
		"(\\w+)(\\.|_)?(\\w*)@gmail\\.com");

	// Match the string pattern
	// with regular expression
	return regex_match(email, pattern);
}
class Users {
	string username;
	string password;
	string email;
public: 
	
	Users() {
	username = "";
	password = "";
	email = "";
    }
	  Users(string username, string password, string email) {
		  setName(username);
		  setPasword(password);
		  setEmail(email);
	  }
	  string getName() const {
		  return username;
	  }
	  string getPassword() const {
		  return password;
	  }
	  string getEmail() const {
		  return email;
	  }
	  void setName(string name) {
		  if (name.length() >= 3) {

			  this->username = name;
		  }
		  else {
			  throw string("add 3 herfden cox olmalidir");
		  }
	  }void setPasword(string password) {
		  if (password.length() >= 8) {

			  this->password = password;
		  }
		  else {
			  throw string("invalid pasword");
		  }
	  }void setEmail(string email) {
		  if (isValid(email)) {

			  this->email = email;
		  }
		  else {
			  throw string("invalid email");
		  }
	  }

};

//UserManager = > vector<User>users
//method - SignIn(username, password) - daxil olmaq
//SignUp(string username, string password, string mail) - registrasiya ucun
class UserManager :public Users {
	vector<Users>users;
public:
	/*bool SignIn(string username, string password) {
		for (auto& user : users) {
			if(user.getName(username))
		}
	}*/
	void SignUp(const Users& user) {
		users.push_back(user);
	}
};


int main() {
	string s;


	return 0;

}