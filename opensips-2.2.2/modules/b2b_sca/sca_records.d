sca_records.o sca_records.d : sca_records.c ../../ut.h ../../config.h ../../dprint.h \
 ../../pt.h ../../sr_module.h ../../parser/msg_parser.h \
 ../../parser/../str.h ../../parser/../lump_struct.h \
 ../../parser/.././parser/hf.h ../../parser/.././parser/../str.h \
 ../../parser/../flags.h ../../parser/../ip_addr.h ../../parser/../str.h \
 ../../parser/../dprint.h ../../parser/../md5utils.h \
 ../../parser/../qvalue.h ../../parser/../config.h \
 ../../parser/parse_def.h ../../parser/parse_cseq.h \
 ../../parser/parse_content.h ../../parser/parse_param.h \
 ../../parser/msg_parser.h ../../parser/parse_via.h \
 ../../parser/parse_fline.h ../../parser/parse_multipart.h \
 ../../parser/hf.h ../../parser/sdp/sdp.h \
 ../../parser/sdp/../msg_parser.h ../../parser/parse_to.h \
 ../../statistics.h ../../hash_func.h ../../str.h ../../atomic.h \
 ../../mi/mi.h ../../mi/../str.h ../../mi/tree.h ../../mi/attr.h \
 ../../pvar.h ../../usr_avp.h ../../version.h ../../route.h ../../error.h \
 ../../route_struct.h ../../async.h ../../sr_module_deps.h ../../action.h \
 ../../evi/evi_modules.h ../../evi/../str.h ../../evi/event_interface.h \
 ../../evi/evi_transport.h ../../evi/../mi/mi.h ../../evi/../ip_addr.h \
 ../../evi/../parser/msg_parser.h ../../evi/evi_params.h ../../evi/evi.h \
 ../../evi/../locking.h ../../evi/../lock_ops.h ../../evi/../fastlock.h \
 ../../evi/../lock_alloc.h ../../evi/../mem/mem.h \
 ../../evi/../mem/../config.h ../../evi/../mem/../dprint.h \
 ../../evi/../mem/common.h ../../evi/../mem/f_malloc.h \
 ../../evi/../mem/meminfo.h ../../evi/../mem/../error.h \
 ../../evi/../mem/shm_mem.h ../../evi/../mem/../statistics.h \
 ../../evi/../mem/../lock_ops.h ../../evi/evi_core.h ../../mem/mem.h \
 ../../mem/shm_mem.h ../../mem/../statistics.h ../../mem/../error.h \
 ../../mem/shm_mem.h ../../usr_avp.h ../../parser/parse_uri.h \
 ../../parser/../net/trans.h ../../parser/../net/../ip_addr.h \
 ../../parser/../net/api_proto.h ../../parser/../net/api_proto_net.h \
 ../../parser/../net/tcp_conn_defs.h ../../parser/../net/../locking.h \
 ../../parser/../parser/msg_parser.h sca_records.h \
 ../b2b_logic/b2b_load.h ../b2b_logic/../../sr_module.h \
 ../b2b_logic/../b2b_entities/b2b_common.h \
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
 ../b2b_logic/../b2b_entities/../dialog/../../str.h \
 ../b2b_logic/../b2b_entities/../dialog/../../pvar.h \
 ../b2b_logic/../b2b_entities/../dialog/../../ut.h \
 ../b2b_logic/../b2b_entities/../dialog/../tm/t_hooks.h \
 ../b2b_logic/../b2b_entities/../dialog/dlg_timer.h \
 ../b2b_logic/../b2b_entities/../dialog/../../locking.h \
 ../b2b_logic/../b2b_entities/../dialog/dlg_profile.h \
 ../b2b_logic/../b2b_entities/../dialog/../../map.h \
 ../b2b_logic/../b2b_entities/../dialog/dlg_vals.h \
 ../b2b_logic/../b2b_entities/../dialog/dlg_hash.h \
 ../b2b_logic/../b2b_entities/../dialog/../../context.h \
 ../b2b_logic/../b2b_entities/../dialog/../../mi/mi.h \
 ../b2b_logic/../b2b_entities/../dialog/../../sr_module.h \
 ../b2b_logic/../b2b_entities/b2b_common.h
