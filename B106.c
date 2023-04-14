int main() {
    int sum = 0;
    int count = 0;
    int num;

    while (count < 5) {
        scanf("%d", &num);
        sum += num;
        count++;
    }

    printf("%d", sum);

    return 0;
}
