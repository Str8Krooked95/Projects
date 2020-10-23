#include <iostream>

#include <vector>

using namespace std;

int main () {
    cout<< "Welcome to the section challenge"<< endl;
    
    char selection {};
    vector <int> numbers {};
    
    do{
        
        cout<< "----------------------------------------------"<< endl;
        cout<< "Please Make a selection from the items below"<< endl;
        cout<< "--------------------------------------------"<< endl;
        cout<< "P. Print numbers"<< endl;
        cout<< "A. Add a number"<< endl;
        cout<< "M. Diplay mean of the numbers"<< endl;
        cout<< "S. Display smallest number"<< endl;
        cout<< "L. Display largest number" << endl;
        cout<< "Q. Quit Application"<< endl;
        
        cout<< endl;
        cin>> selection;
        cout<< endl;
        
        
        switch (selection){
            case 'P': // this will print out user inputed numbers.
            case 'p': {
                if (numbers.size() == 0){
                   cout << "Sorry there is no numbers stored. Try adding a number"<< endl; 
                }else{
                    cout<< "Your numbers are: ";
                    for (auto num : numbers)
                        cout<< num << " ";
                    cout<< endl;
                }
                break;
            }
            case 'A': // this will allow user to input numbers.
            case 'a': {
                char choice {'y'};
                int add_number {};
                
                while (choice != 'Y' || choice == 'y') {
                    cout<< "Please enter the number that you would like to add: ";
                    cin>> add_number;
                
                    numbers.push_back(add_number);
                
                    cout<< "Thank You! You added " << add_number << endl; 
                    cout<< "If you would like to enter another number please enter Y: ";
                    cin>> choice;
                    cout<< endl;
                }
                break;
            }
            case 'M': // this will find the mean of inputed numbers.
            case 'm': {
                int total {};
                
                for (unsigned int i {}; i < numbers.size(); ++i){
                    total += numbers.at(i);
                }
                cout<< "The mean of your numbers is: "<< total / numbers.size() << endl;
                break;
            }
            case 'S': // this will find the smallest number.
            case 's': {
                int small_num {};
                small_num = numbers.at(0);
                
                for (unsigned int i {}; i < numbers.size (); ++i){
                   if (numbers.at(i) < small_num){
                       small_num = numbers.at (i);
                   }
                }    
                cout<< "Your smallest number number is: " << small_num << endl;
                break;
            }
            case 'L': // this will find the largest number.
            case 'l': {
                int large_num {};
                large_num = numbers.at(0);
                
                for (unsigned int i {}; i < numbers.size (); ++i){
                   if (numbers.at(i) > large_num){
                       large_num = numbers.at (i);
                   }
                }    
                cout<< "Your largest number number is: " << large_num << endl;
                break;
            }
            case 'Q': // this displays "goodbye" if user decides to quit.
            case 'q': {
                cout<< "goodbye." << endl;
                break;
            }
            default:
                cout<< "Sorry that is an invalid choice. please try again. "<< endl;
        }
            
    }while ( selection != 'Q' && selection != 'q' );
    
    cout<< endl;
    return 0;
}
