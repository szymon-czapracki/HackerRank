def remove_value_from_list(list, key_val):
    return [value for value in list if value != key_val]


def find_runner_up(original_scores):

    max_val = max(original_scores)
    scores = remove_value_from_list(original_scores, max_val)
    return max(scores)


def main():

    input_val = input()
    scores = [int(score) for score in input().split()]
    print(find_runner_up(scores))


main()
