Rule 1: Scan

Scan the infix expression from left to right, one symbol at a time.


Rule 2: Operand

If the scanned symbol is an operand (variable/number):
→ Append it directly to the postfix output


Rule 3: Left Parenthesis (

If the scanned symbol is (:
→ Push it onto the stack
→ Do not compare precedence


Rule 4: Operator (+ − * /)

If the scanned symbol is an operator:

→ While stack is not empty and
	•	stack top is an operator and
	•	precedence(stack top) ≥ precedence(current operator)

→ Pop from stack and append to output

→ Stop popping when ( is found

→ Push the current operator onto stack


Rule 5: Right Parenthesis )

If the scanned symbol is ):

→ Pop and append to output until ( is found
→ Remove ( from stack
→ Do not append ( to output


Rule 6: End of Expression

After the entire infix expression is scanned:

→ Pop all remaining operators from stack
→ Append them to output
