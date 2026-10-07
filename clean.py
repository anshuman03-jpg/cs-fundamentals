import os
import re

dirs = [r'D:\College\cs-fundamentals\C', r'D:\College\cs-fundamentals\LeetCode']

patterns_to_remove = [
    r'//\s*---\s*TODO:.*',
    r'//\s*TODO:.*',
    r'//\s*HINT.*',
    r'//\s*Hint:.*',
    r'//\s*WRITE YOUR CODE HERE.*',
    r'//\s*--- YOUR TURN ---.*',
    r'printf\("--- YOUR TURN ---\\n"\);',
    r'printf\("Function under construction!\\n"\);'
]

for d in dirs:
    if not os.path.exists(d):
        continue
    for f in os.listdir(d):
        if f.endswith('.c'):
            filepath = os.path.join(d, f)
            with open(filepath, 'r') as file:
                lines = file.readlines()
            
            new_lines = []
            for line in lines:
                keep = True
                for pattern in patterns_to_remove:
                    if re.search(pattern, line):
                        keep = False
                        break
                if keep:
                    new_lines.append(line)
            
            with open(filepath, 'w') as file:
                file.writelines(new_lines)
