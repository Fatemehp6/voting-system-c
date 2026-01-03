#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int candidateNUM;
	int voters;
	int num;
	
	printf("enter the number of candidates:");
	scanf("%d",&candidateNUM);
	
	int votes[candidateNUM];
	for (int i=0 ; i<candidateNUM ; i++){
	    votes[i]=0;
	}
	    
	printf("enter the number of voters:");
	scanf("%d",& voters);
	
	for (int i=0 ; i<voters ; i++){
		printf("enter your vote candidate number( 1 to %d ):",candidateNUM);
		scanf("%d",&num);
		if(num>=1 && num<=candidateNUM)
		    votes[num-1]++ ;
		else
		    printf("invalide vote\n");	
	}

	printf("\nVotes:\n");
	for (int i=0 ; i<candidateNUM ; i++){
		printf("candidate %d: %d votes\n",i+1,votes[i]);
	}
	
	int max=votes[0];
	for(int i=1 ; i<candidateNUM ; i++){
		if(votes[i]>max){
		    max=votes[i];
		}
	}
		
	printf("\nWinner with %d votes:\n",max);
	for(int i=0 ; i<candidateNUM ; i++){
		if(votes[i]==max){
			printf("candidate %d\n",i+1);
		}
	}
	return 0;
}