project('TicTacToe', 'c',
  version : '0.1',
  default_options : ['warning_level=3', 'c_std=gnu17'])

tic_tac_toe_dependency = dependency('SDL2')

src = files([])

executable(
  'TicTacToe',
  'main.c',
  sources: src,
  install : true,
  dependencies : tic_tac_toe_dependency
)
