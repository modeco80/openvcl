make openvcl # We only want to make openvcl itself; we can skip the EE examples.

# build masp
cd contrib/masp
./configure
make
