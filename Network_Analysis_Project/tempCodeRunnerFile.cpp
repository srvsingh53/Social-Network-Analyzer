 double maxBetweennessCentrality = 0.0;
    int mostInfluentialUserByBetweenness = -1;
    for (int i = 0; i < numNodes; ++i) {
        if (betweennessCentrality[i] > maxBetweennessCentrality) {
            maxBetweennessCentrality = betweennessCentrality[i];
            mostInfluentialUserByBetweenness = i;
        }
    }