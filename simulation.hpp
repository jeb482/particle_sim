#include "snapshot.hpp"

#include "ext/eigen/Eigen/Core"
#include <memory>

struct Force {

	virtual void act(const Eigen::Vector3d& old_vel, Eigen::Vector3d& new_vel, double duration) = 0;
	
	void act(const std::vector<Eigen::Vector3d>& old_vs,
		     std::vector<Eigen::Vector3d>& new_vs,
			 double duration) {
		for (int i = 0; i < old_vs.size(); i++) {
			act(old_vs[i], new_vs[i], duration);
		}
	}

};

struct UniformAcceleration : Force {
	
	UniformAcceleration(Eigen::Vector3d _accel) : accel(_accel) {}
	
	virtual void act(const Eigen::Vector3d& old_vel, 
					 Eigen::Vector3d& new_vel,
					 double duration) override {

	}

	Eigen::Vector3d accel;
};

class Simulation {
	Snapshot estimateFrameFromTime(std::shared_ptr<const Snapshot> snapshot, double t) {

	}
};