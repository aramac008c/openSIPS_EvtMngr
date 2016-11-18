sca_logic.o sca_logic.d : sca_logic.c ../../ut.h ../../config.h ../../dprint.h \
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
 ../../trim.h ../../strcommon.c ../../ut.h ../../strcommon.h ../../md5.h \
 ../../md5global.h ../../crc.h ../../parser/parse_from.h \
 ../../parser/sdp/sdp.h ../../usr_avp.h ../../parser/parse_call_info.h \
 ../pua/pua.h ../pua/../../str.h ../pua/hash.h ../pua/../../lock_ops.h \
 ../pua/../../dprint.h ../pua/../../parser/msg_parser.h \
 ../pua/event_list.h ../pua/uri_list.h ../pua/../../mem/mem.h \
 ../pua/../../db/db.h ../pua/../../db/db_key.h ../pua/../../db/../ut.h \
 ../pua/../../db/db_op.h ../pua/../../db/db_val.h \
 ../pua/../../db/../str.h ../pua/../../db/db_con.h \
 ../pua/../../db/db_ps.h ../pua/../../db/db_id.h ../pua/../../db/db_res.h \
 ../pua/../../db/db_cap.h ../pua/../../db/db_row.h \
 ../pua/../../db/../globals.h ../pua/../../db/../ip_addr.h \
 ../pua/../../db/../str.h ../pua/../../db/../poll_types.h \
 ../pua/pua_bind.h ../pua/send_subscribe.h ../pua/../tm/tm_load.h \
 ../pua/../tm/../../sr_module.h ../pua/../tm/t_hooks.h ../pua/../tm/uac.h \
 ../pua/../tm/../../str.h ../pua/../tm/dlg.h \
 ../pua/../tm/../../parser/parse_rr.h \
 ../pua/../tm/../../parser/msg_parser.h \
 ../pua/../tm/../../parser/parse_nameaddr.h \
 ../pua/../tm/../../parser/../str.h \
 ../pua/../tm/../../parser/parse_param.h ../pua/../tm/../../parser/hf.h \
 ../pua/../tm/../../parser/msg_parser.h ../pua/../tm/t_fwd.h \
 ../pua/../tm/../../proxy.h ../pua/../tm/../../ip_addr.h \
 ../pua/../tm/../../str.h ../pua/../tm/../../resolve.h \
 ../pua/../tm/../../mem/shm_mem.h ../pua/../tm/../../mem/../statistics.h \
 ../pua/../tm/../../mem/../error.h ../pua/../tm/../../proxy.h \
 ../pua/../tm/t_reply.h ../pua/../tm/../../tags.h \
 ../pua/../tm/../../parser/msg_parser.h ../pua/../tm/../../globals.h \
 ../pua/../tm/../../crc.h ../pua/../tm/../../socket_info.h \
 ../pua/../tm/../../dprint.h ../pua/../tm/../../net/trans.h \
 ../pua/../tm/../../net/../ip_addr.h ../pua/../tm/../../net/api_proto.h \
 ../pua/../tm/../../net/api_proto_net.h \
 ../pua/../tm/../../net/tcp_conn_defs.h \
 ../pua/../tm/../../net/../locking.h ../pua/../tm/../../ut.h \
 ../pua/../tm/h_table.h ../pua/../tm/../../md5utils.h \
 ../pua/../tm/../../async.h ../pua/../tm/../../usr_avp.h \
 ../pua/../tm/config.h ../pua/../tm/../../hash_func.h \
 ../pua/../tm/../../config.h ../pua/../tm/../../mem/shm_mem.h \
 ../pua/../tm/lock.h ../pua/../tm/../../dprint.h \
 ../pua/../tm/../../locking.h ../pua/../tm/timer.h \
 ../pua/../tm/../../timer.h ../pua/../tm/../../rw_locking.h \
 ../pua/../tm/../../locking.h ../pua/../tm/sip_msg.h \
 ../pua/../tm/t_lookup.h ../pua/../tm/t_funcs.h \
 ../pua/../tm/../../globals.h ../pua/../tm/../../msg_translator.h \
 ../pua/../tm/../../context.h ../pua/../tm/../../forward.h \
 ../pua/../tm/../../mem/mem.h ../pua/../tm/../../route.h \
 ../pua/../tm/../../script_cb.h ../pua/../tm/../../sl_cb.h \
 ../pua/../tm/../../mem/mem.h ../pua/../tm/../../ip_addr.h \
 ../pua/../tm/../../parser/parse_uri.h \
 ../pua/../tm/../../parser/../net/trans.h \
 ../pua/../tm/../../parser/../parser/msg_parser.h ../pua/../tm/ut.h \
 ../pua/../tm/../../ut.h ../pua/../tm/../../error.h \
 ../pua/../tm/t_cancel.h ../pua/../tm/t_ctx.h ../pua/send_publish.h \
 ../pua/pua_callback.h ../pua/../../parser/parse_fline.h \
 ../pua/../pua/hash.h ../b2b_logic/b2b_load.h \
 ../b2b_logic/../../sr_module.h ../b2b_logic/../b2b_entities/b2b_common.h \
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
 ../b2b_logic/../b2b_entities/b2b_common.h sca_records.h sca_db_handler.h \
 sca_logic.h ../../str.h
