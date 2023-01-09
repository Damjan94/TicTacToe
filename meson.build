project('TicTacToe', 'c',
  version : '0.1',
  default_options : ['warning_level=3', 'c_std=gnu17'])

tic_tac_toe_dependency = dependency('SDL2')

sources = files(['ui/button/button.c', 'ui/main_menu/main_menu.c', 'main.c'])

executable(
  'TicTacToe',
  sources: sources,
  install : true,
  dependencies : tic_tac_toe_dependency
)
