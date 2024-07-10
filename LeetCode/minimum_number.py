import collections

def minimumKeypresses(s):
    counts = collections.Counter(s)
    clicks = 0
    ans = 0
    print(counts)
    print(counts.values())
    print(sorted(counts.values(), reverse=True))
    for idx, freq in enumerate(sorted(counts.values(), reverse=True)):
        print("{}, {}".format(idx, freq))
        # if idx % 9 == 0:
        #     clicks += 1
        ans += (clicks * freq)
    print(ans)
        

minimumKeypresses("apple")
