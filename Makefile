STUDENT_ID=580510640
HOMEWORK=HW03_2
TASKNAME=T112_$(HOMEWORK)
OUTPUT=find_nth_term

$(OUTPUT): main.o $(HOMEWORK)_$(STUDENT_ID).o
	gcc -Wall -o $(OUTPUT) main.o $(HOMEWORK)_$(STUDENT_ID).o -lm

main.o: main.c $(TASKNAME).h
	gcc -Wall -c main.c -lm

$(HOMEWORK)_$(STUDENT_ID).o: $(HOMEWORK)_$(STUDENT_ID).c $(TASKNAME).h
	gcc -Wall -c $(HOMEWORK)_$(STUDENT_ID).c -lm

clean:
	rm -vf *.o *.exe $(OUTPUT)

