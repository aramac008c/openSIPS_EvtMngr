b2b_sca.o b2b_sca.d : b2b_sca.c ../../sr_module.h ../../parser/msg_parser.h \
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
 ../../sr_module_deps.h ../../dprint.h ../../mod_fix.h ../../trim.h \
 ../../db/db.h ../../db/db_key.h ../../db/../ut.h ../../db/../config.h \
 ../../db/../dprint.h ../../db/../sr_module.h ../../db/../action.h \
 ../../db/../parser/msg_parser.h ../../db/../route_struct.h \
 ../../db/../str.h ../../db/../evi/evi_modules.h ../../db/../evi/../str.h \
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
 ../../db/../poll_types.h ../../parser/parse_from.h ../tm/tm_load.h \
 ../tm/../../sr_module.h ../tm/t_hooks.h ../tm/uac.h ../tm/../../str.h \
 ../tm/dlg.h ../tm/../../parser/parse_rr.h \
 ../tm/../../parser/msg_parser.h ../tm/../../parser/parse_nameaddr.h \
 ../tm/../../parser/../str.h ../tm/../../parser/parse_param.h \
 ../tm/../../parser/hf.h ../tm/../../parser/msg_parser.h ../tm/t_fwd.h \
 ../tm/../../proxy.h ../tm/../../ip_addr.h ../tm/../../str.h \
 ../tm/../../resolve.h ../tm/../../mem/shm_mem.h \
 ../tm/../../mem/../statistics.h ../tm/../../mem/../error.h \
 ../tm/../../proxy.h ../tm/t_reply.h ../tm/../../tags.h \
 ../tm/../../parser/msg_parser.h ../tm/../../globals.h ../tm/../../crc.h \
 ../tm/../../socket_info.h ../tm/../../dprint.h ../tm/../../net/trans.h \
 ../tm/../../net/../ip_addr.h ../tm/../../net/api_proto.h \
 ../tm/../../net/api_proto_net.h ../tm/../../net/tcp_conn_defs.h \
 ../tm/../../net/../locking.h ../tm/../../ut.h ../tm/h_table.h \
 ../tm/../../md5utils.h ../tm/../../async.h ../tm/../../usr_avp.h \
 ../tm/config.h ../tm/../../hash_func.h ../tm/../../config.h \
 ../tm/../../mem/shm_mem.h ../tm/lock.h ../tm/../../dprint.h \
 ../tm/../../locking.h ../tm/timer.h ../tm/../../timer.h \
 ../tm/../../rw_locking.h ../tm/../../locking.h ../tm/sip_msg.h \
 ../tm/t_lookup.h ../tm/t_funcs.h ../tm/../../globals.h \
 ../tm/../../msg_translator.h ../tm/../../context.h ../tm/../../forward.h \
 ../tm/../../mem/mem.h ../tm/../../route.h ../tm/../../script_cb.h \
 ../tm/../../sl_cb.h ../tm/../../mem/mem.h ../tm/../../ip_addr.h \
 ../tm/../../parser/parse_uri.h ../tm/../../parser/../net/trans.h \
 ../tm/../../parser/../parser/msg_parser.h ../tm/ut.h ../tm/../../ut.h \
 ../tm/../../error.h ../tm/t_cancel.h ../tm/t_ctx.h ../pua/pua_bind.h \
 ../pua/send_subscribe.h ../pua/../tm/tm_load.h ../pua/../../str.h \
 ../pua/hash.h ../pua/../../lock_ops.h ../pua/../../dprint.h \
 ../pua/../../parser/msg_parser.h ../pua/event_list.h ../pua/uri_list.h \
 ../pua/../../mem/mem.h ../pua/send_publish.h ../pua/pua_callback.h \
 ../pua/../../parser/parse_fline.h ../pua/../pua/hash.h \
 ../b2b_logic/b2b_load.h ../b2b_logic/../../sr_module.h \
 ../b2b_logic/../b2b_entities/b2b_common.h \
 ../b2b_logic/../b2b_entities/dlg.h \
 ../b2b_logic/../b2b_entities/../../str.h \
 ../b2b_logic/../b2b_entities/../../lock_ops.h \
 ../b2b_logic/../b2b_entities/../tm/h_table.h \
 ../b2b_logic/../b2b_entities/../tm/dlg.h \
 ../b2b_logic/../b2b_entities/../dialog/dlg_load.h \
 ../b2b_logic/../b2b_entities/../dialog/dlg_cb.h \
 ../b2b_logic/../b2b_entities/../dialog/../../parser/msg_parser.h \
 ../b2b_logic/../b2b_entities/../dialog/dlg_handlers.h \
 ../b2b_logic/../b2b_entities/../dialog/../../parser/parse_from.h \
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
 ../b2b_logic/../b2b_entities/b2b_common.h sca_records.h ../../usr_avp.h \
 sca_logic.h ../../str.h sca_db_handler.h
