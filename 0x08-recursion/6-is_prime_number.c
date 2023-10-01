int is_prime_number(int n) {
int i;
if (n < 2) {
return (0); /* Not a prime number */
}
for (i = 2; i < n; i++) {
if (n % i == 0) {
return (0); /* Not a prime number */
}
}
return (1); /* Prime number */
}

