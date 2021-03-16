//5. set : 균형 잡힌 이진트리(balanced binary search tree), 원소의 삽임과 삭제, 탐색 등의 연산은 O(logn)을 보장한다.
#include <iostream>
#include <set>
using namespace std;

int main() {
    //int 자료형을 저장하는 균형잡힌 이진트리 생성
    set<int> s;
    //원소(5) 삽입
    set.insert(5);
    //6이라는 값을 가지는 원소를 찾음.
    //있으면 해당원소의 주소값, 없으면 s.end() 리턴
    if(s.find(6)!=s.end())
        printf("존재\n");
    else 
        printf("존재x\n");
    //저장된 원소의 수를 리턴
    printf("%d\n", s.size());
    //모든 원소 삭제
    s.clear();
    //해당 주소의 원소 삭제
    //2번째 원소 삭제
    s.erase(++s.begin());
    return 0;
}