int main()
{
	int a,b,c;
	printf("Entrer Un Nombre A : ");
	scanf("%d",&a);
	
	printf("\nEntrer Un Nombre B : ");
	scanf("%d",&b);
	
	printf("\nEntrer Un Nombre C : ");
	scanf("%d",&c);
	
	printf("\n");
	if( a>=b && a>=c)
        printf("%d est le plus grand.", a);
    else if (b>=a && b>=c)
        printf("%d est le plus grand.", b);
    else
        printf("%d est le plus grand.", c);

}
