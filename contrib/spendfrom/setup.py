from distutils.core import setup
setup(name='KBYTEspendfrom',
      version='1.0',
      description='Command-line utility for kazubyte "coin control"',
      author='Gavin Andresen',
      author_email='gavin@kazubytefoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
