  ; ___________________________
  ; MASM64 Library Include File
  ; ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
    X64ST STRUCT
      mmx   dq ?
      sse   dq ?
      sse2  dq ?
      sse3  dq ?
      ssse3 dq ?
      sse41 dq ?
      sse42 dq ?
      avx   dq ?
      avx2  dq ?
      aes   dq ?
      htt   dq ?
      amd3D dq ?
      amd3x dq ?
      mmxx  dq ?
    X64ST ENDS

    externdef atofp:PROC
    externdef arrev:PROC
    externdef bitmap_image:PROC
    externdef block_ltrim:PROC
    externdef block_rtrim:PROC
    externdef block_trim:PROC
    externdef block_monospace:PROC
    externdef BmpButton:PROC
    externdef button:PROC
    externdef cnv_rect:PROC

    EXTERNDEF colr_button:PROC
    EXTERNDEF link_button:PROC
    EXTERNDEF text_button:PROC

    EXTERNDEF muli:PROC
    EXTERNDEF divi:PROC

    externdef scale_image_by_percent:PROC
    externdef scale_image_by_size:PROC

    externdef chartype:PROC
    externdef chfilter:PROC
    externdef checkbox:PROC
    externdef ClearClipboard:PROC
    externdef CmdParser:PROC
    externdef cpDiv:PROC
    externdef cpMul:PROC
    externdef cpSqrt:PROC
    externdef cpuid_string:PROC
    externdef create_riched:PROC
    externdef set_edit_colours:PROC
    externdef DrawArc:PROC
    externdef drive_combo:PROC
    externdef editbox:PROC
    externdef group_box:PROC
    externdef listbox:PROC
    externdef radiobutton:PROC
    externdef progress_bar:PROC
    externdef syslink:PROC
    externdef ascii_dump:PROC
    externdef atou_ex:PROC
    externdef bcopy:PROC
    externdef bin2hex:PROC
    externdef block_rtrim:PROC
    externdef dbcompact:PROC
    externdef char_count:PROC
    externdef CreateMMF:PROC
    externdef CloseMMF:PROC
    externdef copy_all:PROC
    externdef lBrowseForFolder:PROC
    externdef ErrOut:PROC
    externdef fptoa:PROC
    externdef GetAppName:PROC
    externdef GetAppPath:PROC
    externdef GetBmpSize:PROC
    externdef Get_Vendor:PROC
    externdef Gdip_Save_BMP:PROC
    externdef Gdip_Save_32bpp_BMP:PROC
    externdef Gdip_Save_JPG:PROC
    externdef Gdip_Save_PNG:PROC
    externdef MsgboxI:PROC
    externdef StdOut:PROC
    externdef aspect_ratio:PROC
    externdef cmd_tail:PROC
    externdef execute:PROC
    externdef exist:PROC
    externdef fastsort:PROC
    externdef file_read:PROC
    externdef file_write:PROC
    externdef FilledElipse:PROC
    externdef FilledRect:PROC
    externdef FindStr:PROC
    externdef font_handle:PROC
    externdef fixed_array:PROC
    externdef GetClipboardText:PROC
    externdef get_cpu_id_string:PROC
    externdef get_ext:PROC
    externdef GetPathOnly:PROC
    externdef getpercent:PROC
    externdef get_unique_seed:PROC
    externdef HexDump:PROC
    externdef hexstream:PROC
    externdef inbin:PROC
    externdef intdiv:PROC
    externdef intmul:PROC
    externdef irand:PROC
    externdef lfcnt:PROC
    externdef line:PROC
    externdef link_button:PROC
    externdef lntok:PROC
    externdef LoadGdiImage:PROC
    externdef load_drives:PROC
    externdef load_file:PROC
    externdef load_list:PROC
    externdef low_ascii:PROC
    externdef ltok:PROC
    externdef mcopy:PROC
    externdef MonthByNumber:PROC
    externdef mmi:PROC
    externdef monospace_args:PROC
    externdef NameFromPath:PROC
    externdef onecrlf:PROC
    externdef open_file_dialog:PROC
    externdef parse2:PROC
    externdef parse3:PROC
    externdef parse4:PROC
    externdef parse5:PROC
    externdef parse6:PROC
    externdef parse_arglist:PROC
    externdef preparse:PROC
    externdef rawssort:PROC
    externdef re_alloc:PROC
    externdef remove_extension:PROC
    externdef ResImageLoad:PROC
    externdef rrand:PROC
    externdef RunUrl:PROC
    externdef SaveAsGIF:PROC
    externdef SaveAsJPG:PROC
    externdef SaveAsPNG:PROC
    externdef SaveAsBMP:PROC
    externdef save_file:PROC
    externdef save_file_dialog:PROC
    externdef sblist:PROC
    externdef ScreenCapture:PROC
    externdef seed_rrand:PROC
    externdef seed_irand:PROC
    externdef select_all:PROC
    externdef SplashScreen:PROC
    externdef SetClipboardText:PROC
    externdef static_left:PROC
    externdef static_cntr:PROC
    externdef static_rght:PROC
    externdef SetClipboardText:PROC
    externdef StdIn:PROC
    externdef StrLen:PROC
    externdef str_strip:PROC
    externdef string_clean:PROC
    externdef stripcc:PROC
    externdef szCatStr:PROC
    externdef szCmp:PROC
    externdef szCmpi:PROC
    externdef szCopy:PROC
    externdef szLeft:PROC
    externdef szLeft$:PROC
    externdef szLen:PROC
    externdef szLower:PROC
    externdef szLtrim:PROC
    externdef szMono:PROC
    externdef szRemove:PROC
    externdef szRep:PROC
    externdef szRev:PROC
    externdef szRight:PROC
    externdef szRight$:PROC
    externdef szRtrim:PROC
    externdef szSpace:PROC
    externdef szTrim:PROC
    externdef szUpper:PROC
    externdef szWcnt:PROC
    externdef szappend:PROC
    externdef szmulticat:PROC
    externdef transparent_button:PROC
    externdef transparent_label:PROC
    externdef truncate:PROC
    externdef txt2mem:PROC
    externdef underline_font:PROC
    externdef wait_key:PROC
    externdef winshell:PROC
    externdef wordtok:PROC
    externdef wtok:PROC
    externdef xmmcopya:PROC
    externdef xor_data:PROC
    externdef ymmcopya:PROC
    externdef zerofill:PROC

    externdef circle_area:PROC
    externdef square_area:PROC
    externdef rectangle_area:PROC
    externdef triangle_area:PROC
    externdef rhombus_area:PROC
    externdef sphere_area:PROC
    externdef degree_to_radian:PROC
    externdef radian_to_degree:PROC
    externdef celc2farh:PROC
    externdef farh2celc:PROC
    externdef volume_cube:PROC
    externdef volume_cuboid:PROC
    externdef volume_cylinder:PROC
    externdef volume_cone:PROC
    externdef volume_sphere:PROC
