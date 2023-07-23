# Social-Network-Analyzer

The Social Network Analyzer is a C++ program that analyzes a social network represented as an undirected graph. It calculates various centrality measures for nodes in the graph to identify the most influential users within the network.

## Features
1. Degree Centrality: Calculates the degree centrality of each node, which represents the number of connections each user has in the social network.

2. Betweenness Centrality: Computes the betweenness centrality of nodes, measuring the number of times a node appears on the shortest path between two other nodes. This indicates the influence a user has over the flow of information in the network.

3. Closeness Centrality: Evaluates the closeness centrality of nodes, measuring how close a user is to all other users in the network. This represents the ease of spreading information from a user to others.

## How to Use

1. Enter the number of nodes and edges in the social network when prompted.
2. Input the edges (node1 node2) in the social network, where node1 and node2 are user IDs.
3. The program will then calculate and display the most influential user for each centrality measure along with their respective centrality scores.

### Sample Input

Enter the number of nodes and edges in the social network: 5 3

Enter the edges (node1 node2) in the social network:

1 2

1 3 

2 3

4 5

### Sample Output

The most influential user by Degree Centrality is: User 1

Degree Centrality: 2


The most influential user by Betweenness Centrality is: User 1

Betweenness Centrality: 0.0


The most influential user by Closeness Centrality is: User 1

Closeness Centrality: 0.5

