# SecondYearProject-BIU
Our project for the second year
Creaters : Aviv David and Dvir Segev
# Interpreter:
An interpreter for FlightGear simulator. the program gets a script as an argument which contains different commands.
The program first lexes the script, then parses it and execute each command. Meanwhile, the programs opens a server in another thred which gets data from the simulator(the simulator connects to this server as a client).
