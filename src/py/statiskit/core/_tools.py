from .controls import controls

def unused_warning(**kwargs):
    pass

def float_str(value):
    float_str = str(value)
    return float_str[:float_str.index('.') + controls.precision + 1]

def remove_latex(string):
    return string.replace('$', '')