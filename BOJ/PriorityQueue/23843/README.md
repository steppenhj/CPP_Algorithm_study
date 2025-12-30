처음에 짠 코드는 병렬적인 것을 고려하지 못했다.

장치에 대한 걸 우선순위 큐로 push 받고,
각 콘센트에 대한 시간도 우선순위 큐로 만들어줘야 한다. 코드는 아래와 같다.
priority_queue<int, vector<int>, greater<int>> outlets
처음에는 outlets 수만큼 push(0)해준다. 0에서 모두가 시작할 수 있으니깐.

device_time 젤 위에 것과 (top) earliest_outlet의 젤 위에 것을 더한 걸
outlets.push해주면 된다. outlets.push(earliest_outlet + device_time);

그 후 max_time=0 잡고, outlets이 다 빠질 때 동안 max 함수 사용하면 된다. 
-> 제일 오래 걸리는 outlets를 찾는 것.
