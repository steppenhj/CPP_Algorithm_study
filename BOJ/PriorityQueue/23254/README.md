생각할 게 많은 문제이다.
우선 n, m <= 200,000 이므로 while(시간--)으로 하게 되면, 시간 초과가 날 확률이 높다.
그래서 나누기를 사용해야 한다.

제일 처음에 total_time = n*24로 문제 조건에 맞게 받은 후에,
total_time -= spend_hour으로 계속 업데이트 한다.

total_time > 0이면서 !pq.empty() 일 때 동안 수행해야 한다. while(total_time >0 && !pq.empty())임.

마지막에 current_score < 100 이면, remainder = 100 - current_score로 잡아주고,
remainder > 0 이라면, pq.push(remainder, current_score)를 해줘야 한다.
