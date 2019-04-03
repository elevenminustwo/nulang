
bool equals(int num1,int num2){
	if(num1==num2){
	return true;
	}
   return false;
}

bool greater(int num1,int num2){
	if(num1>num2){
	return true;
	}
   return false;
}

bool less(int num1,int num2){
	if(num1<num2){
	return true;
	}
   return false;
}
bool greaterequal(int num1,int num2){
	if(equals(num1,num2)&&greater(num1,num2)){
	return true;	
	}
   return false;
}

bool lessequal(int num1,int num2){
	if(equals(num1,num2)&&less(num1,num2)){
	return true;	
	}
   return false;
}
