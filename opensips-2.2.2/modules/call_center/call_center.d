call_center.o call_center.d : call_center.c ../../sr_module.h ../../parser/msg_parser.h \
 ../../parser/../str.h ../../parser/../lump_struct.h \
 ../../parser/.././parser/hf.h ../../parser/.././parser/../str.h \
 ../../parser/../flags.h ../../parser/../ip_addr.h ../../parser/../str.h \
 ../../parser/../dprint.h ../../parser/../pt.h ../../parser/../md5utils.h \
 ../../parser/../qvalue.h ../../parser/../config.h \
 ../../parser/parse_def.h ../../parser/parse_cseq.h \
 ../../parser/parse_content.h ../../parser/parse_param.h \
 ../../parser/msg_parser.h ../../parser/parse_via.h \
 ../../parser/parse_fline.h ../../parser/parse_multipart.h \
 ../../parser/hf.h ../../parser/sdp/sdp.h \
 ../../parser/sdp/../msg_parser.h ../../parser/parse_to.h \
 ../../statistics.h ../../hash_func.h ../../str.h ../../atomic.h \
 ../../mi/mi.h ../../mi/../str.h ../../mi/tree.h ../../mi/attr.h \
 ../../pvar.h ../../usr_avp.h ../../version.h ../../route.h \
 ../../config.h ../../error.h ../../route_struct.h ../../async.h \
 ../../sr_module_deps.h ../../db/db.h ../../db/db_key.h ../../db/../ut.h \
 ../../db/../config.h ../../db/../dprint.h ../../db/../sr_module.h \
 ../../db/../action.h ../../db/../parser/msg_parser.h \
 ../../db/../route_struct.h ../../db/../str.h \
 ../../db/../evi/evi_modules.h ../../db/../evi/../str.h \
 ../../db/../evi/event_interface.h ../../db/../evi/evi_transport.h \
 ../../db/../evi/../mi/mi.h ../../db/../evi/../ip_addr.h \
 ../../db/../evi/../parser/msg_parser.h ../../db/../evi/evi_params.h \
 ../../db/../evi/evi.h ../../db/../evi/../locking.h \
 ../../db/../evi/../lock_ops.h ../../db/../evi/../fastlock.h \
 ../../db/../evi/../lock_alloc.h ../../db/../evi/../mem/mem.h \
 ../../db/../evi/../mem/../config.h ../../db/../evi/../mem/../dprint.h \
 ../../db/../evi/../mem/common.h ../../db/../evi/../mem/f_malloc.h \
 ../../db/../evi/../mem/meminfo.h ../../db/../evi/../mem/../error.h \
 ../../db/../evi/../mem/shm_mem.h ../../db/../evi/../mem/../statistics.h \
 ../../db/../evi/../mem/../lock_ops.h ../../db/../evi/evi_core.h \
 ../../db/../mem/mem.h ../../db/../mem/shm_mem.h \
 ../../db/../mem/../statistics.h ../../db/../mem/../error.h \
 ../../db/db_op.h ../../db/db_val.h ../../db/../str.h ../../db/db_con.h \
 ../../db/db_ps.h ../../db/db_id.h ../../db/db_res.h ../../db/db_cap.h \
 ../../db/db_row.h ../../db/../globals.h ../../db/../ip_addr.h \
 ../../db/../poll_types.h ../../dprint.h ../../error.h ../../timer.h \
 ../../ut.h ../../mod_fix.h ../../locking.h ../../flags.h \
 ../../parser/parse_from.h ../b2b_logic/b2b_load.h \
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
 ../b2b_logic/../b2b_entities/../tm/../../crc.h \
 ../b2b_logic/../b2b_entities/../tm/../../socket_info.h \
 ../b2b_logic/../b2b_entities/../tm/../../dprint.h \
 ../b2b_logic/../b2b_entities/../tm/../../net/trans.h \
 ../b2b_logic/../b2b_entities/../tm/../../net/../ip_addr.h \
 ../b2b_logic/../b2b_entities/../tm/../../net/api_proto.h \
 ../b2b_logic/../b2b_entities/../tm/../../net/api_proto_net.h \
 ../b2b_logic/../b2b_entities/../tm/../../net/tcp_conn_defs.h \
 ../b2b_logic/../b2b_entities/../tm/../../net/../locking.h \
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
 ../b2b_logic/../b2b_entities/b2b_common.h cc_data.h ../../str.h \
 ../../hash_func.h ../../parser/msg_parser.h cc_queue.h cc_db.h
