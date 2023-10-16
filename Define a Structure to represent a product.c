#include<stdio.h>
#include<string.h>
typedef struct
{
    int id;
    char name[100];
    double price;
    int quantity;
} product;
void displayproduct(product product)
{
    printf("Product ID : %d\n",product.id);
    printf("Product Name : %s\n",product.name);
    printf("Product price : $%.2f\n",product.price);
    printf("Quantity Available : %d\n",product.quantity);
    printf("\n");
}


int main()
{
    product inventory[10];
    int count = 0;
    int choice;
    while(1)
    {
        printf("\n");
        printf("Welcome to Our online store\n");
        printf("----------------------------\n");
        printf("1. Add Product\n");
        printf("2. Update Product\n");
        printf("3. Delet Product\n");
        printf("4. Display Product\n");
        printf("5. Display Individual Product\n");
        printf("6. Exist\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        printf("\n");
        if(choice == 1)
        {
            if(count < 10)
            {
                printf("Enter Product ID : ");
                scanf("%d",&inventory[count].id);

                printf("Enter Product Name : ");
                scanf("%s",&inventory[count].name);

                printf("Enter Price : ");
                scanf("%lf",&inventory[count].price);

                printf("Enter  Quantity : ");
                scanf("%d",&inventory[count].quantity);
                count++;

            }
            else
            {
                printf("Inventory is full . Cannot add more Products.\n");
            }
        }
        else if (choice == 2)
        {
            printf("Enter Product ID to Update : ");
            int updateID;
            scanf("%d",&updateID);
            int found = 0;

            for(int i = 0; i < count; i++ )
            {
                if(inventory[i].id == updateID)
                {
                    printf("Enter New Price : ");
                    scanf("%lf",&inventory[i].price);
                    printf("Enter New Quantity : ");
                    scanf("%d",&inventory[i].quantity);
                    found = 1;
                    break;
                }
            }

            if (!found)
            {
                printf("Product Not Found.\n");
            }
        }
        else if (choice == 3)
        {
            printf("Enter Product ID to Delet : ");
            int deletID;
            scanf("%d",&deletID);
            int deletindex = -1;
            for(int i = 0; i < count; i++ )
            {
                if(inventory[i].id == deletID)
                {

                    deletindex = i;
                    break;
                }
            }

            if (deletindex!= -1)
            {
                for(int i = deletindex; i < count -1; i++)
                {
                    inventory[i] = inventory[i + 1];
                }
                count--;
                printf("Producted Deleted .\n");
            }
            else
            {
                printf("Product Not Found.\n");
            }
        }
        else if (choice == 4)
        {
            printf("Products in Inventory :\n");
            for (int i = 0; i < count; i++)
            {
                printf("Product %d :\n",i+1);
                displayproduct(inventory[i]);
            }
        }
        else if (choice == 5)
        {
            printf("Enter Product ID : ");
            int productID;
            scanf("%d",&productID);
            int found = 0;
            int i;
            for(i = 0; i < count; i++ )
            {
                if(inventory[i].id == productID)
                {
                    printf("Product Found :\n ");
                    displayproduct(inventory[i]);
                    found = 1;
                    break;
                }
            }

            if (!found)
            {
                printf("Product Not Found.\n");
            }
        }
        else if(choice == 6)
        {
            printf("Exiting the program.\n");
            break;
        }
        else
        {
            printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;

}
