#include "ext/eigen/Eigen/Core"
#include <vector>

struct Snapshot {
	EIGEN_MAKE_ALIGNED_OPERATOR_NEW

	double t;
	std::vector<Eigen::Vector3d> positions;
	std::vector<Eigen::Vector3d> velocities;
};