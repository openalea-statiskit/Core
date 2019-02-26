def controller(asg):
    node = asg['struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistribution >']
    import pdb
    pdb.set_trace()

    from scons_tools.site_autowig.controller.statiskit_stl import controller as stl_controller
    return stl_controller(asg, library=False)