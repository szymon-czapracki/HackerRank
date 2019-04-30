import builtins


def main():
    num_in_tuple = int(input())
    input_tuple = tuple(int(x.strip()) for x in input().split(' '))

    print(hash(input_tuple))


main()
