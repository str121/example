#include <stdio.h>

struct tel {
	char name[30];
	int tel;
}

struct tel arr[10];
int sIndex = 0;

// 조회
void selectTel{
	//for (
	printf("이름 : %s\n", arr[sIndex}.name);
	printf("번호 : %d\n", arr[sIndex}.tel);

}

// 추가
void AddTel(){
	if (sIndex == 10) {
		printf("더 이상 저장될 공간이 없습니다.\n");
		return;
	}
	printf("이름 입력 :");	scanf("%s", arr[sIndex].name);
	printf("번호  입력(숫자만) : "); scanf("%d", arr[sIndex].score);
	sIndex++;
}

// 삭제
void DeleteTel(){
	char name[30];
	printf("삭제할 이름을 입력하세요 : ");
	scanf("%s", name);
	int i;
	for(i=0; i<sIndex; i++){
		if(strcmp(arr[i].name, name) ==0 ){
		//	 해당 인덱스에서 다음 인덱스 값을 복사받음
		int j;
		for(j=i; j<sIndex-1; j++){
			arr[j] = arr[j+1];	}
		
		sIndex--;
		printf("삭제 완료.  \n");
		return;
		}
	}
	printf("삭제할 데이터가 없습니다. \n");
}


int main(void){
	//printf("Hello World");
	
}
