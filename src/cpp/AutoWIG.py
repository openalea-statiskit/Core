def controller(asg):
    from scons_tools.site_autowig.controller.statiskit_stl import controller as stl_controller
    asg = stl_controller(asg, library=False)
    # import pdb
    # pdb.set_trace()
    # node = 'class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator'
    return asg