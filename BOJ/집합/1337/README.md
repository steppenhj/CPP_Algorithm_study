엄청 쉬운 문제인데 왜 못 풀었는지 이해가 안 된다.

50밖에 안되니깐 이중 for문 사용하면 되고, if(arr[j] - arr[i] < 5) cnt++을 하면 된다.
for문 밖에서 max_cnt=0;을 선언해주고, for문 안에서 cnt를 선언한다.
그 이후에 max_cnt = max(max_cnt, cnt); 를 하면 끝이었다.

물론, 출력할 땐 5 - max_cnt
