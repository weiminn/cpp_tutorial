# will run only if test.o doesn't exist, or test.cpp is older than test.o 
test.o: test.cpp
	echo "Compiling test"
	g++ test.cpp -o test.o

	files := file1 file2
	
out = out
files := file1 file2
out_files := $(wildcard $(out)/*)
# = also works

# some_file: 
# 	echo Test variable without dependency: $(files)

file1:
	touch $(out)/file1
file2:
	touch $(out)/file2

# if you want to depend, you need to declare targets first!
some_file: $(files)
	echo Look at this variable: $(files)

hello:
	echo "Hello World!"

list:
	echo Out files: $(out_files)

modules: arraylist.o linkedlist.o main.o

arraylist.o: ../ds/arraylist/src/arraylist.cpp
	g++ -Wall -o $(out)/$@ -c ../ds/arraylist/src/arraylist.cpp \
	-I ../ds/arraylist/inc/ -I ../ds/nodes/

linkedlist.o: ../ds/linkedlist/src/linkedlist.cpp
	g++ -Wall -o $(out)/$@ -c ../ds/linkedlist/src/linkedlist.cpp \
	-I ../ds/nodes/ -I ../ds/arraylist/inc/ -I ../ds/linkedlist/inc/

main.o: ../ds/main/src/main.cpp
	g++ -Wall -o $(out)/$@ ../ds/main/src/main.cpp \
	-I ../ds/linkedlist/inc/ -I ../ds/arraylist/inc/ -I ../ds/nodes/ \
	$(out)/linkedlist.o $(out)/arraylist.o

run: modules
	./$(out)/main.o

clean: # not intended to be a file name
	rm -f $(out_files)