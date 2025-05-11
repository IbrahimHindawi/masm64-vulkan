externdef __imp_LdapGetLastError:PPROC
LdapGetLastError equ <__imp_LdapGetLastError>

externdef __imp_LdapMapErrorToWin32:PPROC
LdapMapErrorToWin32 equ <__imp_LdapMapErrorToWin32>

externdef __imp_LdapUTF8ToUnicode:PPROC
LdapUTF8ToUnicode equ <__imp_LdapUTF8ToUnicode>

externdef __imp_LdapUnicodeToUTF8:PPROC
LdapUnicodeToUTF8 equ <__imp_LdapUnicodeToUTF8>

externdef __imp_ber_alloc_t:PPROC
ber_alloc_t equ <__imp_ber_alloc_t>

externdef __imp_ber_bvdup:PPROC
ber_bvdup equ <__imp_ber_bvdup>

externdef __imp_ber_bvecfree:PPROC
ber_bvecfree equ <__imp_ber_bvecfree>

externdef __imp_ber_bvfree:PPROC
ber_bvfree equ <__imp_ber_bvfree>

externdef __imp_ber_first_element:PPROC
ber_first_element equ <__imp_ber_first_element>

externdef __imp_ber_flatten:PPROC
ber_flatten equ <__imp_ber_flatten>

externdef __imp_ber_free:PPROC
ber_free equ <__imp_ber_free>

externdef __imp_ber_init:PPROC
ber_init equ <__imp_ber_init>

externdef __imp_ber_next_element:PPROC
ber_next_element equ <__imp_ber_next_element>

externdef __imp_ber_peek_tag:PPROC
ber_peek_tag equ <__imp_ber_peek_tag>

externdef __imp_ber_printf:PPROC
ber_printf equ <__imp_ber_printf>

externdef __imp_ber_scanf:PPROC
ber_scanf equ <__imp_ber_scanf>

externdef __imp_ber_skip_tag:PPROC
ber_skip_tag equ <__imp_ber_skip_tag>

externdef __imp_cldap_open:PPROC
cldap_open equ <__imp_cldap_open>

externdef __imp_cldap_openA:PPROC
cldap_openA equ <__imp_cldap_openA>
  IFNDEF __UNICODE__
    cldap_open equ <__imp_cldap_openA>
  ENDIF

externdef __imp_cldap_openW:PPROC
cldap_openW equ <__imp_cldap_openW>
  IFDEF __UNICODE__
    cldap_open equ <__imp_cldap_openW>
  ENDIF

externdef __imp_ldap_abandon:PPROC
ldap_abandon equ <__imp_ldap_abandon>

externdef __imp_ldap_add:PPROC
ldap_add equ <__imp_ldap_add>

externdef __imp_ldap_addA:PPROC
ldap_addA equ <__imp_ldap_addA>
  IFNDEF __UNICODE__
    ldap_add equ <__imp_ldap_addA>
  ENDIF

externdef __imp_ldap_addW:PPROC
ldap_addW equ <__imp_ldap_addW>
  IFDEF __UNICODE__
    ldap_add equ <__imp_ldap_addW>
  ENDIF

externdef __imp_ldap_add_ext:PPROC
ldap_add_ext equ <__imp_ldap_add_ext>

externdef __imp_ldap_add_extA:PPROC
ldap_add_extA equ <__imp_ldap_add_extA>
  IFNDEF __UNICODE__
    ldap_add_ext equ <__imp_ldap_add_extA>
  ENDIF

externdef __imp_ldap_add_extW:PPROC
ldap_add_extW equ <__imp_ldap_add_extW>
  IFDEF __UNICODE__
    ldap_add_ext equ <__imp_ldap_add_extW>
  ENDIF

externdef __imp_ldap_add_ext_s:PPROC
ldap_add_ext_s equ <__imp_ldap_add_ext_s>

externdef __imp_ldap_add_ext_sA:PPROC
ldap_add_ext_sA equ <__imp_ldap_add_ext_sA>
  IFNDEF __UNICODE__
    ldap_add_ext_s equ <__imp_ldap_add_ext_sA>
  ENDIF

externdef __imp_ldap_add_ext_sW:PPROC
ldap_add_ext_sW equ <__imp_ldap_add_ext_sW>
  IFDEF __UNICODE__
    ldap_add_ext_s equ <__imp_ldap_add_ext_sW>
  ENDIF

externdef __imp_ldap_add_s:PPROC
ldap_add_s equ <__imp_ldap_add_s>

externdef __imp_ldap_add_sA:PPROC
ldap_add_sA equ <__imp_ldap_add_sA>
  IFNDEF __UNICODE__
    ldap_add_s equ <__imp_ldap_add_sA>
  ENDIF

externdef __imp_ldap_add_sW:PPROC
ldap_add_sW equ <__imp_ldap_add_sW>
  IFDEF __UNICODE__
    ldap_add_s equ <__imp_ldap_add_sW>
  ENDIF

externdef __imp_ldap_bind:PPROC
ldap_bind equ <__imp_ldap_bind>

externdef __imp_ldap_bindA:PPROC
ldap_bindA equ <__imp_ldap_bindA>
  IFNDEF __UNICODE__
    ldap_bind equ <__imp_ldap_bindA>
  ENDIF

externdef __imp_ldap_bindW:PPROC
ldap_bindW equ <__imp_ldap_bindW>
  IFDEF __UNICODE__
    ldap_bind equ <__imp_ldap_bindW>
  ENDIF

externdef __imp_ldap_bind_s:PPROC
ldap_bind_s equ <__imp_ldap_bind_s>

externdef __imp_ldap_bind_sA:PPROC
ldap_bind_sA equ <__imp_ldap_bind_sA>
  IFNDEF __UNICODE__
    ldap_bind_s equ <__imp_ldap_bind_sA>
  ENDIF

externdef __imp_ldap_bind_sW:PPROC
ldap_bind_sW equ <__imp_ldap_bind_sW>
  IFDEF __UNICODE__
    ldap_bind_s equ <__imp_ldap_bind_sW>
  ENDIF

externdef __imp_ldap_check_filterA:PPROC
ldap_check_filterA equ <__imp_ldap_check_filterA>
  IFNDEF __UNICODE__
    ldap_check_filter equ <__imp_ldap_check_filterA>
  ENDIF

externdef __imp_ldap_check_filterW:PPROC
ldap_check_filterW equ <__imp_ldap_check_filterW>
  IFDEF __UNICODE__
    ldap_check_filter equ <__imp_ldap_check_filterW>
  ENDIF

externdef __imp_ldap_cleanup:PPROC
ldap_cleanup equ <__imp_ldap_cleanup>

externdef __imp_ldap_close_extended_op:PPROC
ldap_close_extended_op equ <__imp_ldap_close_extended_op>

externdef __imp_ldap_compare:PPROC
ldap_compare equ <__imp_ldap_compare>

externdef __imp_ldap_compareA:PPROC
ldap_compareA equ <__imp_ldap_compareA>
  IFNDEF __UNICODE__
    ldap_compare equ <__imp_ldap_compareA>
  ENDIF

externdef __imp_ldap_compareW:PPROC
ldap_compareW equ <__imp_ldap_compareW>
  IFDEF __UNICODE__
    ldap_compare equ <__imp_ldap_compareW>
  ENDIF

externdef __imp_ldap_compare_ext:PPROC
ldap_compare_ext equ <__imp_ldap_compare_ext>

externdef __imp_ldap_compare_extA:PPROC
ldap_compare_extA equ <__imp_ldap_compare_extA>
  IFNDEF __UNICODE__
    ldap_compare_ext equ <__imp_ldap_compare_extA>
  ENDIF

externdef __imp_ldap_compare_extW:PPROC
ldap_compare_extW equ <__imp_ldap_compare_extW>
  IFDEF __UNICODE__
    ldap_compare_ext equ <__imp_ldap_compare_extW>
  ENDIF

externdef __imp_ldap_compare_ext_s:PPROC
ldap_compare_ext_s equ <__imp_ldap_compare_ext_s>

externdef __imp_ldap_compare_ext_sA:PPROC
ldap_compare_ext_sA equ <__imp_ldap_compare_ext_sA>
  IFNDEF __UNICODE__
    ldap_compare_ext_s equ <__imp_ldap_compare_ext_sA>
  ENDIF

externdef __imp_ldap_compare_ext_sW:PPROC
ldap_compare_ext_sW equ <__imp_ldap_compare_ext_sW>
  IFDEF __UNICODE__
    ldap_compare_ext_s equ <__imp_ldap_compare_ext_sW>
  ENDIF

externdef __imp_ldap_compare_s:PPROC
ldap_compare_s equ <__imp_ldap_compare_s>

externdef __imp_ldap_compare_sA:PPROC
ldap_compare_sA equ <__imp_ldap_compare_sA>
  IFNDEF __UNICODE__
    ldap_compare_s equ <__imp_ldap_compare_sA>
  ENDIF

externdef __imp_ldap_compare_sW:PPROC
ldap_compare_sW equ <__imp_ldap_compare_sW>
  IFDEF __UNICODE__
    ldap_compare_s equ <__imp_ldap_compare_sW>
  ENDIF

externdef __imp_ldap_conn_from_msg:PPROC
ldap_conn_from_msg equ <__imp_ldap_conn_from_msg>

externdef __imp_ldap_connect:PPROC
ldap_connect equ <__imp_ldap_connect>

externdef __imp_ldap_control_free:PPROC
ldap_control_free equ <__imp_ldap_control_free>

externdef __imp_ldap_control_freeA:PPROC
ldap_control_freeA equ <__imp_ldap_control_freeA>
  IFNDEF __UNICODE__
    ldap_control_free equ <__imp_ldap_control_freeA>
  ENDIF

externdef __imp_ldap_control_freeW:PPROC
ldap_control_freeW equ <__imp_ldap_control_freeW>
  IFDEF __UNICODE__
    ldap_control_free equ <__imp_ldap_control_freeW>
  ENDIF

externdef __imp_ldap_controls_free:PPROC
ldap_controls_free equ <__imp_ldap_controls_free>

externdef __imp_ldap_controls_freeA:PPROC
ldap_controls_freeA equ <__imp_ldap_controls_freeA>
  IFNDEF __UNICODE__
    ldap_controls_free equ <__imp_ldap_controls_freeA>
  ENDIF

externdef __imp_ldap_controls_freeW:PPROC
ldap_controls_freeW equ <__imp_ldap_controls_freeW>
  IFDEF __UNICODE__
    ldap_controls_free equ <__imp_ldap_controls_freeW>
  ENDIF

externdef __imp_ldap_count_entries:PPROC
ldap_count_entries equ <__imp_ldap_count_entries>

externdef __imp_ldap_count_references:PPROC
ldap_count_references equ <__imp_ldap_count_references>

externdef __imp_ldap_count_values:PPROC
ldap_count_values equ <__imp_ldap_count_values>

externdef __imp_ldap_count_valuesA:PPROC
ldap_count_valuesA equ <__imp_ldap_count_valuesA>
  IFNDEF __UNICODE__
    ldap_count_values equ <__imp_ldap_count_valuesA>
  ENDIF

externdef __imp_ldap_count_valuesW:PPROC
ldap_count_valuesW equ <__imp_ldap_count_valuesW>
  IFDEF __UNICODE__
    ldap_count_values equ <__imp_ldap_count_valuesW>
  ENDIF

externdef __imp_ldap_count_values_len:PPROC
ldap_count_values_len equ <__imp_ldap_count_values_len>

externdef __imp_ldap_create_page_control:PPROC
ldap_create_page_control equ <__imp_ldap_create_page_control>

externdef __imp_ldap_create_page_controlA:PPROC
ldap_create_page_controlA equ <__imp_ldap_create_page_controlA>
  IFNDEF __UNICODE__
    ldap_create_page_control equ <__imp_ldap_create_page_controlA>
  ENDIF

externdef __imp_ldap_create_page_controlW:PPROC
ldap_create_page_controlW equ <__imp_ldap_create_page_controlW>
  IFDEF __UNICODE__
    ldap_create_page_control equ <__imp_ldap_create_page_controlW>
  ENDIF

externdef __imp_ldap_create_sort_control:PPROC
ldap_create_sort_control equ <__imp_ldap_create_sort_control>

externdef __imp_ldap_create_sort_controlA:PPROC
ldap_create_sort_controlA equ <__imp_ldap_create_sort_controlA>
  IFNDEF __UNICODE__
    ldap_create_sort_control equ <__imp_ldap_create_sort_controlA>
  ENDIF

externdef __imp_ldap_create_sort_controlW:PPROC
ldap_create_sort_controlW equ <__imp_ldap_create_sort_controlW>
  IFDEF __UNICODE__
    ldap_create_sort_control equ <__imp_ldap_create_sort_controlW>
  ENDIF

externdef __imp_ldap_create_vlv_controlA:PPROC
ldap_create_vlv_controlA equ <__imp_ldap_create_vlv_controlA>
  IFNDEF __UNICODE__
    ldap_create_vlv_control equ <__imp_ldap_create_vlv_controlA>
  ENDIF

externdef __imp_ldap_create_vlv_controlW:PPROC
ldap_create_vlv_controlW equ <__imp_ldap_create_vlv_controlW>
  IFDEF __UNICODE__
    ldap_create_vlv_control equ <__imp_ldap_create_vlv_controlW>
  ENDIF

externdef __imp_ldap_delete:PPROC
ldap_delete equ <__imp_ldap_delete>

externdef __imp_ldap_deleteA:PPROC
ldap_deleteA equ <__imp_ldap_deleteA>
  IFNDEF __UNICODE__
    ldap_delete equ <__imp_ldap_deleteA>
  ENDIF

externdef __imp_ldap_deleteW:PPROC
ldap_deleteW equ <__imp_ldap_deleteW>
  IFDEF __UNICODE__
    ldap_delete equ <__imp_ldap_deleteW>
  ENDIF

externdef __imp_ldap_delete_ext:PPROC
ldap_delete_ext equ <__imp_ldap_delete_ext>

externdef __imp_ldap_delete_extA:PPROC
ldap_delete_extA equ <__imp_ldap_delete_extA>
  IFNDEF __UNICODE__
    ldap_delete_ext equ <__imp_ldap_delete_extA>
  ENDIF

externdef __imp_ldap_delete_extW:PPROC
ldap_delete_extW equ <__imp_ldap_delete_extW>
  IFDEF __UNICODE__
    ldap_delete_ext equ <__imp_ldap_delete_extW>
  ENDIF

externdef __imp_ldap_delete_ext_s:PPROC
ldap_delete_ext_s equ <__imp_ldap_delete_ext_s>

externdef __imp_ldap_delete_ext_sA:PPROC
ldap_delete_ext_sA equ <__imp_ldap_delete_ext_sA>
  IFNDEF __UNICODE__
    ldap_delete_ext_s equ <__imp_ldap_delete_ext_sA>
  ENDIF

externdef __imp_ldap_delete_ext_sW:PPROC
ldap_delete_ext_sW equ <__imp_ldap_delete_ext_sW>
  IFDEF __UNICODE__
    ldap_delete_ext_s equ <__imp_ldap_delete_ext_sW>
  ENDIF

externdef __imp_ldap_delete_s:PPROC
ldap_delete_s equ <__imp_ldap_delete_s>

externdef __imp_ldap_delete_sA:PPROC
ldap_delete_sA equ <__imp_ldap_delete_sA>
  IFNDEF __UNICODE__
    ldap_delete_s equ <__imp_ldap_delete_sA>
  ENDIF

externdef __imp_ldap_delete_sW:PPROC
ldap_delete_sW equ <__imp_ldap_delete_sW>
  IFDEF __UNICODE__
    ldap_delete_s equ <__imp_ldap_delete_sW>
  ENDIF

externdef __imp_ldap_dn2ufn:PPROC
ldap_dn2ufn equ <__imp_ldap_dn2ufn>

externdef __imp_ldap_dn2ufnA:PPROC
ldap_dn2ufnA equ <__imp_ldap_dn2ufnA>
  IFNDEF __UNICODE__
    ldap_dn2ufn equ <__imp_ldap_dn2ufnA>
  ENDIF

externdef __imp_ldap_dn2ufnW:PPROC
ldap_dn2ufnW equ <__imp_ldap_dn2ufnW>
  IFDEF __UNICODE__
    ldap_dn2ufn equ <__imp_ldap_dn2ufnW>
  ENDIF

externdef __imp_ldap_encode_sort_controlA:PPROC
ldap_encode_sort_controlA equ <__imp_ldap_encode_sort_controlA>
  IFNDEF __UNICODE__
    ldap_encode_sort_control equ <__imp_ldap_encode_sort_controlA>
  ENDIF

externdef __imp_ldap_encode_sort_controlW:PPROC
ldap_encode_sort_controlW equ <__imp_ldap_encode_sort_controlW>
  IFDEF __UNICODE__
    ldap_encode_sort_control equ <__imp_ldap_encode_sort_controlW>
  ENDIF

externdef __imp_ldap_err2string:PPROC
ldap_err2string equ <__imp_ldap_err2string>

externdef __imp_ldap_err2stringA:PPROC
ldap_err2stringA equ <__imp_ldap_err2stringA>
  IFNDEF __UNICODE__
    ldap_err2string equ <__imp_ldap_err2stringA>
  ENDIF

externdef __imp_ldap_err2stringW:PPROC
ldap_err2stringW equ <__imp_ldap_err2stringW>
  IFDEF __UNICODE__
    ldap_err2string equ <__imp_ldap_err2stringW>
  ENDIF

externdef __imp_ldap_escape_filter_element:PPROC
ldap_escape_filter_element equ <__imp_ldap_escape_filter_element>

externdef __imp_ldap_escape_filter_elementA:PPROC
ldap_escape_filter_elementA equ <__imp_ldap_escape_filter_elementA>
  IFNDEF __UNICODE__
    ldap_escape_filter_element equ <__imp_ldap_escape_filter_elementA>
  ENDIF

externdef __imp_ldap_escape_filter_elementW:PPROC
ldap_escape_filter_elementW equ <__imp_ldap_escape_filter_elementW>
  IFDEF __UNICODE__
    ldap_escape_filter_element equ <__imp_ldap_escape_filter_elementW>
  ENDIF

externdef __imp_ldap_explode_dn:PPROC
ldap_explode_dn equ <__imp_ldap_explode_dn>

externdef __imp_ldap_explode_dnA:PPROC
ldap_explode_dnA equ <__imp_ldap_explode_dnA>
  IFNDEF __UNICODE__
    ldap_explode_dn equ <__imp_ldap_explode_dnA>
  ENDIF

externdef __imp_ldap_explode_dnW:PPROC
ldap_explode_dnW equ <__imp_ldap_explode_dnW>
  IFDEF __UNICODE__
    ldap_explode_dn equ <__imp_ldap_explode_dnW>
  ENDIF

externdef __imp_ldap_extended_operation:PPROC
ldap_extended_operation equ <__imp_ldap_extended_operation>

externdef __imp_ldap_extended_operationA:PPROC
ldap_extended_operationA equ <__imp_ldap_extended_operationA>
  IFNDEF __UNICODE__
    ldap_extended_operation equ <__imp_ldap_extended_operationA>
  ENDIF

externdef __imp_ldap_extended_operationW:PPROC
ldap_extended_operationW equ <__imp_ldap_extended_operationW>
  IFDEF __UNICODE__
    ldap_extended_operation equ <__imp_ldap_extended_operationW>
  ENDIF

externdef __imp_ldap_extended_operation_sA:PPROC
ldap_extended_operation_sA equ <__imp_ldap_extended_operation_sA>
  IFNDEF __UNICODE__
    ldap_extended_operation_s equ <__imp_ldap_extended_operation_sA>
  ENDIF

externdef __imp_ldap_extended_operation_sW:PPROC
ldap_extended_operation_sW equ <__imp_ldap_extended_operation_sW>
  IFDEF __UNICODE__
    ldap_extended_operation_s equ <__imp_ldap_extended_operation_sW>
  ENDIF

externdef __imp_ldap_first_attribute:PPROC
ldap_first_attribute equ <__imp_ldap_first_attribute>

externdef __imp_ldap_first_attributeA:PPROC
ldap_first_attributeA equ <__imp_ldap_first_attributeA>
  IFNDEF __UNICODE__
    ldap_first_attribute equ <__imp_ldap_first_attributeA>
  ENDIF

externdef __imp_ldap_first_attributeW:PPROC
ldap_first_attributeW equ <__imp_ldap_first_attributeW>
  IFDEF __UNICODE__
    ldap_first_attribute equ <__imp_ldap_first_attributeW>
  ENDIF

externdef __imp_ldap_first_entry:PPROC
ldap_first_entry equ <__imp_ldap_first_entry>

externdef __imp_ldap_first_reference:PPROC
ldap_first_reference equ <__imp_ldap_first_reference>

externdef __imp_ldap_free_controls:PPROC
ldap_free_controls equ <__imp_ldap_free_controls>

externdef __imp_ldap_free_controlsA:PPROC
ldap_free_controlsA equ <__imp_ldap_free_controlsA>
  IFNDEF __UNICODE__
    ldap_free_controls equ <__imp_ldap_free_controlsA>
  ENDIF

externdef __imp_ldap_free_controlsW:PPROC
ldap_free_controlsW equ <__imp_ldap_free_controlsW>
  IFDEF __UNICODE__
    ldap_free_controls equ <__imp_ldap_free_controlsW>
  ENDIF

externdef __imp_ldap_get_dn:PPROC
ldap_get_dn equ <__imp_ldap_get_dn>

externdef __imp_ldap_get_dnA:PPROC
ldap_get_dnA equ <__imp_ldap_get_dnA>
  IFNDEF __UNICODE__
    ldap_get_dn equ <__imp_ldap_get_dnA>
  ENDIF

externdef __imp_ldap_get_dnW:PPROC
ldap_get_dnW equ <__imp_ldap_get_dnW>
  IFDEF __UNICODE__
    ldap_get_dn equ <__imp_ldap_get_dnW>
  ENDIF

externdef __imp_ldap_get_next_page:PPROC
ldap_get_next_page equ <__imp_ldap_get_next_page>

externdef __imp_ldap_get_next_page_s:PPROC
ldap_get_next_page_s equ <__imp_ldap_get_next_page_s>

externdef __imp_ldap_get_option:PPROC
ldap_get_option equ <__imp_ldap_get_option>

externdef __imp_ldap_get_optionA:PPROC
ldap_get_optionA equ <__imp_ldap_get_optionA>
  IFNDEF __UNICODE__
    ldap_get_option equ <__imp_ldap_get_optionA>
  ENDIF

externdef __imp_ldap_get_optionW:PPROC
ldap_get_optionW equ <__imp_ldap_get_optionW>
  IFDEF __UNICODE__
    ldap_get_option equ <__imp_ldap_get_optionW>
  ENDIF

externdef __imp_ldap_get_paged_count:PPROC
ldap_get_paged_count equ <__imp_ldap_get_paged_count>

externdef __imp_ldap_get_values:PPROC
ldap_get_values equ <__imp_ldap_get_values>

externdef __imp_ldap_get_valuesA:PPROC
ldap_get_valuesA equ <__imp_ldap_get_valuesA>
  IFNDEF __UNICODE__
    ldap_get_values equ <__imp_ldap_get_valuesA>
  ENDIF

externdef __imp_ldap_get_valuesW:PPROC
ldap_get_valuesW equ <__imp_ldap_get_valuesW>
  IFDEF __UNICODE__
    ldap_get_values equ <__imp_ldap_get_valuesW>
  ENDIF

externdef __imp_ldap_get_values_len:PPROC
ldap_get_values_len equ <__imp_ldap_get_values_len>

externdef __imp_ldap_get_values_lenA:PPROC
ldap_get_values_lenA equ <__imp_ldap_get_values_lenA>
  IFNDEF __UNICODE__
    ldap_get_values_len equ <__imp_ldap_get_values_lenA>
  ENDIF

externdef __imp_ldap_get_values_lenW:PPROC
ldap_get_values_lenW equ <__imp_ldap_get_values_lenW>
  IFDEF __UNICODE__
    ldap_get_values_len equ <__imp_ldap_get_values_lenW>
  ENDIF

externdef __imp_ldap_init:PPROC
ldap_init equ <__imp_ldap_init>

externdef __imp_ldap_initA:PPROC
ldap_initA equ <__imp_ldap_initA>
  IFNDEF __UNICODE__
    ldap_init equ <__imp_ldap_initA>
  ENDIF

externdef __imp_ldap_initW:PPROC
ldap_initW equ <__imp_ldap_initW>
  IFDEF __UNICODE__
    ldap_init equ <__imp_ldap_initW>
  ENDIF

externdef __imp_ldap_memfree:PPROC
ldap_memfree equ <__imp_ldap_memfree>

externdef __imp_ldap_memfreeA:PPROC
ldap_memfreeA equ <__imp_ldap_memfreeA>
  IFNDEF __UNICODE__
    ldap_memfree equ <__imp_ldap_memfreeA>
  ENDIF

externdef __imp_ldap_memfreeW:PPROC
ldap_memfreeW equ <__imp_ldap_memfreeW>
  IFDEF __UNICODE__
    ldap_memfree equ <__imp_ldap_memfreeW>
  ENDIF

externdef __imp_ldap_modify:PPROC
ldap_modify equ <__imp_ldap_modify>

externdef __imp_ldap_modifyA:PPROC
ldap_modifyA equ <__imp_ldap_modifyA>
  IFNDEF __UNICODE__
    ldap_modify equ <__imp_ldap_modifyA>
  ENDIF

externdef __imp_ldap_modifyW:PPROC
ldap_modifyW equ <__imp_ldap_modifyW>
  IFDEF __UNICODE__
    ldap_modify equ <__imp_ldap_modifyW>
  ENDIF

externdef __imp_ldap_modify_ext:PPROC
ldap_modify_ext equ <__imp_ldap_modify_ext>

externdef __imp_ldap_modify_extA:PPROC
ldap_modify_extA equ <__imp_ldap_modify_extA>
  IFNDEF __UNICODE__
    ldap_modify_ext equ <__imp_ldap_modify_extA>
  ENDIF

externdef __imp_ldap_modify_extW:PPROC
ldap_modify_extW equ <__imp_ldap_modify_extW>
  IFDEF __UNICODE__
    ldap_modify_ext equ <__imp_ldap_modify_extW>
  ENDIF

externdef __imp_ldap_modify_ext_s:PPROC
ldap_modify_ext_s equ <__imp_ldap_modify_ext_s>

externdef __imp_ldap_modify_ext_sA:PPROC
ldap_modify_ext_sA equ <__imp_ldap_modify_ext_sA>
  IFNDEF __UNICODE__
    ldap_modify_ext_s equ <__imp_ldap_modify_ext_sA>
  ENDIF

externdef __imp_ldap_modify_ext_sW:PPROC
ldap_modify_ext_sW equ <__imp_ldap_modify_ext_sW>
  IFDEF __UNICODE__
    ldap_modify_ext_s equ <__imp_ldap_modify_ext_sW>
  ENDIF

externdef __imp_ldap_modify_s:PPROC
ldap_modify_s equ <__imp_ldap_modify_s>

externdef __imp_ldap_modify_sA:PPROC
ldap_modify_sA equ <__imp_ldap_modify_sA>
  IFNDEF __UNICODE__
    ldap_modify_s equ <__imp_ldap_modify_sA>
  ENDIF

externdef __imp_ldap_modify_sW:PPROC
ldap_modify_sW equ <__imp_ldap_modify_sW>
  IFDEF __UNICODE__
    ldap_modify_s equ <__imp_ldap_modify_sW>
  ENDIF

externdef __imp_ldap_modrdn2:PPROC
ldap_modrdn2 equ <__imp_ldap_modrdn2>

externdef __imp_ldap_modrdn2A:PPROC
ldap_modrdn2A equ <__imp_ldap_modrdn2A>
  IFNDEF __UNICODE__
    ldap_modrdn2 equ <__imp_ldap_modrdn2A>
  ENDIF

externdef __imp_ldap_modrdn2W:PPROC
ldap_modrdn2W equ <__imp_ldap_modrdn2W>
  IFDEF __UNICODE__
    ldap_modrdn2 equ <__imp_ldap_modrdn2W>
  ENDIF

externdef __imp_ldap_modrdn2_s:PPROC
ldap_modrdn2_s equ <__imp_ldap_modrdn2_s>

externdef __imp_ldap_modrdn2_sA:PPROC
ldap_modrdn2_sA equ <__imp_ldap_modrdn2_sA>
  IFNDEF __UNICODE__
    ldap_modrdn2_s equ <__imp_ldap_modrdn2_sA>
  ENDIF

externdef __imp_ldap_modrdn2_sW:PPROC
ldap_modrdn2_sW equ <__imp_ldap_modrdn2_sW>
  IFDEF __UNICODE__
    ldap_modrdn2_s equ <__imp_ldap_modrdn2_sW>
  ENDIF

externdef __imp_ldap_modrdn:PPROC
ldap_modrdn equ <__imp_ldap_modrdn>

externdef __imp_ldap_modrdnA:PPROC
ldap_modrdnA equ <__imp_ldap_modrdnA>
  IFNDEF __UNICODE__
    ldap_modrdn equ <__imp_ldap_modrdnA>
  ENDIF

externdef __imp_ldap_modrdnW:PPROC
ldap_modrdnW equ <__imp_ldap_modrdnW>
  IFDEF __UNICODE__
    ldap_modrdn equ <__imp_ldap_modrdnW>
  ENDIF

externdef __imp_ldap_modrdn_s:PPROC
ldap_modrdn_s equ <__imp_ldap_modrdn_s>

externdef __imp_ldap_modrdn_sA:PPROC
ldap_modrdn_sA equ <__imp_ldap_modrdn_sA>
  IFNDEF __UNICODE__
    ldap_modrdn_s equ <__imp_ldap_modrdn_sA>
  ENDIF

externdef __imp_ldap_modrdn_sW:PPROC
ldap_modrdn_sW equ <__imp_ldap_modrdn_sW>
  IFDEF __UNICODE__
    ldap_modrdn_s equ <__imp_ldap_modrdn_sW>
  ENDIF

externdef __imp_ldap_msgfree:PPROC
ldap_msgfree equ <__imp_ldap_msgfree>

externdef __imp_ldap_next_attribute:PPROC
ldap_next_attribute equ <__imp_ldap_next_attribute>

externdef __imp_ldap_next_attributeA:PPROC
ldap_next_attributeA equ <__imp_ldap_next_attributeA>
  IFNDEF __UNICODE__
    ldap_next_attribute equ <__imp_ldap_next_attributeA>
  ENDIF

externdef __imp_ldap_next_attributeW:PPROC
ldap_next_attributeW equ <__imp_ldap_next_attributeW>
  IFDEF __UNICODE__
    ldap_next_attribute equ <__imp_ldap_next_attributeW>
  ENDIF

externdef __imp_ldap_next_entry:PPROC
ldap_next_entry equ <__imp_ldap_next_entry>

externdef __imp_ldap_next_reference:PPROC
ldap_next_reference equ <__imp_ldap_next_reference>

externdef __imp_ldap_open:PPROC
ldap_open equ <__imp_ldap_open>

externdef __imp_ldap_openA:PPROC
ldap_openA equ <__imp_ldap_openA>
  IFNDEF __UNICODE__
    ldap_open equ <__imp_ldap_openA>
  ENDIF

externdef __imp_ldap_openW:PPROC
ldap_openW equ <__imp_ldap_openW>
  IFDEF __UNICODE__
    ldap_open equ <__imp_ldap_openW>
  ENDIF

externdef __imp_ldap_parse_extended_resultA:PPROC
ldap_parse_extended_resultA equ <__imp_ldap_parse_extended_resultA>
  IFNDEF __UNICODE__
    ldap_parse_extended_result equ <__imp_ldap_parse_extended_resultA>
  ENDIF

externdef __imp_ldap_parse_extended_resultW:PPROC
ldap_parse_extended_resultW equ <__imp_ldap_parse_extended_resultW>
  IFDEF __UNICODE__
    ldap_parse_extended_result equ <__imp_ldap_parse_extended_resultW>
  ENDIF

externdef __imp_ldap_parse_page_control:PPROC
ldap_parse_page_control equ <__imp_ldap_parse_page_control>

externdef __imp_ldap_parse_page_controlA:PPROC
ldap_parse_page_controlA equ <__imp_ldap_parse_page_controlA>
  IFNDEF __UNICODE__
    ldap_parse_page_control equ <__imp_ldap_parse_page_controlA>
  ENDIF

externdef __imp_ldap_parse_page_controlW:PPROC
ldap_parse_page_controlW equ <__imp_ldap_parse_page_controlW>
  IFDEF __UNICODE__
    ldap_parse_page_control equ <__imp_ldap_parse_page_controlW>
  ENDIF

externdef __imp_ldap_parse_reference:PPROC
ldap_parse_reference equ <__imp_ldap_parse_reference>

externdef __imp_ldap_parse_referenceA:PPROC
ldap_parse_referenceA equ <__imp_ldap_parse_referenceA>
  IFNDEF __UNICODE__
    ldap_parse_reference equ <__imp_ldap_parse_referenceA>
  ENDIF

externdef __imp_ldap_parse_referenceW:PPROC
ldap_parse_referenceW equ <__imp_ldap_parse_referenceW>
  IFDEF __UNICODE__
    ldap_parse_reference equ <__imp_ldap_parse_referenceW>
  ENDIF

externdef __imp_ldap_parse_result:PPROC
ldap_parse_result equ <__imp_ldap_parse_result>

externdef __imp_ldap_parse_resultA:PPROC
ldap_parse_resultA equ <__imp_ldap_parse_resultA>
  IFNDEF __UNICODE__
    ldap_parse_result equ <__imp_ldap_parse_resultA>
  ENDIF

externdef __imp_ldap_parse_resultW:PPROC
ldap_parse_resultW equ <__imp_ldap_parse_resultW>
  IFDEF __UNICODE__
    ldap_parse_result equ <__imp_ldap_parse_resultW>
  ENDIF

externdef __imp_ldap_parse_sort_control:PPROC
ldap_parse_sort_control equ <__imp_ldap_parse_sort_control>

externdef __imp_ldap_parse_sort_controlA:PPROC
ldap_parse_sort_controlA equ <__imp_ldap_parse_sort_controlA>
  IFNDEF __UNICODE__
    ldap_parse_sort_control equ <__imp_ldap_parse_sort_controlA>
  ENDIF

externdef __imp_ldap_parse_sort_controlW:PPROC
ldap_parse_sort_controlW equ <__imp_ldap_parse_sort_controlW>
  IFDEF __UNICODE__
    ldap_parse_sort_control equ <__imp_ldap_parse_sort_controlW>
  ENDIF

externdef __imp_ldap_parse_vlv_controlA:PPROC
ldap_parse_vlv_controlA equ <__imp_ldap_parse_vlv_controlA>
  IFNDEF __UNICODE__
    ldap_parse_vlv_control equ <__imp_ldap_parse_vlv_controlA>
  ENDIF

externdef __imp_ldap_parse_vlv_controlW:PPROC
ldap_parse_vlv_controlW equ <__imp_ldap_parse_vlv_controlW>
  IFDEF __UNICODE__
    ldap_parse_vlv_control equ <__imp_ldap_parse_vlv_controlW>
  ENDIF

externdef __imp_ldap_perror:PPROC
ldap_perror equ <__imp_ldap_perror>

externdef __imp_ldap_rename_ext:PPROC
ldap_rename_ext equ <__imp_ldap_rename_ext>

externdef __imp_ldap_rename_extA:PPROC
ldap_rename_extA equ <__imp_ldap_rename_extA>
  IFNDEF __UNICODE__
    ldap_rename_ext equ <__imp_ldap_rename_extA>
  ENDIF

externdef __imp_ldap_rename_extW:PPROC
ldap_rename_extW equ <__imp_ldap_rename_extW>
  IFDEF __UNICODE__
    ldap_rename_ext equ <__imp_ldap_rename_extW>
  ENDIF

externdef __imp_ldap_rename_ext_s:PPROC
ldap_rename_ext_s equ <__imp_ldap_rename_ext_s>

externdef __imp_ldap_rename_ext_sA:PPROC
ldap_rename_ext_sA equ <__imp_ldap_rename_ext_sA>
  IFNDEF __UNICODE__
    ldap_rename_ext_s equ <__imp_ldap_rename_ext_sA>
  ENDIF

externdef __imp_ldap_rename_ext_sW:PPROC
ldap_rename_ext_sW equ <__imp_ldap_rename_ext_sW>
  IFDEF __UNICODE__
    ldap_rename_ext_s equ <__imp_ldap_rename_ext_sW>
  ENDIF

externdef __imp_ldap_result2error:PPROC
ldap_result2error equ <__imp_ldap_result2error>

externdef __imp_ldap_result:PPROC
ldap_result equ <__imp_ldap_result>

externdef __imp_ldap_sasl_bindA:PPROC
ldap_sasl_bindA equ <__imp_ldap_sasl_bindA>
  IFNDEF __UNICODE__
    ldap_sasl_bind equ <__imp_ldap_sasl_bindA>
  ENDIF

externdef __imp_ldap_sasl_bindW:PPROC
ldap_sasl_bindW equ <__imp_ldap_sasl_bindW>
  IFDEF __UNICODE__
    ldap_sasl_bind equ <__imp_ldap_sasl_bindW>
  ENDIF

externdef __imp_ldap_sasl_bind_sA:PPROC
ldap_sasl_bind_sA equ <__imp_ldap_sasl_bind_sA>
  IFNDEF __UNICODE__
    ldap_sasl_bind_s equ <__imp_ldap_sasl_bind_sA>
  ENDIF

externdef __imp_ldap_sasl_bind_sW:PPROC
ldap_sasl_bind_sW equ <__imp_ldap_sasl_bind_sW>
  IFDEF __UNICODE__
    ldap_sasl_bind_s equ <__imp_ldap_sasl_bind_sW>
  ENDIF

externdef __imp_ldap_search:PPROC
ldap_search equ <__imp_ldap_search>

externdef __imp_ldap_searchA:PPROC
ldap_searchA equ <__imp_ldap_searchA>
  IFNDEF __UNICODE__
    ldap_search equ <__imp_ldap_searchA>
  ENDIF

externdef __imp_ldap_searchW:PPROC
ldap_searchW equ <__imp_ldap_searchW>
  IFDEF __UNICODE__
    ldap_search equ <__imp_ldap_searchW>
  ENDIF

externdef __imp_ldap_search_abandon_page:PPROC
ldap_search_abandon_page equ <__imp_ldap_search_abandon_page>

externdef __imp_ldap_search_ext:PPROC
ldap_search_ext equ <__imp_ldap_search_ext>

externdef __imp_ldap_search_extA:PPROC
ldap_search_extA equ <__imp_ldap_search_extA>
  IFNDEF __UNICODE__
    ldap_search_ext equ <__imp_ldap_search_extA>
  ENDIF

externdef __imp_ldap_search_extW:PPROC
ldap_search_extW equ <__imp_ldap_search_extW>
  IFDEF __UNICODE__
    ldap_search_ext equ <__imp_ldap_search_extW>
  ENDIF

externdef __imp_ldap_search_ext_s:PPROC
ldap_search_ext_s equ <__imp_ldap_search_ext_s>

externdef __imp_ldap_search_ext_sA:PPROC
ldap_search_ext_sA equ <__imp_ldap_search_ext_sA>
  IFNDEF __UNICODE__
    ldap_search_ext_s equ <__imp_ldap_search_ext_sA>
  ENDIF

externdef __imp_ldap_search_ext_sW:PPROC
ldap_search_ext_sW equ <__imp_ldap_search_ext_sW>
  IFDEF __UNICODE__
    ldap_search_ext_s equ <__imp_ldap_search_ext_sW>
  ENDIF

externdef __imp_ldap_search_init_page:PPROC
ldap_search_init_page equ <__imp_ldap_search_init_page>

externdef __imp_ldap_search_init_pageA:PPROC
ldap_search_init_pageA equ <__imp_ldap_search_init_pageA>
  IFNDEF __UNICODE__
    ldap_search_init_page equ <__imp_ldap_search_init_pageA>
  ENDIF

externdef __imp_ldap_search_init_pageW:PPROC
ldap_search_init_pageW equ <__imp_ldap_search_init_pageW>
  IFDEF __UNICODE__
    ldap_search_init_page equ <__imp_ldap_search_init_pageW>
  ENDIF

externdef __imp_ldap_search_s:PPROC
ldap_search_s equ <__imp_ldap_search_s>

externdef __imp_ldap_search_sA:PPROC
ldap_search_sA equ <__imp_ldap_search_sA>
  IFNDEF __UNICODE__
    ldap_search_s equ <__imp_ldap_search_sA>
  ENDIF

externdef __imp_ldap_search_sW:PPROC
ldap_search_sW equ <__imp_ldap_search_sW>
  IFDEF __UNICODE__
    ldap_search_s equ <__imp_ldap_search_sW>
  ENDIF

externdef __imp_ldap_search_st:PPROC
ldap_search_st equ <__imp_ldap_search_st>

externdef __imp_ldap_search_stA:PPROC
ldap_search_stA equ <__imp_ldap_search_stA>
  IFNDEF __UNICODE__
    ldap_search_st equ <__imp_ldap_search_stA>
  ENDIF

externdef __imp_ldap_search_stW:PPROC
ldap_search_stW equ <__imp_ldap_search_stW>
  IFDEF __UNICODE__
    ldap_search_st equ <__imp_ldap_search_stW>
  ENDIF

externdef __imp_ldap_set_dbg_flags:PPROC
ldap_set_dbg_flags equ <__imp_ldap_set_dbg_flags>

externdef __imp_ldap_set_dbg_routine:PPROC
ldap_set_dbg_routine equ <__imp_ldap_set_dbg_routine>

externdef __imp_ldap_set_option:PPROC
ldap_set_option equ <__imp_ldap_set_option>

externdef __imp_ldap_set_optionA:PPROC
ldap_set_optionA equ <__imp_ldap_set_optionA>
  IFNDEF __UNICODE__
    ldap_set_option equ <__imp_ldap_set_optionA>
  ENDIF

externdef __imp_ldap_set_optionW:PPROC
ldap_set_optionW equ <__imp_ldap_set_optionW>
  IFDEF __UNICODE__
    ldap_set_option equ <__imp_ldap_set_optionW>
  ENDIF

externdef __imp_ldap_simple_bind:PPROC
ldap_simple_bind equ <__imp_ldap_simple_bind>

externdef __imp_ldap_simple_bindA:PPROC
ldap_simple_bindA equ <__imp_ldap_simple_bindA>
  IFNDEF __UNICODE__
    ldap_simple_bind equ <__imp_ldap_simple_bindA>
  ENDIF

externdef __imp_ldap_simple_bindW:PPROC
ldap_simple_bindW equ <__imp_ldap_simple_bindW>
  IFDEF __UNICODE__
    ldap_simple_bind equ <__imp_ldap_simple_bindW>
  ENDIF

externdef __imp_ldap_simple_bind_s:PPROC
ldap_simple_bind_s equ <__imp_ldap_simple_bind_s>

externdef __imp_ldap_simple_bind_sA:PPROC
ldap_simple_bind_sA equ <__imp_ldap_simple_bind_sA>
  IFNDEF __UNICODE__
    ldap_simple_bind_s equ <__imp_ldap_simple_bind_sA>
  ENDIF

externdef __imp_ldap_simple_bind_sW:PPROC
ldap_simple_bind_sW equ <__imp_ldap_simple_bind_sW>
  IFDEF __UNICODE__
    ldap_simple_bind_s equ <__imp_ldap_simple_bind_sW>
  ENDIF

externdef __imp_ldap_sslinit:PPROC
ldap_sslinit equ <__imp_ldap_sslinit>

externdef __imp_ldap_sslinitA:PPROC
ldap_sslinitA equ <__imp_ldap_sslinitA>
  IFNDEF __UNICODE__
    ldap_sslinit equ <__imp_ldap_sslinitA>
  ENDIF

externdef __imp_ldap_sslinitW:PPROC
ldap_sslinitW equ <__imp_ldap_sslinitW>
  IFDEF __UNICODE__
    ldap_sslinit equ <__imp_ldap_sslinitW>
  ENDIF

externdef __imp_ldap_start_tls_sA:PPROC
ldap_start_tls_sA equ <__imp_ldap_start_tls_sA>
  IFNDEF __UNICODE__
    ldap_start_tls_s equ <__imp_ldap_start_tls_sA>
  ENDIF

externdef __imp_ldap_start_tls_sW:PPROC
ldap_start_tls_sW equ <__imp_ldap_start_tls_sW>
  IFDEF __UNICODE__
    ldap_start_tls_s equ <__imp_ldap_start_tls_sW>
  ENDIF

externdef __imp_ldap_startup:PPROC
ldap_startup equ <__imp_ldap_startup>

externdef __imp_ldap_stop_tls_s:PPROC
ldap_stop_tls_s equ <__imp_ldap_stop_tls_s>

externdef __imp_ldap_ufn2dn:PPROC
ldap_ufn2dn equ <__imp_ldap_ufn2dn>

externdef __imp_ldap_ufn2dnA:PPROC
ldap_ufn2dnA equ <__imp_ldap_ufn2dnA>
  IFNDEF __UNICODE__
    ldap_ufn2dn equ <__imp_ldap_ufn2dnA>
  ENDIF

externdef __imp_ldap_ufn2dnW:PPROC
ldap_ufn2dnW equ <__imp_ldap_ufn2dnW>
  IFDEF __UNICODE__
    ldap_ufn2dn equ <__imp_ldap_ufn2dnW>
  ENDIF

externdef __imp_ldap_unbind:PPROC
ldap_unbind equ <__imp_ldap_unbind>

externdef __imp_ldap_unbind_s:PPROC
ldap_unbind_s equ <__imp_ldap_unbind_s>

externdef __imp_ldap_value_free:PPROC
ldap_value_free equ <__imp_ldap_value_free>

externdef __imp_ldap_value_freeA:PPROC
ldap_value_freeA equ <__imp_ldap_value_freeA>
  IFNDEF __UNICODE__
    ldap_value_free equ <__imp_ldap_value_freeA>
  ENDIF

externdef __imp_ldap_value_freeW:PPROC
ldap_value_freeW equ <__imp_ldap_value_freeW>
  IFDEF __UNICODE__
    ldap_value_free equ <__imp_ldap_value_freeW>
  ENDIF

externdef __imp_ldap_value_free_len:PPROC
ldap_value_free_len equ <__imp_ldap_value_free_len>

externdef __imp_wldap32_ordinal15:PPROC
wldap32_ordinal15 equ <__imp_wldap32_ordinal15>

externdef __imp_wldap32_ordinal225:PPROC
wldap32_ordinal225 equ <__imp_wldap32_ordinal225>

externdef __imp_wldap32_ordinal226:PPROC
wldap32_ordinal226 equ <__imp_wldap32_ordinal226>

externdef __imp_wldap32_ordinal227:PPROC
wldap32_ordinal227 equ <__imp_wldap32_ordinal227>

externdef __imp_wldap32_ordinal228:PPROC
wldap32_ordinal228 equ <__imp_wldap32_ordinal228>

externdef __imp_wldap32_ordinal229:PPROC
wldap32_ordinal229 equ <__imp_wldap32_ordinal229>

externdef __imp_wldap32_ordinal233:PPROC
wldap32_ordinal233 equ <__imp_wldap32_ordinal233>

externdef __imp_wldap32_ordinal234:PPROC
wldap32_ordinal234 equ <__imp_wldap32_ordinal234>

externdef __imp_wldap32_ordinal235:PPROC
wldap32_ordinal235 equ <__imp_wldap32_ordinal235>

externdef __imp_wldap32_ordinal236:PPROC
wldap32_ordinal236 equ <__imp_wldap32_ordinal236>

externdef __imp_wldap32_ordinal237:PPROC
wldap32_ordinal237 equ <__imp_wldap32_ordinal237>

externdef __imp_wldap32_ordinal238:PPROC
wldap32_ordinal238 equ <__imp_wldap32_ordinal238>

externdef __imp_wldap32_ordinal239:PPROC
wldap32_ordinal239 equ <__imp_wldap32_ordinal239>

externdef __imp_wldap32_ordinal240:PPROC
wldap32_ordinal240 equ <__imp_wldap32_ordinal240>

externdef __imp_wldap32_ordinal241:PPROC
wldap32_ordinal241 equ <__imp_wldap32_ordinal241>

externdef __imp_wldap32_ordinal242:PPROC
wldap32_ordinal242 equ <__imp_wldap32_ordinal242>

externdef __imp_wldap32_ordinal243:PPROC
wldap32_ordinal243 equ <__imp_wldap32_ordinal243>

externdef __imp_wldap32_ordinal244:PPROC
wldap32_ordinal244 equ <__imp_wldap32_ordinal244>

externdef __imp_wldap32_ordinal245:PPROC
wldap32_ordinal245 equ <__imp_wldap32_ordinal245>

externdef __imp_wldap32_ordinal246:PPROC
wldap32_ordinal246 equ <__imp_wldap32_ordinal246>

externdef __imp_wldap32_ordinal247:PPROC
wldap32_ordinal247 equ <__imp_wldap32_ordinal247>

externdef __imp_wldap32_ordinal248:PPROC
wldap32_ordinal248 equ <__imp_wldap32_ordinal248>

externdef __imp_wldap32_ordinal249:PPROC
wldap32_ordinal249 equ <__imp_wldap32_ordinal249>

externdef __imp_wldap32_ordinal250:PPROC
wldap32_ordinal250 equ <__imp_wldap32_ordinal250>

externdef __imp_wldap32_ordinal251:PPROC
wldap32_ordinal251 equ <__imp_wldap32_ordinal251>

externdef __imp_wldap32_ordinal252:PPROC
wldap32_ordinal252 equ <__imp_wldap32_ordinal252>

externdef __imp_wldap32_ordinal253:PPROC
wldap32_ordinal253 equ <__imp_wldap32_ordinal253>

externdef __imp_wldap32_ordinal254:PPROC
wldap32_ordinal254 equ <__imp_wldap32_ordinal254>

externdef __imp_wldap32_ordinal255:PPROC
wldap32_ordinal255 equ <__imp_wldap32_ordinal255>

externdef __imp_wldap32_ordinal256:PPROC
wldap32_ordinal256 equ <__imp_wldap32_ordinal256>

externdef __imp_wldap32_ordinal257:PPROC
wldap32_ordinal257 equ <__imp_wldap32_ordinal257>

externdef __imp_wldap32_ordinal258:PPROC
wldap32_ordinal258 equ <__imp_wldap32_ordinal258>

externdef __imp_wldap32_ordinal259:PPROC
wldap32_ordinal259 equ <__imp_wldap32_ordinal259>

externdef __imp_wldap32_ordinal260:PPROC
wldap32_ordinal260 equ <__imp_wldap32_ordinal260>

externdef __imp_wldap32_ordinal261:PPROC
wldap32_ordinal261 equ <__imp_wldap32_ordinal261>

externdef __imp_wldap32_ordinal262:PPROC
wldap32_ordinal262 equ <__imp_wldap32_ordinal262>

externdef __imp_wldap32_ordinal263:PPROC
wldap32_ordinal263 equ <__imp_wldap32_ordinal263>

externdef __imp_wldap32_ordinal264:PPROC
wldap32_ordinal264 equ <__imp_wldap32_ordinal264>

externdef __imp_wldap32_ordinal265:PPROC
wldap32_ordinal265 equ <__imp_wldap32_ordinal265>

externdef __imp_wldap32_ordinal266:PPROC
wldap32_ordinal266 equ <__imp_wldap32_ordinal266>

externdef __imp_wldap32_ordinal267:PPROC
wldap32_ordinal267 equ <__imp_wldap32_ordinal267>

externdef __imp_wldap32_ordinal268:PPROC
wldap32_ordinal268 equ <__imp_wldap32_ordinal268>

externdef __imp_wldap32_ordinal269:PPROC
wldap32_ordinal269 equ <__imp_wldap32_ordinal269>

externdef __imp_wldap32_ordinal270:PPROC
wldap32_ordinal270 equ <__imp_wldap32_ordinal270>

externdef __imp_wldap32_ordinal271:PPROC
wldap32_ordinal271 equ <__imp_wldap32_ordinal271>

externdef __imp_wldap32_ordinal272:PPROC
wldap32_ordinal272 equ <__imp_wldap32_ordinal272>

externdef __imp_wldap32_ordinal273:PPROC
wldap32_ordinal273 equ <__imp_wldap32_ordinal273>

externdef __imp_wldap32_ordinal274:PPROC
wldap32_ordinal274 equ <__imp_wldap32_ordinal274>

externdef __imp_wldap32_ordinal275:PPROC
wldap32_ordinal275 equ <__imp_wldap32_ordinal275>

externdef __imp_wldap32_ordinal276:PPROC
wldap32_ordinal276 equ <__imp_wldap32_ordinal276>

externdef __imp_wldap32_ordinal277:PPROC
wldap32_ordinal277 equ <__imp_wldap32_ordinal277>

externdef __imp_wldap32_ordinal278:PPROC
wldap32_ordinal278 equ <__imp_wldap32_ordinal278>

externdef __imp_wldap32_ordinal279:PPROC
wldap32_ordinal279 equ <__imp_wldap32_ordinal279>

externdef __imp_wldap32_ordinal280:PPROC
wldap32_ordinal280 equ <__imp_wldap32_ordinal280>

externdef __imp_wldap32_ordinal281:PPROC
wldap32_ordinal281 equ <__imp_wldap32_ordinal281>

externdef __imp_wldap32_ordinal282:PPROC
wldap32_ordinal282 equ <__imp_wldap32_ordinal282>

externdef __imp_wldap32_ordinal283:PPROC
wldap32_ordinal283 equ <__imp_wldap32_ordinal283>

externdef __imp_wldap32_ordinal284:PPROC
wldap32_ordinal284 equ <__imp_wldap32_ordinal284>

externdef __imp_wldap32_ordinal285:PPROC
wldap32_ordinal285 equ <__imp_wldap32_ordinal285>

externdef __imp_wldap32_ordinal286:PPROC
wldap32_ordinal286 equ <__imp_wldap32_ordinal286>

externdef __imp_wldap32_ordinal287:PPROC
wldap32_ordinal287 equ <__imp_wldap32_ordinal287>

externdef __imp_wldap32_ordinal288:PPROC
wldap32_ordinal288 equ <__imp_wldap32_ordinal288>

externdef __imp_wldap32_ordinal289:PPROC
wldap32_ordinal289 equ <__imp_wldap32_ordinal289>

externdef __imp_wldap32_ordinal290:PPROC
wldap32_ordinal290 equ <__imp_wldap32_ordinal290>

externdef __imp_wldap32_ordinal291:PPROC
wldap32_ordinal291 equ <__imp_wldap32_ordinal291>

externdef __imp_wldap32_ordinal292:PPROC
wldap32_ordinal292 equ <__imp_wldap32_ordinal292>

externdef __imp_wldap32_ordinal293:PPROC
wldap32_ordinal293 equ <__imp_wldap32_ordinal293>

externdef __imp_wldap32_ordinal294:PPROC
wldap32_ordinal294 equ <__imp_wldap32_ordinal294>

externdef __imp_wldap32_ordinal295:PPROC
wldap32_ordinal295 equ <__imp_wldap32_ordinal295>

externdef __imp_wldap32_ordinal296:PPROC
wldap32_ordinal296 equ <__imp_wldap32_ordinal296>

externdef __imp_wldap32_ordinal297:PPROC
wldap32_ordinal297 equ <__imp_wldap32_ordinal297>

externdef __imp_wldap32_ordinal298:PPROC
wldap32_ordinal298 equ <__imp_wldap32_ordinal298>

externdef __imp_wldap32_ordinal299:PPROC
wldap32_ordinal299 equ <__imp_wldap32_ordinal299>

externdef __imp_wldap32_ordinal323:PPROC
wldap32_ordinal323 equ <__imp_wldap32_ordinal323>

externdef __imp_wldap32_ordinal324:PPROC
wldap32_ordinal324 equ <__imp_wldap32_ordinal324>

externdef __imp_wldap32_ordinal325:PPROC
wldap32_ordinal325 equ <__imp_wldap32_ordinal325>

externdef __imp_wldap32_ordinal326:PPROC
wldap32_ordinal326 equ <__imp_wldap32_ordinal326>

externdef __imp_wldap32_ordinal327:PPROC
wldap32_ordinal327 equ <__imp_wldap32_ordinal327>

externdef __imp_wldap32_ordinal328:PPROC
wldap32_ordinal328 equ <__imp_wldap32_ordinal328>
