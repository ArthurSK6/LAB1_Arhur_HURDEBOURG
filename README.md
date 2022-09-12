      # LAB1_Arhut_HURDEBOURG
      Lab 1 for Computer Security by Arthur HURDEBOURG

Here are the line used and some of work ask on Github. An another part of the answer are in folder of each Task.



Task 1 : 
  A:
line : $ echo "Fuzztest1337" | radamsa

	B:
line : $ radamsa -o out/fuzz%n.txt -n 100 -r in/fuzz.txt

Task 2 : I cannot finish this Task, I have some trouble to install AFL on my laptop. I do what I can :
  A:
line : $ gcc example.c -o test -fsanitize=address
	     $ ./ test -clang -fsanitize=address
     
Task 3 :
line : $ gcc my_program.c -o test -fsanitize=address
	     $ ./ test -clang -fsanitize=address
       
       

