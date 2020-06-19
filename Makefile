asymmetric-diffie-hellman-test: test.c src/asymmetric-diffie-hellman.c
	$(CC) -Iinclude -o $@ $^

.PHONY: check
check: asymmetric-diffie-hellman-test
	./$<
