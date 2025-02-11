taskmanager.exe: taskmanager.o processes.o
	gcc taskmanager.o processes.o -o taskmanager.exe

taskmanager.o: taskmanager.c processes.h
	gcc -c taskmanager.c -o taskmanager.o

processes.o: processes.c processes.h
	gcc -c processes.c -o processes.o

clean:
	del *.o *.exe