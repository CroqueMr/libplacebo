/* SPDX-License-Identifier: LGPL-2.1-or-later */
#include <stdint.h>

static uint64_t reference_mmr_contribution(const int64_t coefficients[3],
                                         unsigned order, unsigned sample, unsigned depth)
{
    uint64_t t=(uint64_t)sample<<(20-depth), power=t;
    int64_t sum=0;
    for (unsigned i=0;i<order;i++) {
        sum+=coefficients[i]*(int64_t)power;
        power=(t*power)>>20;
    }
    return (uint64_t)sum;
}
