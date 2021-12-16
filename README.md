1.1

**Basic system parameters**<br />
CPU type / Devices: "minor" : (MinorCPU,devices.L1I, devices.L1D,devices.WalkCache,devices.L2) / cache_line_size = 64 <br />
System clock: self.clk_domain " SrcClockDomain(clock="1GHz",voltage_domain=self.voltage_domain)


Για αλλαγή συχνότητας λειτουργίας του συστήματος αλλάζουμε το παραπάνω "clock" απο 1GHz στην επιθυμητή τιμή<br />πχ. SrcClockDomain(clock="2GHz",...).

1.2

sim_seconds : Number of seconds simulated / Διάρκεια προσομοίωσης σε δευτερόλεπτα<br />
sim_insts : Number of instructions simulated / Πλήθος εντολών που εκτελέστηκαν<br />
host_inst_rate : Simulator instruction rate (inst/s) / Ρυθμός εκτέλεσης εντολών ανα δευτερόλεπτο 

1.3

system.cpu_cluster.cpus.dcache.overall_miss_rate::total = 0.081944 <br />
system.cpu_cluster.cpus.icache.overall_miss_rate::total = 0.117078 <br />
system.cpu_cluster.l2.overall_miss_rate::total = 1 <br />
sim_insts = 5027 

Συνεπώς:<br />
CPI = 1 + ((0.117078 + 0.081944) x 6 + 1 x 50)/5027 = 1.0101838337

?? στο stats.txt  CPI =  6.991048 

1.4

"Insert gem5.org info here"

2.a

Γράψαμε ενα απλό πρόγραμμα σε γλώσσα C (myprog.c) και το κάναμε compile ως εξής:<br /> 
arm-linux-gnueabihf-gcc--static myprog.c -o myprog_arm

Στη συνέχεια τρέξαμε το myprog_arm με τον gem5 χρησιμοποιώντας το μοντέλο MinorCPU:<br /> 
./build/ARM/gem5.opt -d MinorCPU_0 configs/example/se.py --cpu-type=MinorCPU --caches -c  myprog/myprog_arm

και το μοντέλο TimingSimpleCPU:<br />
./build/ARM/gem5.opt -d TimingSimpleCPU_0 configs/example/se.py --cpu-type=TimingSimpleCPU -c  myprog/myprog_arm








