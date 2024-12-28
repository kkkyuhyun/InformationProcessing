#include<stdio.h>
int main(){
  int a[3][3] = {1,2,3,4,5,6,7,8,9}
  int* pa[2]={a[1],a[2]} //1행의 주소 번지, 2행의 주소 번지를 나타낸다.
  printf("%d", pa[1][1]+ *(pa[1]+2)+**pa);
}//포인터는 주소를 저장하는 변수 

// 데이터가 바이트를 차지하여 각각의 주소는 4byte의 단위를 가지는 것을 기억한다.  
// 배열 a는 다음과 같다. 
//[0,0]1(10번지), [0,1]2(14번지), [0,2]3(18번지)
//[1,0]4(22번지), [1,1]5(26번지), [1,2]6(30번지)
//[2,0]7(34번지), [2,1]8(38번지), [2,2]9(42번지)

//배열 pa는 다음과 같다. 주소: [0]22  [1]34

//pa[1][1]=5 
//(pa[1]+2)는 배열 pa[1]의 34번지 주소에 있는 값 7에서 오른쪽 두 칸으로 이동한 9가 정답이다. 
//**pa는 이중포인터로 pa가 100번지라고 할 때 -> *pa는 22번지 -> **pa는 22번지에 저장된 값 4 
