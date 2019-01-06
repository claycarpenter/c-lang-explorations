# Exercise 29

## Building

Compiling:
```
# compile the lib file and make the .so
# you may need -fPIC here on some platforms. add that if you get an error
$ cc -c libex29.c -o libex29.o
$ cc -shared -o libex29.so libex29.o
```

Making the loader program:

```
# make the loader program
$ cc -Wall -g -DNDEBUG -ldl ex29.c -o ex29
```

On Ubuntu, use this arguments order:

```
$ cc -Wall -g -DNDEBUG ex29.c -ldl -o ex29
```

## Testing

```
$ ./ex29 ./libex29.so print_a_message "hello there"
A STRING: hello there
```
