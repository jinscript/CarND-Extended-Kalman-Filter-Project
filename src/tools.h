#ifndef TOOLS_H_
#define TOOLS_H_
#include <vector>
#include "Eigen/Dense"

using Eigen::MatrixXd;
using Eigen::VectorXd;
using namespace std;

class Tools {
public:
  /**
  * Constructor.
  */
  Tools();

  /**
  * Destructor.
  */
  virtual ~Tools();

  /**
  * A helper method to calculate RMSE.
  */
  VectorXd CalculateRMSE(const vector<VectorXd> &estimations, const vector<VectorXd> &ground_truth);

  /**
  * A helper method to calculate Jacobians.
  */
  MatrixXd CalculateJacobian(const VectorXd& x_state);

  /**
   * A helper method to convert Cartesian form o Polar form.
   */
  VectorXd ToPolar(const VectorXd &x_cartesian);

  /**
   * A helper method to convert Polor form to Cartesian form.
   */
  VectorXd ToCartesian(const VectorXd &x_polar);
};

#endif /* TOOLS_H_ */
