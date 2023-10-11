dp = [0 for _ in range(491)]
dp[1] = 1
for i in range(2, 491):
    dp[i] = dp[i-2] + dp[i-1]
while 1:
    hour = int(input())
    if hour == -1:
        break
    print(f'Hour {hour}: {dp[hour]} cow(s) affected')