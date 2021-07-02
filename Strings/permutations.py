def find_permutation(self, S):
    # Code here
    nums = list(S)
    permutations = list(itertools.permutations(nums))
    x = [''.join(permutation) for permutation in permutations]
    x.sort()
    return x
