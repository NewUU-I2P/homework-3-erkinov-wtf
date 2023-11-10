float problemSolution1(float consumed_water) {
    float cost;
    // write your code here

    cost = 13; // Fixed amount
    double remaining = consumed_water;

    if (remaining > 30) {
        cost += 30 * 0.4;
        remaining -= 30;
    } else {
        cost += remaining * 0.4;
        return cost;
    }

    if (remaining > 20) {
        cost += 20 * 0.12;
        remaining -= 20;
    } else {
        cost += remaining * 0.12;
        return cost;
    }

    if (remaining > 10) {
        cost += 10 * 1.4;
        remaining -= 10;
    } else {
        cost += remaining * 1.4;
        return cost;
    }

    cost += remaining * 1.5;

    return cost;
}
