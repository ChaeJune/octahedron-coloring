#include <stdio.h>
#include <stdlib.h>

//int data[]={1,7,1,2,3,4,5,6};
int data[8];
int save[40320][8]; //노트a 
int pos[40320][8]; //노트b 
int count = 0;
int number = 0;
int t = 0;
int swap(int i, int j)
{
	int temp;
	if (i == j) return 0;
	temp = data[i];
	data[i] = data[j];
	data[j] = temp;
	return 0;
}
int Permutation(int TotalN, int N)
{
	int i;

	if (N == 1) {
		for (i = 0; i<TotalN; i++) {
			save[count][i] = data[i];
			// printf("%d ",save[count][i]);
		}
		//   printf("\n");
		count++;
		return 0;
	}

	for (i = 0; i<N; i++) {
		swap(i, N - 1);
		Permutation(TotalN, N - 1);
		swap(i, N - 1);
	}
}
int setp(int v)//v는 pos 
{
	int hold;
	int a[8];
	int b[8];
	for (int e = 0; e<8; e++)
	{
		b[e] = pos[v][e];
		a[e] = b[e];
	}
	hold = a[1]; a[1] = a[2]; a[2] = a[3]; a[3] = hold; hold = a[4]; a[4] = a[5]; a[5] = a[6]; a[6] = hold;
	for (int j = 0; j<40320; j++)
	{
		t = 0;
		//모든 save배열과 pos배열의 변형을 비교한다. 행의 배열 순서가 같으면 save배열의 같은 것을 삭제한다. 
		for (int i = 0; i<8; i++)
		{
			if (save[j][i] == a[i])t++; //여기 오류 있을수도 있음.....하지만  없었다. 여기서 나온 pos[number][i]를 setp함수와 turn 함수에서 사용해야함.
		}
		if (t == 8)
		{
			for (int l = 0; l<8; l++)
				save[j][l] = 0;
		}
	}
	hold = a[1]; a[1] = a[2]; a[2] = a[3]; a[3] = hold; hold = a[4]; a[4] = a[5]; a[5] = a[6]; a[6] = hold;
	for (int j = 0; j<40320; j++)
	{
		t = 0; 
		for (int i = 0; i<8; i++)
		{
			if (save[j][i] == a[i])t++;
		}
		if (t == 8)
		{
			for (int l = 0; l<8; l++)
				save[j][l] = 0;
		}
	}
	b[0] = pos[v][1]; b[1] = pos[v][0]; b[2] = pos[v][4]; b[3] = pos[v][5]; b[4] = pos[v][2]; b[5] = pos[v][3]; b[6] = pos[v][7]; b[7] = pos[v][6];
	for (int e = 0; e<8; e++)//임시배열 a[]에 b[]의 원소를 저장시킨다. 
		a[e] = b[e];
	for (int j = 0; j<40320; j++)
	{
		t = 0;
		for (int i = 0; i<8; i++)
		{
			if (save[j][i] == b[i])t++; 
		}
		if (t == 8)
		{
			for (int l = 0; l<8; l++)
				save[j][l] = 0;
		}
	}

	hold = a[1]; a[1] = a[2]; a[2] = a[3]; a[3] = hold; hold = a[4]; a[4] = a[5]; a[5] = a[6]; a[6] = hold;
	for (int j = 0; j<40320; j++)
	{
		t = 0;
		for (int i = 0; i<8; i++)
		{
			if (save[j][i] == a[i])t++; 
		}
		if (t == 8)
		{
			for (int l = 0; l<8; l++)
				save[j][l] = 0;
		}
	}

	hold = a[1]; a[1] = a[2]; a[2] = a[3]; a[3] = hold; hold = a[4]; a[4] = a[5]; a[5] = a[6]; a[6] = hold;
	for (int j = 0; j<40320; j++)
	{
		t = 0;
		for (int i = 0; i<8; i++)
		{
			if (save[j][i] == a[i])t++; 
		}
		if (t == 8)
		{
			for (int l = 0; l<8; l++)
				save[j][l] = 0;
		}
	}

	b[0] = pos[v][2]; b[1] = pos[v][0]; b[2] = pos[v][5]; b[3] = pos[v][6]; b[4] = pos[v][3]; b[5] = pos[v][1]; b[6] = pos[v][7]; b[7] = pos[v][4];
	for (int e = 0; e<8; e++)//임시배열 a[]에 b[]의 원소를 저장시킨다. 
		a[e] = b[e];
	for (int j = 0; j<40320; j++)
	{
		t = 0;
		for (int i = 0; i<8; i++)
		{
			if (save[j][i] == b[i])t++; 
		}
		if (t == 8)
		{
			for (int l = 0; l<8; l++)
				save[j][l] = 0;
		}
	}
	hold = a[1]; a[1] = a[2]; a[2] = a[3]; a[3] = hold; hold = a[4]; a[4] = a[5]; a[5] = a[6]; a[6] = hold;

	for (int j = 0; j<40320; j++)
	{
		t = 0;
		for (int i = 0; i<8; i++)
		{
			if (save[j][i] == a[i])t++; 
		}
		if (t == 8)
		{
			for (int l = 0; l<8; l++)
				save[j][l] = 0;
		}
	}
	hold = a[1]; a[1] = a[2]; a[2] = a[3]; a[3] = hold; hold = a[4]; a[4] = a[5]; a[5] = a[6]; a[6] = hold;

	for (int j = 0; j<40320; j++)
	{
		t = 0;
		for (int i = 0; i<8; i++)
		{
			if (save[j][i] == a[i])t++; 
		}
		if (t == 8)
		{
			for (int l = 0; l<8; l++)
				save[j][l] = 0;
		}
	}


	b[0] = pos[v][3]; b[1] = pos[v][0]; b[2] = pos[v][6]; b[3] = pos[v][4]; b[4] = pos[v][1]; b[5] = pos[v][2]; b[6] = pos[v][7]; b[7] = pos[v][5];
	for (int e = 0; e<8; e++)
		a[e] = b[e];
	for (int j = 0; j<40320; j++)
	{
		t = 0;
		for (int i = 0; i<8; i++)
		{
			if (save[j][i] == b[i])t++; 
		}
		if (t == 8)
		{
			for (int l = 0; l<8; l++)
				save[j][l] = 0;
		}
	}
	hold = a[1]; a[1] = a[2]; a[2] = a[3]; a[3] = hold; hold = a[4]; a[4] = a[5]; a[5] = a[6]; a[6] = hold;
	for (int j = 0; j<40320; j++)
	{
		t = 0;
		for (int i = 0; i<8; i++)
		{
			if (save[j][i] == a[i])t++; 
		}
		if (t == 8)
		{
			for (int l = 0; l<8; l++)
				save[j][l] = 0;
		}
	}
	hold = a[1]; a[1] = a[2]; a[2] = a[3]; a[3] = hold; hold = a[4]; a[4] = a[5]; a[5] = a[6]; a[6] = hold;

	for (int j = 0; j<40320; j++)
	{
		t = 0;
		//모든 save배열과 pos배열의 변형을 비교한다. 행의 배열 순서가 같으면 save배열의 같은 것을 삭제한다. 
		for (int i = 0; i<8; i++)
		{
			if (save[j][i] == a[i])t++; //여기 오류 있을수도 있음...  여기서 나온 pos[number][i]를 setp함수와 turn 함수에서 사용해야함.
		}
		if (t == 8)
		{
			for (int l = 0; l<8; l++)
				save[j][l] = 0;
		}
	}

	b[0] = pos[v][4]; b[1] = pos[v][3]; b[2] = pos[v][7]; b[3] = pos[v][1]; b[4] = pos[v][0]; b[5] = pos[v][6]; b[6] = pos[v][5]; b[7] = pos[v][2];
	for (int e = 0; e<8; e++)//임시배열 a[]에 b[]의 원소를 저장시킨다. 
		a[e] = b[e];
	for (int j = 0; j<40320; j++)
	{
		t = 0;
		for (int i = 0; i<8; i++)
		{
			if (save[j][i] == b[i])t++; 
		}
		if (t == 8)
		{
			for (int l = 0; l<8; l++)
				save[j][l] = 0;
		}
	}

	hold = a[1]; a[1] = a[2]; a[2] = a[3]; a[3] = hold; hold = a[4]; a[4] = a[5]; a[5] = a[6]; a[6] = hold;
	for (int j = 0; j<40320; j++)
	{
		t = 0;
		for (int i = 0; i<8; i++)
		{
			if (save[j][i] == a[i])t++;
		}
		if (t == 8)
		{
			for (int l = 0; l<8; l++)
				save[j][l] = 0;
		}
	}
	hold = a[1]; a[1] = a[2]; a[2] = a[3]; a[3] = hold; hold = a[4]; a[4] = a[5]; a[5] = a[6]; a[6] = hold;
	for (int j = 0; j<40320; j++)
	{
		t = 0;
		for (int i = 0; i<8; i++)
		{
			if (save[j][i] == a[i])t++; 
		}
		if (t == 8)
		{
			for (int l = 0; l<8; l++)
				save[j][l] = 0;
		}
	}


	b[0] = pos[v][5]; b[1] = pos[v][2]; b[2] = pos[v][1]; b[3] = pos[v][7]; b[4] = pos[v][6]; b[5] = pos[v][0]; b[6] = pos[v][4]; b[7] = pos[v][3];
	for (int e = 0; e<8; e++)
		a[e] = b[e];
	for (int j = 0; j<40320; j++)
	{
		t = 0;
		for (int i = 0; i<8; i++)
		{
			if (save[j][i] == b[i])t++; 
		}
		if (t == 8)
		{
			for (int l = 0; l<8; l++)
				save[j][l] = 0;
		}
	}
	hold = a[1]; a[1] = a[2]; a[2] = a[3]; a[3] = hold; hold = a[4]; a[4] = a[5]; a[5] = a[6]; a[6] = hold;

	for (int j = 0; j<40320; j++)
	{
		t = 0;
		for (int i = 0; i<8; i++)
		{
			if (save[j][i] == a[i])t++;
		}
		if (t == 8)
		{
			for (int l = 0; l<8; l++)
				save[j][l] = 0;
		}
	}
	hold = a[1]; a[1] = a[2]; a[2] = a[3]; a[3] = hold; hold = a[4]; a[4] = a[5]; a[5] = a[6]; a[6] = hold;
	for (int j = 0; j<40320; j++)
	{
		t = 0;
		for (int i = 0; i<8; i++)
		{
			if (save[j][i] == a[i])t++;
		}
		if (t == 8)
		{
			for (int l = 0; l<8; l++)
				save[j][l] = 0;
		}
	}
	b[0] = pos[v][6]; b[1] = pos[v][7]; b[2] = pos[v][3]; b[3] = pos[v][2]; b[4] = pos[v][5]; b[5] = pos[v][4]; b[6] = pos[v][0]; b[7] = pos[v][1];
	for (int e = 0; e<8; e++)
		a[e] = b[e];
	for (int j = 0; j<40320; j++)
	{
		t = 0;
		for (int i = 0; i<8; i++)
		{
			if (save[j][i] == b[i])t++; 	
		}
		if (t == 8)
		{
			for (int l = 0; l<8; l++)
				save[j][l] = 0;
		}
	}
	hold = a[1]; a[1] = a[2]; a[2] = a[3]; a[3] = hold; hold = a[4]; a[4] = a[5]; a[5] = a[6]; a[6] = hold;
	for (int j = 0; j<40320; j++)
	{
		t = 0;
		for (int i = 0; i<8; i++)
		{
			if (save[j][i] == a[i])t++; 
		}
		if (t == 8)
		{
			for (int l = 0; l<8; l++)
				save[j][l] = 0;
		}
	}
	hold = a[1]; a[1] = a[2]; a[2] = a[3]; a[3] = hold; hold = a[4]; a[4] = a[5]; a[5] = a[6]; a[6] = hold;
	for (int j = 0; j<40320; j++)
	{
		t = 0;
		for (int i = 0; i<8; i++)
		{
			if (save[j][i] == a[i])t++;
		}
		if (t == 8)
		{
			for (int l = 0; l<8; l++)
				save[j][l] = 0;
		}
	}

	b[0] = pos[v][7]; b[1] = pos[v][5]; b[2] = pos[v][4]; b[3] = pos[v][6]; b[4] = pos[v][2]; b[5] = pos[v][1]; b[6] = pos[v][3]; b[7] = pos[v][0];
	for (int e = 0; e<8; e++) 
		a[e] = b[e];
	for (int j = 0; j<40320; j++)
	{
		t = 0;
		for (int i = 0; i<8; i++)
		{
			if (save[j][i] == b[i])t++;
		}
		if (t == 8)
		{
			for (int l = 0; l<8; l++)
				save[j][l] = 0;
		}
	}
	hold = a[1]; a[1] = a[2]; a[2] = a[3]; a[3] = hold; hold = a[4]; a[4] = a[5]; a[5] = a[6]; a[6] = hold;
	for (int j = 0; j<40320; j++)
	{
		t = 0;
		for (int i = 0; i<8; i++)
		{
			if (save[j][i] == a[i])t++; 
		}
		if (t == 8)
		{
			for (int l = 0; l<8; l++)
				save[j][l] = 0;
		}
	}
	hold = a[1]; a[1] = a[2]; a[2] = a[3]; a[3] = hold; hold = a[4]; a[4] = a[5]; a[5] = a[6]; a[6] = hold;
	for (int j = 0; j<40320; j++)
	{
		t = 0;
		for (int i = 0; i<8; i++)
		{
			if (save[j][i] == a[i])t++; 
		}
		if (t == 8)
		{
			for (int l = 0; l<8; l++)
				save[j][l] = 0;
		}
	}

	t = 0;
	return 0;
}
void test(int k)
{

	for (int i = 0; i<8; i++)
		pos[k][i] = save[k][i];
	for (int j = 0; j<40320; j++)
	{
		t = 0;
		for (int c = 0; c<8; c++)
		{
			if (save[j][c] == pos[k][c])t++; 
		}
		if (t == 8)
		{
			for (int l = 0; l<8; l++)
				save[j][l] = 0;
		}
	}
	setp(k);
}
int main()
{
	printf("배열의 원소 입력(8개) 주의! 0은 원소로 입력하지 마세요\n");
	for (int z; z<8; z++)
	{
		printf("입력 하세요. %d개 남음 :", 8 - z);
		scanf("%d", &data[z]);
	}
	int N = sizeof(data) / sizeof(int); 
	Permutation(N, N);
	//printf("%d\n",count); 
	for (int g = 0; g<40320; g++) {
		if (save[g][0] == 0)
		{
		}
		else
		{
			test(g);
			number++;
		}
	}
	printf("경우의 수 : %d", number);
	return 0;
}
