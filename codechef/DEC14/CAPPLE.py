#https://www.codechef.com/DEC14/problems/CAPPLE
def main():
    t = int(raw_input())
    while (t > 0):
        n = raw_input()
        nums = raw_input()
        arr = map(int, nums.split())
        print len(set(arr))
        t = t-1

main()
