compile:
	gcc echo.c -no-pie -fno-stack-protector -z execstack -o echo

clean:
	rm echo
