compile :
	gcc Driver.c ./libs/todo.c ./libs/repository.c -o Driver -Wall

test_01 :
	git restore ./storage/todo-repository.txt
	./Driver
