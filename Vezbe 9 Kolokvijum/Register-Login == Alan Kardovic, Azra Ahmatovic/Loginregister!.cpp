#include <iostream>

using namespace std;


struct User {
    string Username, Password;
};
  
int main() {
	
    int choice;
    User newUser, newLogin;
    user:
    cout << "Hello, Would you like to register or log in \n[1] Register\n[2] Login\n[3] Exit" << endl;
    cin >> choice;


     do{
	 	    
	 
    switch (choice) {
    case 1:
    {
        cout << "Please register" << endl;
        // Register

        cout << "\nEnter your  username: ";
        cin >> newUser.Username;


        cout << "\nEnter your  password: ";
        cin >> newUser.Password;

        cout << "\nSuccessfully.Now log in:";
        break;
    }
       
    case 2:
    {
    
        // login

        cout << "\nUsername: ";
        cin >> newLogin.Username;

        cout << "\nPassword: ";
        cin >> newLogin.Password;


        if (newLogin.Username == newUser.Username && newLogin.Password == newUser.Password) {


            cout << "\nSuccessfully logged in.";
            
          return 0;
        }  
        else {
            cout << "\nLogin Failed Please try again later!";
        }
        break;
    }

    case 3:
        cout << "Exit" << endl;
        
	   return 0;
       
    } 
	   
    
  }   while(newLogin.Username == newUser.Username && newLogin.Password == newUser.Password);
  
	
	
        system("pause");
           goto user;

        
				
	   			
   
system ("pause");
return 0;
	
    
}
