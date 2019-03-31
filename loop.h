
int start;
int end;

int loop(int count,int value,int end){//test loop method 
	for(count;count<=end;++count){
		value+=count;
	}
	return value;
}

void _loop(int start,int end){//test loop method 
	for(start;start<=end;++start){
	printf("%d ",start);
	}
	printf("\n");
}

