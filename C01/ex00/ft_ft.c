#include<unistd.h>

int main(){

	int	i = 42;
	int	*p =&i;

	write(1,p,2);
}
