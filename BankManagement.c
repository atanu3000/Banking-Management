#include<stdio.h>
#include<string.h>

int main(){
	char bName[25];
	char fst_name[25],lst_name[25];
	long long int acc;
	char ifsc[20];
	long long int ph;
	printf("\t\t WELLCOME TO OUR BANKING MANAGEMENT\n");
	printf("\t\t ----------------------------------");

	int ch, bank;
	
	do{
		printf("\n\n[1] Add  bank account.");
		printf("\n[2] View Bank details.");
		printf("\n[3] Check  balance.");
		printf("\n[4] Bank transfer.");
		printf("\n[5] Mobile recharge.");
		printf("\n[6] Exit");
		printf("\n\t choose any one: ");
		scanf("%d",&ch);
		switch(ch){
			case 1:	//Add  bank account
				retake:
				printf("\n\n[1] Axis Bank");
				printf("\n[2] HDFC Bank");
				printf("\n[3] ICICI Bank");
				printf("\n[4] State Bank of India");
				printf("\n[5] Punjab National Bank");
				printf("\n[6] Bank of Baroda");
				printf("\n\nCHOOSE YOUR BANK: ");
				scanf("%d",&bank);				
				switch(bank){
					case 1:
						strcpy(bName,"Axis Bank");						
						break;
					case 2:
						strcpy(bName,"HDFC Bank");
						break;
					case 3:
						strcpy(bName,"ICICI Bank");
						break;
					case 4:
						strcpy(bName,"State Bank of India");
						break;
					case 5:
						strcpy(bName,"Punjab National Bank");
						break;
					case 6:
						strcpy(bName,"Bank of Baroda");
						break;
					default:
						printf("Please take a valid numeric choise");
						goto retake;
						break;
				}
				printf("Enter 1st name: ");
				scanf("%s",&fst_name);
				printf("Enter last name: ");
				scanf("%s",&lst_name);
				printf("Account No: ");
				scanf("%lld",&acc);
				printf("IFSC code: ");
				scanf("%s",&ifsc);
				printf("Phone number: ");
				scanf("%lld",&ph);
				
				save:
				printf("\nDo you want to save changes ? ([1]yes / [2]no): ");
				int c;
				scanf("%d",&c);
				switch(c){
					case 1:
						printf("\n\tsuccessfully saved\n");
						break;
					case 2:
						goto retake;
						break;
					default:
						printf("Please take a valid numeric choise");
						goto save;
				}
			
				
				break;
			case 2:	//View Bank details
				printf("Bank Name\t:\t %s\n",bName);
				printf("Account Name\t:\t %s %s\n",strupr(fst_name),strupr(lst_name));
				printf("Account No\t:\t %lld\n",acc);				
				printf("IFSC Code\t:\t %s\n",ifsc);
				printf("Phone number\t:\t %lld\n",ph);
				printf("- - - - - - - - - - - - - - - - - - - - - - -\n");
				break;
			case 3:	//Check  balance
				printf("Function doesn't exist");
				break;
			case 4:	//Bank transfer
				printf("Function doesn't exist");
				break;
			case 5:	//Mobile recharge
				printf("Function doesn't exist");
				break;					
			default:
				printf("Please take a valid numeric choise");
		}
	}while(ch!=6);
	return 0;
}