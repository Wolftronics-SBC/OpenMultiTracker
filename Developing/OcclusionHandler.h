//
// Created by Ars Poyezzhayev on 21.11.16.
//

#ifndef HOCKEYPLAYERSRECOGNIZER_OCCLUSIONHANDLER_H
#define HOCKEYPLAYERSRECOGNIZER_OCCLUSIONHANDLER_H


#include <opencv2/core/types.hpp>
#include "Track.h"
#include "AssignmentsTable.h"

class OcclusionHandler {
private:
    float mergeThreshold = 100;

public:
    /**
     * Updates the assignments table with merges and splits.
     * @param assignments - assignment table which we need to update
     * @param detections - list of current detections
     * @param tracks - list of current tracks
     */
    void update(AssignmentsTable &assignments, const std::vector<ObjectState> &detections, std::vector<std::unique_ptr<Track>> &tracks);
};


#endif //HOCKEYPLAYERSRECOGNIZER_OCCLUSIONHANDLER_H
