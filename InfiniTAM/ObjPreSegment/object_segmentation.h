#ifndef OBJECT_SEGMENTATION_H
#define OBJECT_SEGMENTATION_H

#include "scene_seg.h"
#include "../Common/common_func.h"
#include "../Common/common_type.h"
#include "../Common/utility.h"
#include "../Common/color_op.h"

#include "../GraphCut/PointCloudAnalysis.h"
#include "../GraphCut/GraphCutBasicStruct.h"
#include "../GraphCut/MeasureConstruction.h"

#include "../Common/KDtree.h"
#include "../Common/CUDA_KDtree.h"

using namespace std;

void segmentSepcialObjects(PointCloudPtr_RGB_NORMAL source_cloud, Eigen::Vector3f range, CPointCloudAnalysis &cPointCloudAnalysis, PointCloudPtr_RGB object_cloud, PointCloudPtr_RGB confidence_cloud, vector<ushort> &objectIndexs, int &objectNum);
void segmentObject(PointCloudPtr_RGB_NORMAL source_cloud, Eigen::Vector3f range, CPointCloudAnalysis &cPointCloudAnalysis, PointCloudPtr_RGB object_cloud, PointCloudPtr_RGB confidence_cloud, vector<ushort> &objectIndexs, int &objectNum);
void overSegmentObject(PointCloudPtr_RGB_NORMAL source_cloud, PointCloudPtr_RGB result_cloud);
void updateSegmentObject(PointCloudPtr_RGB_NORMAL source_cloud, Eigen::Vector3f range, PointCloudPtr_RGB_NORMAL change_cloudA, PointCloudPtr_RGB_NORMAL change_cloudB, CPointCloudAnalysis &cPointCloudAnalysis, PointCloudPtr_RGB object_cloud, PointCloudPtr_RGB confidence_cloud, vector<ushort> &objectIndexs, int &objectNum);

#endif // OBJECT_SEGMENTATION_H
