
import math
import os
import random
import re
import sys

import sys

def camelcase(string):
    ans = 1
    for i in string:
        if i.isupper():
            ans += 1
    if not string:
        ans = 0
    
    return ans

if __name__ == "__main__":
    string = input().strip()
    ans = camelcase(string)
    print(ans)
