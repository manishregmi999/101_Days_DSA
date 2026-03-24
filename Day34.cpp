/* Hashing is a way to take a key and turn it into an index in a table using a hash function. 
This makes it really fast to insert, search, and delete data. Most of the time in constant time (O(1)).

Sometimes, two keys end up at the same index, which is called a hash collision. There are a few ways to handle collisions:
	•	Separate Chaining: keep multiple keys at the same spot using a linked list.
	•	Linear Probing: just move to the next empty slot.
	•	Quadratic Probing : jump to slots using a square pattern (i*i) to avoid clustering.
	•	Double Hashing : use a second hash function to figure out how far to jump.

Picking the right collision-handling method is important because it affects how well your hash 
table performs. Overall, hashing is a super practical way to manage data when you need fast access.
*/