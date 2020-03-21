# Stochastic_Computing
Simple representation of SC

* A basic feature of SC is that numbers are represented by bit-streams that can be processed by very simple circuits, while the numbers themselves are interpreted as probabilities under both normal and faulty conditions. For example, a bit-stream S containing 25% 1s and 75% 0s denotes the number p = 0.25, reflecting the fact that the probability of observing a 1 at an arbitrary bit position is p. Neither the length nor the structure of S need be fixed; for example, (1,0,0,0), (0,1,0,0), and (0,1,0,0,0,1,0,0) are all possible representations of 0.25. Note that p depends on the ratio of 1s to the length of the bit-stream, not on their positions, which can, in principle, be chosen randomly.
