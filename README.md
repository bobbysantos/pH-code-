Features
pH Level Input: Users can input their skin's pH level to customize the hydration reminders.
Customized Reminders: Based on the entered pH, the program calculates an interval for hydration reminders.
Continuous Reminders: Once started, the program will remind the user to hydrate at the specified interval continuously.
How to Use
Compile the Program: Use a C++ compiler to compile the program. For GCC, you would use:
Copy code
g++ -o HydrationReminder main.cpp -pthread
Ensure you include the -pthread flag to enable multi-threading support.
Run the Program: Start the program from the command line:
Copy code
./HydrationReminder
Enter pH Level: Upon execution, enter your skin pH when prompted.
Receive Reminders: After entering your pH, the program will calculate the appropriate interval and begin the hydration reminders at that rate.
