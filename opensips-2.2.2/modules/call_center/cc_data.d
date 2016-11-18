cc_data.o cc_data.d : cc_data.c ../../mem/shm_mem.h ../../mem/../statistics.h \
 ../../mem/../hash_func.h ../../mem/../str.h ../../mem/../atomic.h \
 ../../mem/../error.h ../../mem/../dprint.h ../../mem/../pt.h \
 ../../mem/../lock_ops.h ../../mem/../fastlock.h ../../mem/common.h \
 ../../mem/f_malloc.h ../../mem/meminfo.h ../../parser/parse_uri.h \
 ../../parser/../str.h ../../parser/../net/trans.h \
 ../../parser/../net/../ip_addr.h ../../parser/../net/../str.h \
 ../../parser/../net/../dprint.h ../../parser/../net/api_proto.h \
 ../../parser/../net/api_proto_net.h ../../parser/../net/tcp_conn_defs.h \
 ../../parser/../net/../locking.h ../../parser/../net/../lock_ops.h \
 ../../parser/../net/../lock_alloc.h ../../parser/../net/../mem/mem.h \
 ../../parser/../net/../mem/../config.h \
 ../../parser/../net/../mem/../dprint.h \
 ../../parser/../net/../mem/common.h \
 ../../parser/../net/../mem/../error.h \
 ../../parser/../net/../mem/shm_mem.h \
 ../../parser/../net/../mem/../statistics.h \
 ../../parser/../parser/msg_parser.h ../../parser/../parser/../str.h \
 ../../parser/../parser/../lump_struct.h \
 ../../parser/../parser/.././parser/hf.h \
 ../../parser/../parser/.././parser/../str.h \
 ../../parser/../parser/../flags.h ../../parser/../parser/../ip_addr.h \
 ../../parser/../parser/../md5utils.h ../../parser/../parser/../str.h \
 ../../parser/../parser/../qvalue.h ../../parser/../parser/../config.h \
 ../../parser/../parser/parse_def.h ../../parser/../parser/parse_cseq.h \
 ../../parser/../parser/parse_content.h \
 ../../parser/../parser/parse_param.h ../../parser/../parser/msg_parser.h \
 ../../parser/../parser/parse_via.h ../../parser/../parser/parse_fline.h \
 ../../parser/../parser/parse_multipart.h ../../parser/../parser/hf.h \
 ../../parser/../parser/sdp/sdp.h \
 ../../parser/../parser/sdp/../msg_parser.h \
 ../../parser/../parser/parse_to.h ../../locking.h ../../ut.h \
 ../../config.h ../../dprint.h ../../sr_module.h \
 ../../parser/msg_parser.h ../../statistics.h ../../mi/mi.h \
 ../../mi/../str.h ../../mi/tree.h ../../mi/attr.h ../../pvar.h \
 ../../str.h ../../usr_avp.h ../../version.h ../../route.h ../../error.h \
 ../../route_struct.h ../../async.h ../../sr_module_deps.h ../../action.h \
 ../../evi/evi_modules.h ../../evi/../str.h ../../evi/event_interface.h \
 ../../evi/evi_transport.h ../../evi/../mi/mi.h ../../evi/../ip_addr.h \
 ../../evi/../parser/msg_parser.h ../../evi/evi_params.h ../../evi/evi.h \
 ../../evi/../locking.h ../../evi/evi_core.h ../../mem/mem.h \
 ../../mem/shm_mem.h ../../trim.h ../b2b_logic/b2b_load.h \
 ../b2b_logic/../../sr_module.h ../b2b_logic/../b2b_entities/b2b_common.h \
 ../b2b_logic/../b2b_entities/dlg.h \
 ../b2b_logic/../b2b_entities/../../str.h \
 ../b2b_logic/../b2b_entities/../../lock_ops.h \
 ../b2b_logic/../b2b_entities/../tm/h_table.h \
 ../b2b_logic/../b2b_entities/../tm/../../parser/msg_parser.h \
 ../b2b_logic/../b2b_entities/../tm/../../proxy.h \
 ../b2b_logic/../b2b_entities/../tm/../../ip_addr.h \
 ../b2b_logic/../b2b_entities/../tm/../../str.h \
 ../b2b_logic/../b2b_entities/../tm/../../resolve.h \
 ../b2b_logic/../b2b_entities/../tm/../../mem/shm_mem.h \
 ../b2b_logic/../b2b_entities/../tm/../../mem/../statistics.h \
 ../b2b_logic/../b2b_entities/../tm/../../mem/../error.h \
 ../b2b_logic/../b2b_entities/../tm/../../proxy.h \
 ../b2b_logic/../b2b_entities/../tm/../../md5utils.h \
 ../b2b_logic/../b2b_entities/../tm/../../async.h \
 ../b2b_logic/../b2b_entities/../tm/../../usr_avp.h \
 ../b2b_logic/../b2b_entities/../tm/config.h \
 ../b2b_logic/../b2b_entities/../tm/../../hash_func.h \
 ../b2b_logic/../b2b_entities/../tm/../../config.h \
 ../b2b_logic/../b2b_entities/../tm/../../mem/shm_mem.h \
 ../b2b_logic/../b2b_entities/../tm/lock.h \
 ../b2b_logic/../b2b_entities/../tm/../../dprint.h \
 ../b2b_logic/../b2b_entities/../tm/../../locking.h \
 ../b2b_logic/../b2b_entities/../tm/h_table.h \
 ../b2b_logic/../b2b_entities/../tm/timer.h \
 ../b2b_logic/../b2b_entities/../tm/../../timer.h \
 ../b2b_logic/../b2b_entities/../tm/../../rw_locking.h \
 ../b2b_logic/../b2b_entities/../tm/../../locking.h \
 ../b2b_logic/../b2b_entities/../tm/sip_msg.h \
 ../b2b_logic/../b2b_entities/../tm/t_reply.h \
 ../b2b_logic/../b2b_entities/../tm/../../tags.h \
 ../b2b_logic/../b2b_entities/../tm/../../parser/msg_parser.h \
 ../b2b_logic/../b2b_entities/../tm/../../globals.h \
 ../b2b_logic/../b2b_entities/../tm/../../poll_types.h \
 ../b2b_logic/../b2b_entities/../tm/../../crc.h \
 ../b2b_logic/../b2b_entities/../tm/../../socket_info.h \
 ../b2b_logic/../b2b_entities/../tm/../../dprint.h \
 ../b2b_logic/../b2b_entities/../tm/../../net/trans.h \
 ../b2b_logic/../b2b_entities/../tm/../../ut.h \
 ../b2b_logic/../b2b_entities/../tm/t_hooks.h \
 ../b2b_logic/../b2b_entities/../tm/dlg.h \
 ../b2b_logic/../b2b_entities/../tm/../../str.h \
 ../b2b_logic/../b2b_entities/../tm/../../parser/parse_rr.h \
 ../b2b_logic/../b2b_entities/../tm/../../parser/msg_parser.h \
 ../b2b_logic/../b2b_entities/../tm/../../parser/parse_nameaddr.h \
 ../b2b_logic/../b2b_entities/../tm/../../parser/../str.h \
 ../b2b_logic/../b2b_entities/../tm/../../parser/parse_param.h \
 ../b2b_logic/../b2b_entities/../tm/../../parser/hf.h \
 ../b2b_logic/../b2b_entities/../dialog/dlg_load.h \
 ../b2b_logic/../b2b_entities/../dialog/dlg_cb.h \
 ../b2b_logic/../b2b_entities/../dialog/../../parser/msg_parser.h \
 ../b2b_logic/../b2b_entities/../dialog/dlg_handlers.h \
 ../b2b_logic/../b2b_entities/../dialog/../../parser/parse_from.h \
 ../b2b_logic/../b2b_entities/../dialog/../../parser/msg_parser.h \
 ../b2b_logic/../b2b_entities/../dialog/../../trim.h \
 ../b2b_logic/../b2b_entities/../dialog/../../str.h \
 ../b2b_logic/../b2b_entities/../dialog/../../pvar.h \
 ../b2b_logic/../b2b_entities/../dialog/../../ut.h \
 ../b2b_logic/../b2b_entities/../dialog/../tm/t_hooks.h \
 ../b2b_logic/../b2b_entities/../dialog/dlg_timer.h \
 ../b2b_logic/../b2b_entities/../dialog/../../locking.h \
 ../b2b_logic/../b2b_entities/../dialog/dlg_profile.h \
 ../b2b_logic/../b2b_entities/../dialog/../../map.h \
 ../b2b_logic/../b2b_entities/../dialog/../../str.h \
 ../b2b_logic/../b2b_entities/../dialog/dlg_vals.h \
 ../b2b_logic/../b2b_entities/../dialog/dlg_hash.h \
 ../b2b_logic/../b2b_entities/../dialog/../../context.h \
 ../b2b_logic/../b2b_entities/../dialog/../../mi/mi.h \
 ../b2b_logic/../b2b_entities/../dialog/../../sr_module.h \
 ../b2b_logic/../b2b_entities/b2b_common.h cc_data.h ../../str.h \
 ../../hash_func.h ../../parser/msg_parser.h
