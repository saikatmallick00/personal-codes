int main() {
    float a, b;
    char op;
    printf("Enter The First Number\n");
    scanf("%f", &a);
    printf("Enter The Operator\n");
    scanf(" %c", &op);
    printf("Enter The Second Number\n");
    scanf("%f", &b);
    switch (op) {
        case '+' :
             printf("result=%.2f\n", a+b);
             break;
        case '-' :
             printf("result=%.2f\n", a-b);
            break;
        case '*' :
             printf("result=%.2f\n", a*b);
             break;
        case '/' :
             if(a !=0)
             printf("result=%.2f\n", a/b);
             else
             printf("Error\n");
             break;
        default:
             printf("invalid! put interger type numbers\n");

    }
    return 0;

}