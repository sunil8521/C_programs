#include <stdio.h>
#include <string.h>
void addBinary(char a[], char b[]) {
    char result[100];
    int i = strlen(a) - 1, j = strlen(b) - 1, carry = 0, k = 0;
    while(i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if(i >= 0) sum += a[i--] - '0';
        if(j >= 0) sum += b[j--] - '0';
        result[k++] = (sum % 2) + '0';
        carry = sum / 2;
    }
    result[k] = '\0';
    strrev(result);
    printf("Sum: %s\n", result);
}
int main() {
    char bin1[100], bin2[100];
    printf("Enter two binary strings: ");
    scanf("%s %s", bin1, bin2);
    addBinary(bin1, bin2);
    return 0;
}