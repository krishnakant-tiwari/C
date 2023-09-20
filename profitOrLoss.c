int main()
{
    float P,S,p,l;
    // P - Purchasing Price
    // S - Selling Price
    // p - profit
    // l - loss
    
    printf(" <=== CALCULATE PROFIT OR LOSS ===> \n\n");
    
    printf("Please Enter Purchasing Price : ");
    scanf("%f",&P);
    
    printf("Please Enter Selling Price : ");
    scanf("%f",&S);
    
    if(S>P)
    {
     p=S-P;
     printf("The Profit Is = %f",p);
    }
    
    else if(P>S)
    {
     l=P-S;
     printf("The Loss Is = %f",l);
    }
    
    else
    {
     printf("No Profit And Loss");
    }
    return 0;
}
