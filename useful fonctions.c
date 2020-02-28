int countDigit(long long n)
{
    int count = 0;
    while (n != 0) {
        n = n / 10;
        ++count;
    }
    return count;
}

void splitNum (int number, int size, int v[]) {
    int power = 1, digit, tmp;

    for (int i = 1; i < size; i++) {
        power = power * 10;
    }

    for (int i = 0; i < size; i++) {
            digit = number / power;
            tmp = digit * power;
            number = number - tmp;
            v[i] = digit;
            power = power / 10;
    }
}
