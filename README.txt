MinorCPU > ./build/ARM/gem5.opt -d Results_MinorCPU configs/example/se.py --cpu-type=MinorCPU --caches --mem-type=DDR4_1600_8x8 --cmd=myprog/addint_arm
MinorCPU2> ./build/ARM/gem5.opt -d Results_MinorCPU2 configs/example/se.py --cpu-type=MinorCPU --caches --mem-type=SimpleMemory --cmd=myprog/addint_arm
MinorCPU3> ./build/ARM/gem5.opt -d Results_MinorCPU3 configs/example/se.py --cpu-type=MinorCPU --cpu-clock=4GHz --caches --mem-type=DDR3_1600_8x8 --cmd=myprog/addint_arm
TimingSimpleCPU > ./build/ARM/gem5.opt -d Resulults_TimingSimpleCPU configs/example/se.py --cpu-type=TimingSimpleCPU --mem-type=DDR3_1600_8x8 --cmd=myprog/addint_arm
TimingSimpleCPU2> ./build/ARM/gem5.opt -d Resulults_TimingSimpleCPU2 configs/example/se.py --cpu-type=TimingSimpleCPU --mem-type=SimpleMemory --cmd=myprog/addint_arm
TimingSimpleCPU3> ./build/ARM/gem5.opt -d Resulults_TimingSimpleCPU3 configs/example/se.py --cpu-type=TimingSimpleCPU --cpu-clock=4GHz --mem-type=DDR3_1600_8x8 --cmd=myprog/addint_arm
