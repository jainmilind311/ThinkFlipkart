#include <studio.h>
#include<math.h>

int sum(int x, int y){
	//Changingg!!
      	return x+y;
    //FOLLOWING CHANGE MADE IN BUGFIX
    int result = x+y;
    return result;

}

int sub(int x, int y){
	//Following change made in the master branch
	int result = x-y;
	return result;
}


//FOLLOWING ARE MADE IN TESTING BRANCH
	int mul(int x, int y){
		return x*y;
	}
// END
