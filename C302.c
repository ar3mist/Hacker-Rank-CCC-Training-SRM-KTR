n = int(input())
total_cost = 0

# Iterate over n days
for i in range(n):
    a, p = map(int, input().split())
    if i == 0:
        min_p = p  # initialize the minimum price to the price on day 1
    else:
        min_p = min(min_p, p)  # update the minimum price if a lower price is found
    total_cost += min_p * a  # add the cost of Paneer on this day to the total cost

print(total_cost)