int a = 1, b = 2, c = 3;

a += b += ++c;
printf("%5d%5d%5d\n", a, b, c);
{
    float b = 4.0;
    int c;
    a += c = 5 * b;
    printf("%5d%5.1f%5d\n", a, b, c);
}
printf("%5d%5d%5d\n", a, b, c);

/* {} 안에서 선언된 변수는 거기에서만 유효 하므로 다음과 같은 출력을 보일것 이다.
7 6 4
27 4.0 20
27 6 4
*/