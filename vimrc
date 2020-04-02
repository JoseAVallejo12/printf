syntax on
set encoding=utf-8
set nocompatible              " be iMproved, required
filetype off					"requerid
"star Config for plugin airline
let g:airline#extensions#tabline#enabled = 1
let g:airline#extensions#tmuxline#enabled = 0
let g:airline_powerline_fonts = 1

"Mostrar caracter al final de la linea o caracter invisible
set lcs=tab:»\ ,trail:·,eol:¬,nbsp:_
set list				"Resalta los resultados de las busquedas
set title				"muestra el nombre del archivo en la barra de titulo
set shortmess=atI		"quita el mensaje inicial del VIM
set cursorline			"resalta la linea del cusrsor"
set smarttab
set tabstop=4
set shiftwidth=4
set softtabstop=4
set number
set mouse=a "allow scroll whit mause
set smartindent
set wildmenu		"enebla menu in the estatus bar

map <C-n> :NERDTreeToggle<CR>
"et the runtime path to include Vundle and initialize
set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()
" alternatively, pass a path where Vundle should install plugins
" "call vundle#begin('~/some/path/here')
"
" " let Vundle manage Vundle, required
Plugin 'VundleVim/Vundle.vim'
"
" " The following are examples of different formats supported.
" " Keep Plugin commands between vundle#begin/end.
" " plugin on GitHub repo
Plugin 'tpope/vim-fugitive'

" " All of your Plugins must be added before the following line
Plugin 'flazz/vim-colorschemes'
Plugin 'scrooloose/nerdtree'
Plugin 'vim-airline/vim-airline'
Plugin 'edkolev/tmuxline.vim'
Plugin 'yggdroot/indentline'
call vundle#end()            " required
filetype plugin indent on		"requerid
"filetype plugin on

set omnifunc=syntaxcomplete#Complete

function! StripWhitespace()
	let save_cursor = getpos(".")
	let old_query = getreg('/')

	call setpos('.', save_cursor)
	call setreg('/', old_query)
endfunction

" keyboard shorcut
noremap <leader>ss :call StripWhitespace()<CR>
noremap <leader>W :w !sudo tee % > /dev/null<CR>

" Relative numbering is pretty useful for motions (3g, 5k...). However I'd
" prefer to have a way for switching relative numbers with a single map.
nmap <F5> :set invrelativenumber<CR>
imap <F5> <ESC>:set invrelativenumber<CR>a
nmap <F4> :%s/\s\+$//e<CR>
let g:syntastic_javascript_checkers = ['jscs']
set statusline+=%#warningmsg#
set statusline+=%{SyntasticStatuslineFlag()}
set statusline+=%*

let g:syntastic_always_populate_loc_list = 1
let g:syntastic_auto_loc_list = 1
let g:syntastic_check_on_open = 1
let g:syntastic_check_on_wq = 0
			
colorscheme seti
