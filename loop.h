
int start;
int end;
int value;

void setStart(int _start){
	start=_start;
}
void setEnd(int _end){
	end=_end;
}

int getStart(){
	return start;
}
int getEnd(){
	return end;
}

int loop(){
	for(start;start<=end;++start){
		value+=start;
	}
	return value;
}

void _loop(){
	for(start;start<=end;++start){
	printf("%d ",start);
	}
	printf("\n");
}


