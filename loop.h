
int start;
int end;

void setStart(int _start){
	start=_start;
}
void setEnd(int _end){
	end=_end;
}

int loop(int count,int value,int end){//test loop method 
	for(count;count<=end;++count){
		value+=count;
	}
	return value;
}

void _loop(){//test loop method 
	for(start;start<=end;++start){
	printf("%d ",start);
	}
	printf("\n");
}

