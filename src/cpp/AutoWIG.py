def controller(asg):
    from scons_tools.site_autowig.controller.statiskit_stl import controller as stl_controller
    return stl_controller(asg, library=False)