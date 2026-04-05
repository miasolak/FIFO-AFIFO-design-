create_project project_1 . -force -part xc7a100tcsg324-1
set_property board_part digilentinc.com:arty-a7-100:part0:1.1 [current_project]
set path [pwd]
set fp [open "$path/../filelist.f/" r]
  while {[gets $fp line] >= 0} {
    add_files -norecurse -scan_for_includes $line
  }
close $fp
set_property top AFIFO [current_fileset]
update_compile_order -fileset sources_1
launch_runs synth_1 -jobs 4
wait_on_run synth_1
exit
