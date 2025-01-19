//#include <iostream>
//using namespace std;
//
//int main() {
//    int value = 5;
//
//    // Apply increment and decrement operators
//    cout << ++value << endl;
//    cout << value << endl;  
//    cout << ++value << endl; 
//    cout << ++value << endl; 
//    cout << value << endl;   
//    cout << value + 2 << endl; 
//
//    return 0;
//}
	//Flow Chart
//	 Start 
//	   |
//	   v
//	 value = 5 
//	   | 
//	   v 
//	value = value + 1 
//	   | 
//	   v 
//	 print 6 
//	   | 
//	   v 
//	 print 6 
//	   | 
//	   v 
//	value = value + 1 
//	   | 
//	   v 
//	 print 7 
//	   | 
//	   v 
//	value = value + 1 
//	   | 
//	   v 
//	 print 8 
//	   | 
//	   v 
//	 print 8 
//	   | 
//	   v 
//	 print 10 
//	   | 
//	   v 
//	  End

//#include <iostream>
//using namespace std;
//
//int main() {
//	//Declare a variable to hold the distance
//    double miles, kilometers, meters, centimeters, millimeters, micrometers;
//    
//    cout << "Enter the distance between SHU and your home in miles: ";
//    cin >> miles;
//    
//    //Conversion Factors
//    kilometers = miles * 1.60934;
//    meters = kilometers * 1000;
//    centimeters = meters * 100;
//    millimeters = centimeters * 10;
//    micrometers = millimeters * 1000;
//    
//    //Output
//    cout << "Distance in kilometers: " << kilometers << " km" << endl;
//    cout << "Distance in meters: " << meters << " m" << endl;
//    cout << "Distance in centimeters: " << centimeters << " cm" << endl;
//    cout << "Distance in millimeters: " << millimeters << " mm" << endl;
//    cout << "Distance in micrometers: " << micrometers << " µm" << endl;
//    
//    return 0;
//}
							//Flow Chart
//								Start 
//								 | 
//								 v 
//						Input distance in miles
//							     | 
//								 v 
//						Convert miles to kilometers (km = miles * 1.60934)
//							     | 
//								 v 
//						Convert kilometers to meters (meters = km * 1000) 
//							     | 
//								 v 
//						Convert meters to centimeters (cm = meters * 100) 
//							     | 
//								 v 
//						Convert centimeters to millimeters (mm = cm * 10) 
//							     | 
//								 v 
//						Convert millimeters to micrometers (µm = mm * 1000)  
//							     | 
//								 v 
//						Print distances in km, m, cm, mm, and µm 
//							     | 
//								 v 
//								End


//#include <iostream>
//using namespace std;
//
//int main() {
//    // Variables to store total credit hours and total points earned
//    int totalCreditHours = 0;
//    float totalPoints = 0.0;
//
//    // Variables for individual courses
//    int creditHours[5];
//    float gradePoints[5];
//
//    // Input credit hours and grade points for 5 courses
//    for (int i = 0; i < 5; ++i) {
//        cout << "Enter credit hours for course " << i + 1 << ": ";
//        cin >> creditHours[i];
//        cout << "Enter grade point for course " << i + 1 << ": ";
//        cin >> gradePoints[i];
//
//        // Calculate total points and credit hours
//        totalPoints += creditHours[i] * gradePoints[i];
//        totalCreditHours += creditHours[i];
//    }
////
//    float SGPA = totalPoints / totalCreditHours;
//
//    // Output 
//    cout << "The SGPA for the semester is: " << SGPA << endl;
//
//    return 0;
//}

		//Flow Chart
//	       Start
//             |
//             v
//Initialize totalCreditHours to 0
//             |
//             v
//Initialize totalPoints to 0.0
//             |
//             v
//For each course from 1 to 5:
//             |
//             v
//     Input credit hours
//             |
//             v
//     Input grade points
//             |
//             v
//Compute points for the course (credit hours * grade points)
//            |
//            v
//	Add points to totalPoints
//            |
//            v
//  Add credit hours to totalCreditHours
//            |
//            v
//Compute SGPA (totalPoints / totalCreditHours)
//            |
//            v
//       Print SGPA
//            |
//            v
//           End


//#include <iostream>
//#include <math.h> 
//using namespace std;
//
//int main() {
//    float a = 2.3; // Assigning a float value to a
//    float b = -4.5; // Assigning a float value to b
//    int c;
//
//    cout << "Enter the integer value for c: ";
//    cin >> c;
//
//    // Calculating the discriminant
//    float discriminant = b * b - 4 * a * c;
//
//    // Check if the discriminant is non-negative (real roots)
//    if (discriminant >= 0) {
//        // Calculating the two roots using the quadratic formula
//        float x1 = (-b + sqrt(discriminant)) / (2 * a);
//        float x2 = (-b - sqrt(discriminant)) / (2 * a);
//
//        // Displaying the results
//        cout << "The roots of the quadratic equation are: " << endl;
//        cout << "x1 = " << x1 << endl;
//        cout << "x2 = " << x2 << endl;
//    } else {
//        // If the discriminant is negative, there are no real roots
//        cout << "The quadratic equation has no real roots." << endl;
//    }
//
//    return 0;
//}

			//Flow Chart
//	          Start 
//	            | 
//	            v 
// 	   Assign float values a and b 
//	            | 
//	            v 
//	    Input integer value for c 
//	            | 
//	            v 
//	Calculate discriminant (b^2 - 4ac) 
//	            | 
//	            v 
//    	Is discriminant >= 0
//	      /            \ 
//       yes              no 
//        /                 \
//	   v                   v 
//Calculate roots        Print "No real roots" 
//x1 and x2                   | 
//using                       | 
//quadratic                   | 
//formula 					|
//   |                        |   
//   v						|
//Print x1 and x2				|
//   |  						v
//   v 				       End
//  End

//#include <iostream>
//using namespace std;
//
//int main() {
//    // Declare variables
//    double a, b, c, x, y, d;
//    double A;
//
//    // Assign values to the variables
//    cout << "Enter values for a, b, c, x, y, d: " << endl;
//    cin >> a >> b >> c >> x >> y >> d;
//
//    // Calculate A using the given formula 
//    A = 7 * 7 * b * (x * y + a) / c - 0.8 + 2 * b * d * (x + a) * (1 / y);
//
//    // Output the result
//    cout << "The value of A is: " << A << endl;
//
//    return 0;
//}

							//Flow Chart
//                              Start 
//							    | 
//								v 
//					Declare variables: a, b, c, x, y, d,  
//							    | 
//								v 
//					Prompt user to enter values for a, b, c, x, y, d 
//					            | 
//								v 
//					Input values for a, b, c, x, y, d 
//					            | 
//								v 
//		Calculate A: A = 7 * 7 * b * (x * y + a) / c - 0.8 + 2 * b * d * (x + a) * (1 / y) 
//					            | 
//								v 
//					Output the value of A 
//					            | 
//								v 
//							   End



//#include <iostream>
//using namespace std;
//
//int main() {
//    int num1, num2, num3;
//
//    // Input three integer numbers
//    cout << "Enter three integer numbers: ";
//    cin >> num1 >> num2 >> num3;
//
//    // Compare the numbers using nested if 
//    if (num1 == num2) {
//        if (num2 == num3) {
//            cout << "All values are equal" << endl;
//        } else {
//            cout << "They all are not equal" << endl;
//        }
//    } else {
//        cout << "They all are not equal" << endl;
//    }
//
//    return 0;
//}


								//Flow Chart
//                                    Start 
//									  | 
//									  v 
//							Declare variables: num1, num2, num3 
//								      | 
//									  v 
//							Prompt user to enter three integers 
//							          | 
//									  v 
//							Input num1, num2, num3 
//							          | 
//									  v 
//							Is num1 equal to num2 
//							      /         \ 
//								yes          no 
//								/             \ 
//							   v               v 
//						Is num2 equal to num3?    Print "They all are not equal" 
//						     /                   \ 
//							yes                  no 
//							/                      \ 
//						   v                        v 
//				Print "All values are equal"      Print "They all are not equal" 
//				            | 
//							v 
//						   End



//#include <iostream>
//using namespace std;
//
//int main() {
//    char gender;
//
//    // Input a single letter
//    cout << "Enter a single letter (m/f): ";
//    cin >> gender;
//
//    // Check the input letter using if-else statement
//    if (gender == 'm' || gender == 'M') {
//        cout << "You are a male" << endl;
//    } else {
//        cout << "You are a female" << endl;
//    }
//
//    return 0;
//}


//Flow Chart
//Start
//  |
//  v
//Declare variable: gender (char)
//  |
//  v
//Prompt user to enter a single letter (m/f)
//  |
//  v
//Input gender
//  |
//  v
//Is gender equal to 'm' or 'M'?
// /   \
//yes   no
///      \
//v       v
//Print "You are a male"   Print "You are a female"
//  |
//  v
//End


//#include <iostream>
//using namespace std;
//
//int main() {
//    int marks;
//    
//    // Input marks of the student
//    cout << "Enter the marks obtained by the student (out of 100): ";
//    cin >> marks;
//    
//    // Determine the grade using nested if-else statements and logical operators
//    if (marks >= 90) {
//        cout << "Grade: A+" << endl;
//    } else {
//        if (marks >= 70 && marks < 90) {
//            cout << "Grade: A" << endl;
//        } else {
//            if (marks >= 50 && marks < 70) {
//                cout << "Grade: B" << endl;
//            } else {
//                if (marks < 50) {
//                    cout << "Grade: F" << endl;
//                }
//            }
//        }
//    }
//
//    return 0;
//}

////Flow Chart
//Start
//  |
//  v
//Declare variable: marks
//  |
//  v
//Prompt user to enter marks obtained by the student (out of 100)
//  |
//  v
//Input marks
//  |
//  v
//Is marks >= 90
// /    \
//yes    no
///       \
//v        v
//Print "Grade: A+"   Is marks >= 70 and < 90
//                   /    \
//                  yes    no
//                 /       \
//                v         v
//Print "Grade: A"     Is marks >= 50 and < 70
//                   /    \
//                  yes    no
//                 /       \
//                v         v
//Print "Grade: B"     Is marks < 50
//                   /    \
//                  yes    no
//                 /       \
//                v         v
//            Print "Grade: F"
//                   |
//                   v
//                  End


//#include <iostream>
//using namespace std;
//
//int main() {
//    char gender, city;
//    int age;
//    double salary;
//
//    // Input gender, age, city name, and salary
//    cout << "Enter gender (F/M): ";
//    cin >> gender;
//    cout << "Enter age: ";
//    cin >> age;
//    cout << "Enter city (K/H/S/G): ";
//    cin >> city;
//    cout << "Enter present salary: ";
//    cin >> salary;
//
//    // Adjust salary
//    if ((gender == 'F' || gender == 'f') && (age >= 25 && age <= 35) && (city == 'K' || city == 'k' || city == 'H' || city == 'h')) {
//        salary += 2000;
//        cout << "You are eligible for a salary increase. Net salary: " << salary << endl;
//    } else if ((gender == 'M' || gender == 'm') && (age >= 25 && age <= 40) && (city == 'S' || city == 's' || city == 'G' || city == 'g')) {
//        salary += 2500;
//        cout << "You are eligible for a salary increase. Net salary: " << salary << endl;
//    } else {
//        cout << "No salary increase: " << salary << endl;
//    }
//
//    return 0;
//}


//Flow Chart
//Start
//  |
//  v
//Declare variables: gender, city (char), age (int), salary (double)
//  |
//  v
//Prompt user to enter gender (F/M)
//  |
//  v
//Input gender
//  |
//  v
//Prompt user to enter age
//  |
//  v
//Input age
//  |
//  v
//Prompt user to enter city (K/H/S/G)
//  |
//  v
//Input city
//  |
//  v
//Prompt user to enter present salary
//  |
//  v
//Input salary
//  |
//  v
//Is gender == 'F' or 'f' and age between 25-35 and city == 'K'/'k' or 'H'/'h'?
// /   \
//yes   no
///      \
//v       v
//Increase salary by 2000   Is gender == 'M' or 'm' and age between 25-40 and city == 'S'/'s' or 'G'/'g'?
//Print net salary   /    \
//                  yes   no
//                 /       \
//                v         v
//Increase salary by 2500   Print no increase, present salary
//Print net salary
//  |
//  v
//End




//#include <iostream>
//#include <math.h> 
//using namespace std;
//
//int main() {
//    float a, b, c;
//    float root1, root2, disc;
//
//    // Input coefficients a, b, and c
//    cout << "Enter coefficients a, b, and c: ";
//    cin >> a >> b >> c;
//
//    // Calculate the discriminant
//    disc = b * b - 4 * a * c;
//
//    // Check if the discriminant is greater than zero
//    if (disc > 0) {
//        // Calculate the two roots using the quadratic formula
//        root1 = (-b + sqrt(disc)) / (2.0 * a);
//        root2 = (-b - sqrt(disc)) / (2.0 * a);
//
//        // Display the results
//        cout << "The roots of the quadratic equation are real and unequal." << endl;
//        cout << "root1 = " << root1 << endl;
//        cout << "root2 = " << root2 << endl;
//    } else if (disc == 0) {
//        // If discriminant is zero, roots are real and equal
//        root1 = root2 = -b / (2.0 * a);
//        cout << "The roots of the quadratic equation are real and equal." << endl;
//        cout << "root1 = root2 = " << root1 << endl;
//    } else {
//        // If discriminant is less than zero, roots are complex and unequal
//        cout << "The roots of the quadratic equation are complex and unequal." << endl;
//        cout << "No real roots exist." << endl;
//    }
//
//    return 0;
//}

//Flow Chart
//Start
//  |
//  v
//Declare variables: a, b, c, root1, root2, disc
//  |
//  v
//Prompt user to enter coefficients a, b, and c
//  |
//  v
//Input a, b, c
//  |
//  v
//Calculate discriminant (disc = b^2 - 4ac)
//  |
//  v
//Is disc > 0?
// /    \
//yes    no
///       \
//v        v
//Calculate root1, root2   Is disc == 0?
//root1 = (-b + sqrt(disc)) / (2.0 * a)  /     \
//root2 = (-b - sqrt(disc)) / (2.0 * a)  yes    no
//Print roots are real and unequal      /         \
//      /                               v           v
//     /                            Calculate root1  Print roots are complex
//    /                             root1 = -b / (2.0 * a) and unequal
//   /                              Print roots are real
//  /                               and equal
// v
//Print root1, root2
//  |
//  v
//End


//#include <iostream>
//#include <cmath>  // for sqrt() function
//
//using namespace std;
//
//int main() {
//    // Declare variables
//    double a, b, c;
//
//    // Input the coefficients 
//    cout << "Enter the coefficients a, b, and c for the quadratic equation ax^2 + bx + c = 0:" << endl;
//    cout << "a = ";
//    cin >> a;
//    cout << "b = ";
//    cin >> b;
//    cout << "c = ";
//    cin >> c;
//
//    // Calculate the discriminant
//    double discriminant = b * b - 4 * a * c;
//
//    // Check if the discriminant is greater than or equal to zero (real roots) or less than zero (imaginary roots)
//    if (discriminant > 0) {
//        // Two real and distinct roots
//        double root1 = (-b + sqrt(discriminant)) / (2 * a);
//        double root2 = (-b - sqrt(discriminant)) / (2 * a);
//        cout << "The roots are real and distinct." << endl;
//        cout << "Root 1 = " << root1 << endl;
//        cout << "Root 2 = " << root2 << endl;
//    } 
//    else if (discriminant == 0) {
//        // One real root (repeated root)
//        double root = -b / (2 * a);
//        cout << "The root is real and repeated." << endl;
//        cout << "Root = " << root << endl;
//    } 
//    else {
//        // Two imaginary (complex) roots
//        double realPart = -b / (2 * a);
//        double imaginaryPart = sqrt(-discriminant) / (2 * a);
//        cout << "The roots are imaginary." << endl;
//        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
//        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
//    }
//
//    return 0;
//}


//Flow Chart
//Start
//  |
//  v
//Declare variables: a, b, c, discriminant, root1, root2, realPart, imaginaryPart
//  |
//  v
//Prompt user to enter coefficients a, b, and c
//  |
//  v
//Input a, b, c
//  |
//  v
//Calculate discriminant (discriminant = b^2 - 4ac)
//  |
//  v
//Is discriminant > 0
// /    \
//yes    no
///       \
//v        v
//Calculate root1 and root2  Is discriminant == 0?
//root1 = (-b + sqrt(discriminant)) / (2 * a)  /     \
//root2 = (-b - sqrt(discriminant)) / (2 * a)  yes    no
//Print "The roots are real and distinct"   /         \
//Print root1 and root2                 Calculate realPart and imaginaryPart
//                                    realPart = -b / (2 * a)
//      /                             imaginaryPart = sqrt(-discriminant) / (2 * a)
//     /                              Print "The roots are imaginary"
//    /                               Print root1 and root2
//   v
//Print "The root is real"
//Print root1 = root2
//  |
//  v
//End


//#include <iostream>
//#include <math.h> 
//using namespace std;
//
//int main() {
//    double a, b, c;
//    double root;
//
//    // Input coefficients a, b, and c
//    cout << "Enter coefficients a, b, and c: ";
//    cin >> a >> b >> c;
//
//    // Calculate the discriminant
//    double discriminant = b * b - 4 * a * c;
//
//    // Check if the discriminant is zero
//    if (discriminant == 0) {
//        // Calculate the root
//        root = -b / (2.0 * a);
//        // Display the result
//        cout << "The roots of the quadratic equation are real and equal." << endl;
//        cout << "root1 = root2 = " << root << endl;
//    } else {
//        cout << "The discriminant is not zero and the program is designed to calculate only when zero." << endl;
//    }
//
//    return 0;
//}


//Flow Chart
//Start
//  |
//  v
//Declare variables: a, b, c, root
//  |
//  v
//Prompt user to enter coefficients a, b, and c
//  |
//  v
//Input a, b, c
//  |
//  v
//Calculate discriminant (discriminant = b^2 - 4ac)
//  |
//  v
//Is discriminant == 0?
// /    \
//yes    no
///       \
//v        v
//Calculate root  Print "Discriminant is not zero"
//root = -b / (2.0 * a)
//Print "Roots are real and equal"
//Print root1 = root2 = root
//  |
//  v
//End


//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    // Declare the user ID and password for validation
//    string userID = "abdullah123";
//    string password = "abdullah234";
//    string enteredID, enteredPassword;
//
//    //Input ID
//    cout << "Enter your User ID: ";
//    cin >> enteredID;
//
//    // Use a switch case for checking the ID
//    switch (enteredID == userID) {
//        case true: { 
//        
//            cout << "Enter your Password: ";
//            cin >> enteredPassword;
//            
//            switch (enteredPassword == password) {
//                case true: {  
//                    cout << "Welcome To Hafiz Abdullah" << endl;
//                    break;
//                }
//                case false: {  
//                    cout << "Incorrect Password!" << endl;
//                    break;
//                }
//            }
//            break;
//        }
//        case false: { 
//            cout << "Invalid ID!" << endl;
//            break;
//        }
//    }
// return 0;
//}

//Flow Chart
//Start
//  |
//  v
//Declare variables: userID, password, enteredID, enteredPassword
//  |
//  v
//Prompt user to enter User ID
//  |
//  v
//Input enteredID
//  |
//  v
//Check if enteredID == userID
//  |
//  v
//Is enteredID == userID?
// /    \
//true   false
///       \
//v        v
//Prompt user to enter Password  Print "Invalid ID!"
//  |
//  v
//Input enteredPassword
//  |
//  v
//Check if enteredPassword == password
//  |
//  v
//Is enteredPassword == password?
// /    \
//true   false
///       \
//v        v
//Print "Welcome To Hafiz Abdullah"   Print "Incorrect Password!"
//  |
//  v
//End


//#include <iostream>
//#include <math.h> 
//using namespace std;
//
//int main() {
//    int choice, number;
//
//    // Display menu 
//    cout << "Choose a number (1-4) from the menu:" << endl;
//    cout << "1. Calculate the square root of the number" << endl;
//    cout << "2. Calculate the cube of the number" << endl;
//    cout << "3. Print the number 50 times" << endl;
//    cout << "4. Print the table of the number" << endl;
//    cin >> choice;
//
//    // Prompt user to enter the number to perform the chosen operation
//    if (choice >= 1 && choice <= 4) {
//        cout << "Enter the number: ";
//        cin >> number;
//    }
//
//    // Use switch case to perform the operation
//    switch (choice) {
//        case 1:
//            cout << "Square root of " << number << " is " << sqrt(number) << endl;
//            break;
//        case 2:
//            cout << "Cube of " << number << " is " << number * number * number << endl;
//            break;
//        case 3:
//            for (int i = 0; i < 50; ++i) {
//                cout << number << " ";
//            }
//            cout << endl;
//            break;
//        case 4:
//            cout << "Table of " << number << ":" << endl;
//            for (int i = 1; i <= 10; ++i) {
//                cout << number << " x " << i << " = " << number * i << endl;
//            }
//            break;
//        default:
//            cout << "Invalid choice!" << endl;
//            break;
//    }
//
//    return 0;
//}


//Flow Chart
//Start
//  |
//  v
//Display menu
//  |
//  v
//Prompt user to enter choice
//  |
//  v
//Input choice
//  |
//  v
//Is choice between 1 and 4
// /    \
//yes    no
///       \
//v        v
//Prompt user to enter number   Print "Invalid choice"
//  |
//  v
//Input number
//  |
//  v
//Switch on choice
//  |
//  v
//Case 1: Calculate and print square root
//  |
//  v
//Case 2: Calculate and print cube
//  |
//  v
//Case 3: Print number 50 times
//  |
//  v
//Case 4: Print table of number
//  |
//  v
//End


//#include <iostream>
//using namespace std;
//
//int main() {
//    int mainChoice, subChoice;
//
//    // Display main menu options
//    cout << "Game Control Menu:" << endl;
//    cout << "1. Start Game" << endl;
//    cout << "2. Settings" << endl;
//    cout << "3. Exit" << endl;
//    cout << "Enter your choice (1-3): ";
//    cin >> mainChoice;
//
//    // Main menu switch case
//    switch (mainChoice) {
//        case 1:
//            cout << "Starting the game..." << endl;
//            // Insert game start logic here
//            break;
//
//        case 2:
//            cout << "Settings Menu:" << endl;
//            cout << "1. Audio Settings" << endl;
//            cout << "2. Video Settings" << endl;
//            cout << "3. Gameplay Settings" << endl;
//            cout << "Enter your choice (1-3): ";
//            cin >> subChoice;
//
//            // Nested switch case for settings menu
//            switch (subChoice) {
//                case 1:
//                    cout << "Audio Settings..." << endl;
//                    // Insert audio settings logic here
//                    break;
//                case 2:
//                    cout << "Video Settings..." << endl;
//                    // Insert video settings logic here
//                    break;
//                case 3:
//                    cout << "Gameplay Settings..." << endl;
//                    // Insert gameplay settings logic here
//                    break;
//                default:
//                    cout << "Invalid choice in Settings Menu!" << endl;
//                    break;
//            }
//            break;
//
//        case 3:
//            cout << "Exiting the game..." << endl;
//            // Exit logic here
//            break;
//
//        default:
//            cout << "Invalid choice in Main Menu!" << endl;
//            break;
//    }
//
//    return 0;
//}
//
//
//////Flow Chart
////Start
////  |
////  v
////Display Main Menu
////  |
////  v
////Input mainChoice
////  |
////  v
////Switch on mainChoice
////  |
////  v
////Case 1: Start Game
////  |
////  v
////Print "Starting the game..."
////  |
////  v
////Case 2: Display Settings Menu
////  |
////  v
////Input subChoice
////  |
////  v
////Switch on subChoice
////  |
////  v
////Case 1: Audio Settings
////  |
////  v
////Print "Audio Settings..."
////  |
////  v
////Case 2: Video Settings
////  |
////  v
////Print "Video Settings..."
////  |
////  v
////Case 3: Gameplay Settings
////  |
////  v
////Print "Gameplay Settings..."
////  |
////  v
////Default: Print "Invalid choice in Settings Menu!"
////  |
////  v
////Case 3: Exit
////  |
////  v
////Print "Exiting the game..."
////  |
////  v
////Default: Print "Invalid choice in Main Menu!"
////  |
////  v
////End
//
//
////#include <iostream>
////using namespace std;
////
////int main() {
////    float previousReading, currentReading, unitsConsumed, grossBill, netBill;
////    
////    // Input previous and current reading
////    cout << "Enter the previous reading: ";
////    cin >> previousReading;
////    cout << "Enter the current reading: ";
////    cin >> currentReading;
////    
////    // Calculate total units consumed
////    unitsConsumed = currentReading - previousReading;
////    
////    // Calculate the gross bill based on units 
////    if (unitsConsumed <= 300) {
////        grossBill = unitsConsumed * 4;
////        // Apply subsidy of 3%
////        netBill = grossBill * 0.97;
////    } else if (unitsConsumed <= 400) {
////        grossBill = unitsConsumed * 6;
////        netBill = grossBill;
////    } else {
////        grossBill = unitsConsumed * 7;
////        // Apply surcharge of 4%
////        netBill = grossBill * 1.04;
////    }
////    
////    // Display results
////    cout << "Total units consumed: " << unitsConsumed << endl;
////    cout << "Gross Bill: Rs. " << grossBill << endl;
////    cout << "Net Bill after adjustments: Rs. " << netBill << endl;
////
////    return 0;
////}
//
//
////Flow Chart
////Start
////  |
////  v
////Declare variables: previousReading, currentReading, unitsConsumed, grossBill, netBill
////  |
////  v
////Prompt user to enter previous reading
////  |
////  v
////Input previousReading
////  |
////  v
////Prompt user to enter current reading
////  |
////  v
////Input currentReading
////  |
////  v
////Calculate unitsConsumed = currentReading - previousReading
////  |
////  v
////Is unitsConsumed <= 300
//// /    \
////yes    no
/////       \
////v        v
////Calculate grossBill = unitsConsumed * 4  Is unitsConsumed <= 400
////Apply subsidy: netBill = grossBill * 0.97  /    \
////    |                                     yes    no
////    v                                    /       \
////   Display Results                      v         v
////                                      Calculate grossBill = unitsConsumed * 6
////                                      netBill = grossBill
////                                      |
////                                      v
////                                     Display Results
////                                     |
////                                     v
////                              Calculate grossBill = unitsConsumed * 7
////                              Apply surcharge: netBill = grossBill * 1.04
////                                     |
////                                     v
////                                    Display Results
////  |
////  v
////End
//
//
////#include <iostream>
////using namespace std;
////
////int main() {
////    int a, b;
////
////    // Ask the user to enter two numbers
////    cout << "Enter two integers (a and b): ";
////    cin >> a >> b;
////
////    // Demonstrating the AND (&&) logical operator
////    if (a > 0 && b > 0) {
////        cout << "Both numbers are positive." << endl;
////    } else {
////        cout << "At least one of the numbers is not positive." << endl;
////    }
////
////    // Demonstrating the OR (||) logical operator
////    if (a == 0 || b == 0) {
////        cout << "At least one of the numbers is zero." << endl;
////    } else {
////        cout << "Neither of the numbers is zero." << endl;
////    }
////
////    // Demonstrating the NOT (!) logical operator
////    if (!(a == b)) {
////        cout << "The numbers are not equal." << endl;
////    } else {
////        cout << "The numbers are equal." << endl;
////    }
////
////    // Demonstrate the Conditional Operator
////    string result = (a > b) ? "a is greater than b" : "a is not greater than b";
////    cout << result << endl;
////
////    return 0;
////}
//
//
////Flow Chart
////Start
////  |
////  v
////Declare variables: a, b
////  |
////  v
////Prompt user to enter two integers (a and b)
////  |
////  v
////Input a, b
////  |
////  v
////Check if a > 0 AND b > 0 (using &&)
//// /    \
////true   false
/////       \
////v        v
////Print "Both numbers are positive"   Print "At least one of the numbers is not positive"
////  |
////  v
////Check if a == 0 OR b == 0 (using ||)
//// /    \
////true   false
/////       \
////v        v
////Print "At least one of the numbers is zero"   Print "Neither of the numbers is zero"
////  |
////  v
////Check if NOT (a == b) (using !)
//// /    \
////true   false
/////       \
////v        v
////Print "The numbers are not equal"   Print "The numbers are equal"
////  |
////  v
////Using Conditional (Ternary) Operator
////  |
////  v
////result = (a > b) ? "a is greater than b" : "a is not greater than b"
////  |
////  v
////Print result
////  |
////  v
////End
//
//
////#include <iostream>
////using namespace std;
////
////int main() {
////    int schoolChoice, departmentChoice;
////
////    // Display school options
////    cout << "Select a School:" << endl;
////    cout << "1. School of Computer Science" << endl;
////    cout << "2. School of Business" << endl;
////    cout << "3. School of Engineering" << endl;
////    cout << "Enter your choice (1-3): ";
////    cin >> schoolChoice;
////
////    // Main switch case for school choices
////    switch (schoolChoice) {
////        case 1:
////            cout << "Select a Department in School of Computer Science:" << endl;
////            cout << "1. Department of Informatics" << endl;
////            cout << "2. Department of Machine Learning" << endl;
////            cout << "Enter your choice (1-2): ";
////            cin >> departmentChoice;
////
////            // Nested switch case for departments in School of Computer Science
////            switch (departmentChoice) {
////                case 1:
////                    cout << "You selected: Department of Informatics" << endl;
////                    break;
////                case 2:
////                    cout << "You selected: Department of Machine Learning" << endl;
////                    break;
////                default:
////                    cout << "Invalid choice in School of Computer Science!" << endl;
////                    break;
////            }
////            break;
////
////        case 2:
////            cout << "Select a Department in School of Business:" << endl;
////            cout << "1. Department of Commerce" << endl;
////            cout << "2. Department of Purchasing" << endl;
////            cout << "Enter your choice (1-2): ";
////            cin >> departmentChoice;
////
////            // Nested switch case for departments in School of Business
////            switch (departmentChoice) {
////                case 1:
////                    cout << "You selected: Department of Commerce" << endl;
////                    break;
////                case 2:
////                    cout << "You selected: Department of Purchasing" << endl;
////                    break;
////                default:
////                    cout << "Invalid choice in School of Business!" << endl;
////                    break;
////            }
////            break;
////
////        case 3:
////            cout << "Select a Department in School of Engineering:" << endl;
////            cout << "1. Department of Mechanical Engineering" << endl;
////            cout << "2. Department of Electrical Engineering" << endl;
////            cout << "Enter your choice (1-2): ";
////            cin >> departmentChoice;
////
////            // Nested switch case for departments in School of Engineering
////            switch (departmentChoice) {
////                case 1:
////                    cout << "You selected: Department of Mechanical Engineering" << endl;
////                    break;
////                case 2:
////                    cout << "You selected: Department of Electrical Engineering" << endl;
////                    break;
////                default:
////                    cout << "Invalid choice in School of Engineering!" << endl;
////                    break;
////            }
////            break;
////
////        default:
////            cout << "Invalid choice!" << endl;
////            break;
////    }
////
////    return 0;
////}
//
////Flow Chart
////Start
////  |
////  v
////Display School Menu
////  |
////  v
////Input schoolChoice
////  |
////  v
////Switch on schoolChoice
////  |    \
////1      other
//// |       \
//// v        v
////Display Computer Science Menu   Print "Invalid choice!"
////  |
////  v
////Input departmentChoice
////  |
////  v
////Switch on departmentChoice
////  |    \
////1      other
//// |       \
//// v        v
////Print "Department of Informatics"   Print "Invalid choice in School of Computer Science!"
////  |
////  v
////Repeat similar logic for School of Business and School of Engineering
////  |
////  v
////End
//
//
//
//
////START
////
////DECLARE integer variable value
////SET value to 5
////
////// Apply increment and print the value
////INCREMENT value by 1 and PRINT value
////PRINT value
////
////INCREMENT value by 1 and PRINT value
////INCREMENT value by 1 and PRINT value
////
////PRINT value
////
////ADD 2 to value and PRINT the result
////
////END
//
////START
////
////DECLARE variables: miles, kilometers, meters, centimeters, millimeters, micrometers
////
////PROMPT user to enter the distance between SHU and their home in miles
////INPUT miles
////
////// Conversion Factors
////SET kilometers = miles * 1.60934
////SET meters = kilometers * 1000
////SET centimeters = meters * 100
////SET millimeters = centimeters * 10
////SET micrometers = millimeters * 1000
////
////// Output the results
////PRINT "Distance in kilometers: " + kilometers + " km"
////PRINT "Distance in meters: " + meters + " m"
////PRINT "Distance in centimeters: " + centimeters + " cm"
////PRINT "Distance in millimeters: " + millimeters + " mm"
////PRINT "Distance in micrometers: " + micrometers + " µm"
////
////END
//
////START
////
////DECLARE integer variable totalCreditHours SET to 0
////DECLARE float variable totalPoints SET to 0.0
////
////DECLARE integer array creditHours of size 5
////DECLARE float array gradePoints of size 5
////
////FOR i from 0 to 4
////    PRINT "Enter credit hours for course i+1:"
////    INPUT creditHours[i]
////    PRINT "Enter grade point for course i+1:"
////    INPUT gradePoints[i]
////    
////    SET totalPoints = totalPoints + (creditHours[i] * gradePoints[i])
////    SET totalCreditHours = totalCreditHours + creditHours[i]
////END FOR
////
////SET SGPA = totalPoints / totalCreditHours
////
////PRINT "The SGPA for the semester is: " + SGPA
////
////END
//
//
//
////START
////
////DECLARE float variables: a, b, c
////SET a to 2.3
////SET b to -4.5
////
////DECLARE float variable discriminant
////DECLARE float variables x1, x2
////
////PRINT "Enter the integer value for c:"
////INPUT c
////
////// Calculate the discriminant
////SET discriminant to b * b - 4 * a * c
////
////// Check if the discriminant is non-negative
////IF discriminant >= 0 THEN
////    // Calculate the two roots using the quadratic formula
////    SET x1 to (-b + sqrt(discriminant)) / (2 * a)
////    SET x2 to (-b - sqrt(discriminant)) / (2 * a)
////
////    // Display the results
////    PRINT "The roots of the quadratic equation are:"
////    PRINT "x1 = " + x1
////    PRINT "x2 = " + x2
////ELSE
////    // If the discriminant is negative, there are no real roots
////    PRINT "The quadratic equation has no real roots."
////ENDIF
////
////END
//
//
//
////START
////
////DECLARE variables: a, b, c, x, y, d, A
////
////// Input values for variables
////PRINT "Enter values for a, b, c, x, y, d:"
////INPUT a, b, c, x, y, d
////
////// Calculate A using the given formula
////SET A = 7 * 7 * b * (x * y + a) / c - 0.8 + 2 * b * d * (x + a) * (1 / y)
////
////// Output the result
////PRINT "The value of A is: " + A
////
////END
//
//
//
////START
////
////DECLARE integer variables: num1, num2, num3
////
////// Input three integer numbers
////PRINT "Enter three integer numbers: "
////INPUT num1, num2, num3
////
////// Compare the numbers using nested if
////IF num1 == num2 THEN
////    IF num2 == num3 THEN
////        PRINT "All values are equal"
////    ELSE
////        PRINT "They all are not equal"
////    ENDIF
////ELSE
////    PRINT "They all are not equal"
////ENDIF
////
////END
//
//
//
////START
////
////DECLARE character variable: gender
////
////// Input a single letter
////PRINT "Enter a single letter (m/f):"
////INPUT gender
////
////// Check the input letter using if-else statement
////IF gender == 'm' OR gender == 'M' THEN
////    PRINT "You are a male"
////ELSE
////    PRINT "You are a female"
////ENDIF
////
////END
//
//
//
////START
////
////DECLARE integer variable: marks
////
////// Input marks of the student
////PRINT "Enter the marks obtained by the student (out of 100):"
////INPUT marks
////
////// Determine the grade using nested if-else statements
////IF marks >= 90 THEN
////    PRINT "Grade: A+"
////ELSE
////    IF marks >= 70 AND marks < 90 THEN
////        PRINT "Grade: A"
////    ELSE
////        IF marks >= 50 AND marks < 70 THEN
////            PRINT "Grade: B"
////        ELSE
////            IF marks < 50 THEN
////                PRINT "Grade: F"
////            ENDIF
////        ENDIF
////    ENDIF
////ENDIF
////
////END
//
//
////START
////
////DECLARE variables: gender, city (char), age (int), salary (double)
////
////// Input gender, age, city name, and salary
////PRINT "Enter gender (F/M):"
////INPUT gender
////PRINT "Enter age:"
////INPUT age
////PRINT "Enter city (K/H/S/G):"
////INPUT city
////PRINT "Enter present salary:"
////INPUT salary
////
////// Adjust salary based on conditions
////IF gender == 'F' OR gender == 'f' AND age >= 25 AND age <= 35 AND (city == 'K' OR city == 'k' OR city == 'H' OR city == 'h') THEN
////    ADD 2000 to salary
////    PRINT "You are eligible for a salary increase. Net salary: " + salary
////ELSE IF gender == 'M' OR gender == 'm' AND age >= 25 AND age <= 40 AND (city == 'S' OR city == 's' OR city == 'G' OR city == 'g') THEN
////    ADD 2500 to salary
////    PRINT "You are eligible for a salary increase. Net salary: " + salary
////ELSE
////    PRINT "No salary increase: " + salary
////ENDIF
////
////END
//
//
////START
////
////DECLARE float variables: a, b, c
////DECLARE float variables: root1, root2, disc
////
////// Input coefficients a, b, and c
////PRINT "Enter coefficients a, b, and c:"
////INPUT a, b, c
////
////// Calculate the discriminant
////SET disc = b * b - 4 * a * c
////
////// Check if the discriminant is greater than zero
////IF disc > 0 THEN
////    // Calculate the two roots using the quadratic formula
////    SET root1 = (-b + sqrt(disc)) / (2.0 * a)
////    SET root2 = (-b - sqrt(disc)) / (2.0 * a)
////    
////    // Display the results
////    PRINT "The roots of the quadratic equation are real and unequal."
////    PRINT "root1 = " + root1
////    PRINT "root2 = " + root2
////ELSE IF disc == 0 THEN
////    // If discriminant is zero, roots are real and equal
////    SET root1 = root2 = -b / (2.0 * a)
////    
////    PRINT "The roots of the quadratic equation are real and equal."
////    PRINT "root1 = root2 = " + root1
////ELSE
////    // If discriminant is less than zero, roots are complex and unequal
////    PRINT "The roots of the quadratic equation are complex and unequal."
////    PRINT "No real roots exist."
////ENDIF
////
////END
//
//
////START
////
////DECLARE double variables: a, b, c
////DECLARE double variables: root1, root2, discriminant
////
////// Input the coefficients
////PRINT "Enter the coefficients a, b, and c for the quadratic equation ax^2 + bx + c = 0:"
////INPUT a, b, c
////
////// Calculate the discriminant
////SET discriminant = b * b - 4 * a * c
////
////// Check if the discriminant is greater than or equal to zero (real roots) or less than zero (imaginary roots)
////IF discriminant > 0 THEN
////    // Calculate the two real and distinct roots
////    SET root1 = (-b + sqrt(discriminant)) / (2 * a)
////    SET root2 = (-b - sqrt(discriminant)) / (2 * a)
////    PRINT "The roots are real and distinct."
////    PRINT "Root 1 = " + root1
////    PRINT "Root 2 = " + root2
////ELSE IF discriminant == 0 THEN
////    // One real root (repeated root)
////    SET root = -b / (2 * a)
////    PRINT "The root is real and repeated."
////    PRINT "Root = " + root
////ELSE
////    // Two imaginary (complex) roots
////    SET realPart = -b / (2 * a)
////    SET imaginaryPart = sqrt(-discriminant) / (2 * a)
////    PRINT "The roots are imaginary."
////    PRINT "Root 1 = " + realPart + " + " + imaginaryPart + "i"
////    PRINT "Root 2 = " + realPart + " - " + imaginaryPart + "i"
////ENDIF
////
////END
//
//
//
////START
////
////DECLARE double variables: a, b, c
////DECLARE double variable: root
////
////// Input coefficients a, b, and c
////PRINT "Enter coefficients a, b, and c:"
////INPUT a, b, c
////
////// Calculate the discriminant
////SET discriminant = b * b - 4 * a * c
////
////// Check if the discriminant is zero
////IF discriminant == 0 THEN
////    // Calculate the root
////    SET root = -b / (2.0 * a)
////    
////    // Display the result
////    PRINT "The roots of the quadratic equation are real and equal."
////    PRINT "root1 = root2 = " + root
////ELSE
////    PRINT "The discriminant is not zero and the program is designed to calculate only when zero."
////ENDIF
////
////END
//
////START
////
////DECLARE string variables: userID, password, enteredID, enteredPassword
////SET userID to "abdullah123"
////SET password to "abdullah234"
////
////// Input ID
////PRINT "Enter your User ID:"
////INPUT enteredID
////
////// Use a switch case for checking the ID
////SWITCH (enteredID == userID)
////    CASE true:
////        PRINT "Enter your Password:"
////        INPUT enteredPassword
////        
////        // Nested switch case for checking the Password
////        SWITCH (enteredPassword == password)
////            CASE true:
////                PRINT "Welcome To Hafiz Abdullah"
////                BREAK
////            CASE false:
////                PRINT "Incorrect Password!"
////                BREAK
////        END SWITCH
////        BREAK
////    CASE false:
////        PRINT "Invalid ID!"
////        BREAK
////END SWITCH
////
////END
//
//START
//
//DECLARE integer variables: choice, number
//
//// Display menu
//PRINT "Choose a number (1-4) from the menu:"
//PRINT "1. Calculate the square root of the number"
//PRINT "2. Calculate the cube of the number"
//PRINT "3. Print the number 50 times"
//PRINT "4. Print the table of the number"
//INPUT choice
//
//// Prompt user to enter the number to perform the chosen operation
//IF choice >= 1 AND choice <= 4 THEN
//    PRINT "Enter the number:"
//    INPUT number
//ENDIF
//
//// Use switch case to perform the operation
//SWITCH choice
//    CASE 1:
//        PRINT "Square root of " + number + " is " + sqrt(number)
//        BREAK
//    CASE 2:
//        PRINT "Cube of " + number + " is " + number * number * number
//        BREAK
//    CASE 3:
//        FOR i FROM 0 TO 49
//            PRINT number + " "
//        END FOR
//        PRINT new line
//        BREAK
//    CASE 4:
//        PRINT "Table of " + number + ":"
//        FOR i FROM 1 TO 10
//            PRINT number + " x " + i + " = " + number * i
//        END FOR
//        BREAK
//    DEFAULT:
//        PRINT "Invalid choice!"
//        BREAK
//END SWITCH

//END



//START
//
//DECLARE integer variables: mainChoice, subChoice

// Display main menu options
//PRINT "Game Control Menu:"
//PRINT "1. Start Game"
////PRINT "2. Settings"
////PRINT "3. Exit"
////PRINT "Enter your choice (1-3):"
////INPUT mainChoice
////
////// Main menu switch case
////SWITCH mainChoice
////    CASE 1:
////        PRINT "Starting the game..."
////        // Insert game start logic here
////        BREAK
////
////    CASE 2:
////        PRINT "Settings Menu:"
////        PRINT "1. Audio Settings"
////        PRINT "2. Video Settings"
////        PRINT "3. Gameplay Settings"
////        PRINT "Enter your choice (1-3):"
////        INPUT subChoice
////
////        // Nested switch case for settings menu
////        SWITCH subChoice
////            CASE 1:
////                PRINT "Audio Settings..."
////                // Insert audio settings logic here
////                BREAK
////            CASE 2:
////                PRINT "Video Settings..."
////                // Insert video settings logic here
////                BREAK
////            CASE 3:
////                PRINT "Gameplay Settings..."
////                // Insert gameplay settings logic here
////                BREAK
////            DEFAULT:
////                PRINT "Invalid choice in Settings Menu!"
////                BREAK
////        END SWITCH
////        BREAK
////
////    CASE 3:
////        PRINT "Exiting the game..."
////        // Exit logic here
////        BREAK
////
////    DEFAULT:
////        PRINT "Invalid choice in Main Menu!"
////        BREAK
////END SWITCH
////
////END
//
//



//START
//
//DECLARE float variables: previousReading, currentReading, unitsConsumed, grossBill, netBill
//
//// Input previous and current reading
//PRINT "Enter the previous reading:"
//INPUT previousReading
//PRINT "Enter the current reading:"
//INPUT currentReading
//
//// Calculate total units consumed
//SET unitsConsumed = currentReading - previousReading
//
//// Calculate the gross bill based on units consumed
//IF unitsConsumed <= 300 THEN
//    SET grossBill = unitsConsumed * 4
//    // Apply subsidy of 3%
//    SET netBill = grossBill * 0.97
//ELSE IF unitsConsumed <= 400 THEN
//    SET grossBill = unitsConsumed * 6
//    SET netBill = grossBill
//ELSE
//    SET grossBill = unitsConsumed




//START
//
//DECLARE integer variables: a, b
//
//// Ask the user to enter two numbers
//PRINT "Enter two integers (a and b):"
//INPUT a, b
//
//// Demonstrating the AND (&&) logical operator
//IF a > 0 AND b > 0 THEN
//    PRINT "Both numbers are positive."
//ELSE
//    PRINT "At least one of the numbers is not positive."
//ENDIF
//
//// Demonstrating the OR (||) logical operator
//IF a == 0 OR b == 0 THEN
//    PRINT "At least one of the numbers is zero."
//ELSE
//    PRINT "Neither of the numbers is zero."
//ENDIF
//
//// Demonstrating the NOT (!) logical operator
//IF NOT (a == b) THEN
//    PRINT "The numbers are not equal."
//ELSE
//    PRINT "The numbers are equal."
//ENDIF
//
//// Demonstrate the Conditional Operator
//SET result = (a > b) ? "a is greater than b" : "a is not greater than b"
//PRINT result
//
//END



//START
//
//DECLARE integer variables: schoolChoice, departmentChoice
//
//// Display school options
//PRINT "Select a School:"
//PRINT "1. School of Computer Science"
//PRINT "2. School of Business"
//PRINT "3. School of Engineering"
//PRINT "Enter your choice (1-3):"
//INPUT schoolChoice
//
//// Main switch case for school choices
//SWITCH schoolChoice
//    CASE 1:
//        PRINT "Select a Department in School of Computer Science:"
//        PRINT "1. Department of Informatics"
//        PRINT "2. Department of Machine Learning"
//        PRINT "Enter your choice (1-2):"
//        INPUT departmentChoice
//
//        // Nested switch case for departments in School of Computer Science
//        SWITCH departmentChoice
//            CASE 1:
//                PRINT "You selected: Department of Informatics"
//                BREAK
//            CASE 2:
//                PRINT "You selected: Department of Machine Learning"
//                BREAK
//            DEFAULT:
//                PRINT "Invalid choice in School of Computer Science!"
//                BREAK
//        END SWITCH
//        BREAK
//
//    CASE 2:
//        PRINT "Select a Department in School of Business:"
//        PRINT "1. Department of Commerce"
//        PRINT "2. Department of Purchasing"
//        PRINT "Enter your choice (1-2):"
//        INPUT departmentChoice
//
//        // Nested switch case for departments in School of Business
//        SWITCH departmentChoice
//            CASE 1:
//                PRINT "You selected: Department of Commerce"
//                BREAK
//            CASE 2:
//                PRINT "You selected: Department of Purchasing"
//                BREAK
//            DEFAULT:
//                PRINT "Invalid choice in School of Business!"
//                BREAK
//        END SWITCH
//        BREAK
//
//    CASE 3:
//        PRINT "Select a Department in School of Engineering:"
//        PRINT "1. Department of Mechanical Engineering"
//        PRINT "2. Department of Electrical Engineering"
//        PRINT "Enter your choice (1-2):"
//        INPUT departmentChoice
//
//        // Nested switch case for departments in School of Engineering
//        SWITCH departmentChoice
//            CASE 1:
//                PRINT "You selected: Department of Mechanical Engineering"
//                BREAK
//            CASE 2:
//                PRINT "You selected: Department of Electrical Engineering"
//                BREAK
//            DEFAULT:
//                PRINT "Invalid choice in School of Engineering!"
//                BREAK
//        END SWITCH
//        BREAK
//
//    DEFAULT:
//        PRINT "Invalid choice!"
//        BREAK
//END SWITCH
//
//END


