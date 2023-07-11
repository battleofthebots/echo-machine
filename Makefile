compile:
	gcc untitled.c -no-pie -fno-stack-protector -o rop
	checksec --file=rop

clean:
	rm rop