float problemSolution1(float consumed_water) {
    float cost;
    // write your code here

    cost = 13;

    if (consumed_water > 30) {
        cost += 30 * 0.4;
        consumed_water -= 30;
    } else {
        cost += consumed_water * 0.4;
    }

    if (consumed_water > 20) {
        cost += 20 * 0.12;
        consumed_water -= 20;
    } else {
        cost += consumed_water * 0.12;
    }

    if (consumed_water > 10) {
        cost += 10 * 1.4;
        consumed_water -= 10;
    } else {
        cost += consumed_water * 1.4;
    }

    cost += consumed_water * 1.5;

    return cost;
}
