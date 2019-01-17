#!/bin/sh
ocamlc -pp "./../node_modules/.bin/bsrefmt --print binary" -dsource -ppx ./../lib/bs/native/ppx_withstyles.native -impl "$1"
