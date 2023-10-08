## Echo Machine - The Return Of Promises

### Author: Emmanuel(PabloPotat0) 

This is the void. Send it whatever you want and it will Return Of Promises!!!

## Return to wi vulnerabiltiy

In a binary, a function is intentionally left vulnerable with a buffer overflow vulnerability. By exploiting this vulnerability, you can overwrite the return address on the stack and redirect the program's flow to the "secret" function, passing the required parameters.

The parameters are usually passed on the stack or in registers, depending on the calling convention of the architecture. You can now craft a payload that takes advantage of the vulnerability to set up the correct arguments for the "secret" function and then triggers the vulnerability to execute the function with the desired parameters.

## Solution

`Local solve: python3 exploit.py`

`Local debugging: python3 exploit.py GDB`

`Remote solve: python3 exploit REMOTE <IP> <PORT>`

## SETUP

```
# Build docker image
docker build -t echo .

# Run image
docker run -p 9000:9000 echo

```