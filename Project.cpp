#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;

struct ID
{
	int id;
	int input()
    {
    	cout << "Enter the ID : " ;
        if ( cin >> id && id>0 )
        {
        	return id ;
		}
        
        else
        {
			cout<<"Invalid option. Try again" << endl ;
			cin.clear() ;
			cin.ignore(123 , '\n') ;
		    return  input() ;
		}
       
    }
    int output()
    {
    	cout << "ID : " << id << endl ;
	}
};

struct fullname
{
	string fristname ;
	string middlename ;
	string lastname ;

    void input()
    {
        	cout << "Enter the Frist name : " ; 
        	cin >> fristname ;
            
            cout << "Enter the Middle name : " ;
            cin >> middlename ;
            
            cout << "Enter the Last name : " ;
            cin >> lastname ;
    }
    
    void output()
    {
    	cout << "Frist Name : " << fristname << endl ;
    	cout << "Middle Name : " << middlename << endl ;
    	cout << "Last Name : " << lastname << endl ;
	}
	
};

struct Age
{
	int age;
	int input()
    {
    	cout << "Enter the Age : " ;
    	if ( cin >> age )
        {
        	return age ;
		}
        
        else
        {
			cout<<"Invalid option. Try again" << endl ;
			cin.clear() ;
			cin.ignore(123 , '\n') ;
		    return  input() ;
		}
    }

    void output()
    {
    	cout << "Age : " << age << endl ;
	}
};

struct Address
{
	string address;
	
	void input()
    {
    	cout << "Enter the Address : " ;
    	cin >> address ;
    }
    void output()
    {
    	cout << "Address : " << address << endl ;
	}
};

struct Nationality
{
	string nationality;
	
	void input()
    {
    	cout << "Enter the Nationality : " ;
        cin >> nationality ;
    }
    void output()
    {
    	cout << "Nationality : " << nationality << endl ;
	}
};

struct Gender
{
	string gender;
	void input()
    {
    	cout << "Enter the Gender : " ;
    	cin >> gender ;
    	
    	if (gender == "m" || gender == "M" || gender == "male" || gender == "Male" || gender == "f" || gender == "F" || gender == "female" || gender == "Female")
		{
            //return gender;
        }
        else
		{
            cout<<"Invalid option. Try again" << endl ;
            input();
        }
    }

    void output()
    {	
        	cout << "Gender : " << gender << endl ;
    }
};


struct contacts
{
	ID id ;
	fullname name ;
	Age age ;
	Address address ;
	Nationality nationality ;
	Gender gender ;
	
};

void deleteID(int input , int numberOfContacts , contacts contactsinfo[] )
{
	int flag=0;
	for(int i=0; i<numberOfContacts; i++)
	{
	    if(contactsinfo[i].id.id == input)
		{
		    flag = 1 ;
		    contactsinfo[i].id.id = 0;
		    contactsinfo[i].name.fristname = "NULL" ;
		    contactsinfo[i].name.middlename = "NULL" ;
		    contactsinfo[i].name.lastname = "NULL" ;
		    contactsinfo[i].age.age = 0 ;
		    contactsinfo[i].address.address = "NULL" ;
		    contactsinfo[i].nationality.nationality = "NULL" ;
		    contactsinfo[i].gender.gender = "NULL" ;
		    break;
		}
	}
								
	if(!flag)
	{
		cout<<"\nSorry..!!..No such ID exists..!!\n";
	}
}

void deleteName(string input , int numberOfContacts , contacts contactsinfo[] )
{
	int flag=0;
	for(int i=0; i<numberOfContacts; i++)
	{
	    if(contactsinfo[i].name.fristname == input)
		{
		    flag = 1 ;
		    contactsinfo[i].id.id = 0;
		    contactsinfo[i].name.fristname = "NULL" ;
		    contactsinfo[i].name.middlename = "NULL" ;
		    contactsinfo[i].name.lastname = "NULL" ;
		    contactsinfo[i].age.age = 0 ;
		    contactsinfo[i].address.address = "NULL" ;
		    contactsinfo[i].nationality.nationality = "NULL" ;
		    contactsinfo[i].gender.gender = "NULL" ;
		    break;
		}
	}
								
	if(!flag)
	{
		cout<<"\nSorry..!!..No such ID exists..!!\n";
	}
}

void updateID(int input , int numberOfContacts , contacts contactsinfo[] )
{
	int flag=0;
	for(int i=0; i<numberOfContacts; i++)
	{
	    if(contactsinfo[i].id.id == input)
		{
		    flag = 1 ;
		    contactsinfo[i].id.input();
		    contactsinfo[i].name.input();
		    contactsinfo[i].age.input();
		    contactsinfo[i].address.input();
		    contactsinfo[i].nationality.input();
		    contactsinfo[i].gender.input();
		    break;
		}
	}
								
	if(!flag)
	{
		cout<<"Sorry..!!..No such ID exists..!!\n";
	}
}

void updateName(string input , int numberOfContacts , contacts contactsinfo[] )
{
	int flag=0;
	for(int i=0; i<numberOfContacts; i++)
	{
	    if(contactsinfo[i].name.fristname == input)
		{
		    flag = 1 ;
		    contactsinfo[i].id.input();
		    contactsinfo[i].name.input();
		    contactsinfo[i].age.input();
		    contactsinfo[i].address.input();
		    contactsinfo[i].nationality.input();
		    contactsinfo[i].gender.input();
		    break;
		}
	}
								
	if(!flag)
	{
		cout<<"\nSorry..!!..No such ID exists..!!\n";
	}
}

void searchID(int input , int numberOfContacts , contacts contactsinfo[] )
{
	int flag=0;
	for(int i=0; i<numberOfContacts; i++)
	{
	    if(contactsinfo[i].id.id == input)
		{
		    flag = 1 ;
		    contactsinfo[i].id.output();
		    contactsinfo[i].name.output();
		    contactsinfo[i].age.output();
		    contactsinfo[i].address.output();
		    contactsinfo[i].nationality.output();
		    contactsinfo[i].gender.output();
		    break;
		}
	}
								
	if(!flag)
	{
		cout<<"\nSorry..!!..No such ID exists..!!\n";
	}
}

void searchName(string input , int numberOfContacts , contacts contactsinfo[] )
{
	int flag=0;
	for(int i=0; i<numberOfContacts; i++)
	{
	    if(contactsinfo[i].name.fristname == input)
		{
		    flag = 1 ;
		    contactsinfo[i].id.output();
		    contactsinfo[i].name.output();
		    contactsinfo[i].age.output();
		    contactsinfo[i].address.output();
		    contactsinfo[i].nationality.output();
		    contactsinfo[i].gender.output();
		    break;
		}
	}
								
	if(!flag)
	{
		cout<<"\nSorry..!!..No such Name exists..!!\n";
	}
}

void function_contacts_output (contacts &output)
{
	output.id.output() ;
	output.name.output() ;
	output.age.output() ;
	output.address.output() ;
	output.nationality.output() ;
	output.gender.output() ;
	cout<< "**************************************************************************" << endl ;
}

contacts function_contacts_input (contacts &input)
{
	
	input.id.input() ;
    input.name.input() ;
	input.age.input() ;
	input.address.input() ;
	input.nationality.input() ;
    input.gender.input() ;
	cout<< "**************************************************************************" << endl ;
	return input;
}

int main()
{
	
	int numberOfContacts;
    cout << "Enter the number of the Contacts : " ;
	cin >> numberOfContacts ;
	
	contacts contactsinfo[numberOfContacts] ;

	while (1)
	{
		char choiceContacts;

					cout << endl ;
		            cout<< "**************************************************************************" << endl ;
		            cout << "Press(I) to instet the Contacts Information \nPress(O) to view your inputs \nPress(D) to delete your inputs \nPress(S) to serach your inputs \nPress(U) to update your inputs" << endl ;
		            cout<< "**************************************************************************" << endl ;
	            	cout << endl ;
	            	
					cin >> choiceContacts ;
					
					switch (choiceContacts)
					{
						case 'i' :
		                case 'I' :
		                    {
		    	                for (int i = 0 ; i < numberOfContacts ; i++ )
	                            {
		                            function_contacts_input(contactsinfo[i]) ;
	                            }
		                       	break ;
			                }
			
			             case 'o' :
		                 case 'O' :
		                    {
		                    	cout << endl ;
		                    	cout<< "**************************************************************************" << endl ;
		                     	cout << endl ;
		                      	for (int i = 0 ; i < numberOfContacts ; i++ )
	                            {
		                           function_contacts_output(contactsinfo[i]) ;
	                            }
	            
		                    	break ;
			                }
			                
			             case 'd' :
		                 case 'D' :
		                    {
		                    	cout << "Please enter the contact ID for the contact you would like to delete : " ;
		                     	
		                     	char choiceSearch;
		                    	cout << endl ;
		                        cout<< "**************************************************************************" << endl ;
		                        cout << "Press(I) to delete by ID \nPress(A) to delete by name" << endl ;
		                        cout<< "**************************************************************************" << endl ;
	            	            cout << endl ;
		                    	cin >> choiceSearch;
		                    	cout << endl ;
		                    	
		                    	switch (choiceSearch)
		                    	{
		                    		case 'i' :
		                    		case 'I' :
		                    			{
		                    				cout<<"Enter the ID no. whose information is to be deleted : ";
		                    				int eno;
		                    				cin>>eno;
		                    				cout << endl ;
		                    				deleteID(eno , numberOfContacts , contactsinfo );
		                    				cout << endl ;
		                    				cout << "The Contact who's ID " << eno << " deleted" << endl ;
		                    				cout << endl ;
		                    				break;
										}
										
									case 'a' :
		                    		case 'A' :
		                    			{
		                    				cout<<"Enter the Name no. whose information is to be deleted : ";
		                    				string eno;
		                    				cin>>eno;
		                    				cout << endl ;
		                    				deleteName(eno , numberOfContacts , contactsinfo );
		                    				cout << "The Contact who's Name " << eno << " deleted" << endl ;
		                    				cout << endl ;
		                    				break;
										}
										
									default :
										{
											cout << "Invalid input. Try again" << endl ;
											break;
										}
								}
		                    	break;
							}
							
						 case 'u' :
						 case 'U' :
						    {
						 		char choiceSearch;
		                    	cout << endl ;
		                        cout<< "**************************************************************************" << endl ;
		                        cout << "Press(I) to update by ID \nPress(A) to update by name" << endl ;
		                        cout<< "**************************************************************************" << endl ;
	            	            cout << endl ;
		                    	cin >> choiceSearch;
		                    	
		                    	switch (choiceSearch)
		                    	{
		                    		case 'i' :
		                    		case 'I' :
		                    			{
		                    				cout<<"Enter the ID no. whose information is to be updated : ";
		                    				int eno;
		                    				cin>>eno;
		                    				cout << endl ;
		                    				updateID(eno , numberOfContacts , contactsinfo );
		                    				cout << endl ;
		                    				cout << "The Contact who's ID " << eno << " updated" << endl ;
		                    				break;
										}
										
									case 'a' :
		                    		case 'A' :
		                    			{
		                    				cout<<"Enter the Name no. whose information is to be updated : ";
		                    				string eno;
		                    				cin>>eno;
		                    				cout << endl ;
		                    				updateName(eno , numberOfContacts , contactsinfo );
		                    				cout << endl ;
		                    				cout << "The Contact who's Name " << eno << " updated" << endl ;
		                    				break;
										}
										
									default :
										{
											cout << "Invalid input. Try again" << endl ;
											break;
										}
								}
		                    	break;
							}
							
						 case 's' :
		                 case 'S' :
		                    {
		                    	char choiceSearch;
		                    	cout << endl ;
		                        cout<< "**************************************************************************" << endl ;
		                        cout << "Press(I) to search by ID \nPress(A) to search by name" << endl ;
		                        cout<< "**************************************************************************" << endl ;
	            	            cout << endl ;
		                    	cin >> choiceSearch;
		                    	
		                    	switch (choiceSearch)
		                    	{
		                    		case 'i' :
		                    		case 'I' :
		                    			{
		                    				cout<<"Enter the ID no. whose information is to be displayed : ";
		                    				int eno;
		                    				cin>>eno;
		                    				cout << endl ;
		                    				searchID(eno , numberOfContacts , contactsinfo );
		                    				cout << endl ;
		                    				break;
										}
										
									case 'a' :
		                    		case 'A' :
		                    			{
		                    				cout<<"Enter the ID no. whose information is to be displayed : ";
		                    				string eno;
		                    				cin>>eno;
		                    				cout << endl ;
		                    				searchName(eno , numberOfContacts , contactsinfo );
		                    				cout << endl ;
		                    				break;
										}
										
									default :
										{
											cout << "Invalid input. Try again" << endl ;
											break;
										}
								}
		                    	break;
	                        }
			              default :
			               	{
					            cout << "Invalid input. Try again" << endl ;
					            break;
				            }	
					}
    }
	return 0;
}
