
Elf32_Sym struc  # (sizeof=0x10, align=0x4, mappedto_1)
                         # XREF: LOAD:00400930/r
                         # LOAD:00400940/r ...
st_name:.word ?          # offset (00401780)
st_value:.word ?         # offset (00000000)
st_size:.word ?
st_info:.byte ?
st_other:.byte ?
st_shndx:.half ?
Elf32_Sym ends


Elf32_Dyn struc  # (sizeof=0x8, align=0x4, copyof_2)
                         # XREF: LOAD:stru_400160/r
                         # LOAD:00400168/r ...
d_tag:.word ?
d_un:Elf32_Dyn::$A263394DDF3EC2D4B1B8448EDD30E249 ?
Elf32_Dyn ends


Elf32_Dyn::$A263394DDF3EC2D4B1B8448EDD30E249 union  # (sizeof=0x4, align=0x4, copyof_3)
                         # XREF: Elf32_Dyn/r
d_val:.word ?
d_ptr:.word ?
Elf32_Dyn::$A263394DDF3EC2D4B1B8448EDD30E249 ends


