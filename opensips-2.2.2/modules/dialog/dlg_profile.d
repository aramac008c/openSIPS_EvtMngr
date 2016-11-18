dlg_profile.o dlg_profile.d : dlg_profile.c ../../cachedb/cachedb.h \
 ../../cachedb/../str.h ../../cachedb/../db/db_query.h \
 ../../cachedb/../db/db_key.h ../../cachedb/../db/../ut.h \
 ../../cachedb/../db/../config.h ../../cachedb/../db/../dprint.h \
 ../../cachedb/../db/../pt.h ../../cachedb/../db/../sr_module.h \
 ../../cachedb/../db/../parser/msg_parser.h \
 ../../cachedb/../db/../parser/../str.h \
 ../../cachedb/../db/../parser/../lump_struct.h \
 ../../cachedb/../db/../parser/.././parser/hf.h \
 ../../cachedb/../db/../parser/.././parser/../str.h \
 ../../cachedb/../db/../parser/../flags.h \
 ../../cachedb/../db/../parser/../ip_addr.h \
 ../../cachedb/../db/../parser/../str.h \
 ../../cachedb/../db/../parser/../dprint.h \
 ../../cachedb/../db/../parser/../md5utils.h \
 ../../cachedb/../db/../parser/../qvalue.h \
 ../../cachedb/../db/../parser/../config.h \
 ../../cachedb/../db/../parser/parse_def.h \
 ../../cachedb/../db/../parser/parse_cseq.h \
 ../../cachedb/../db/../parser/parse_content.h \
 ../../cachedb/../db/../parser/parse_param.h \
 ../../cachedb/../db/../parser/msg_parser.h \
 ../../cachedb/../db/../parser/parse_via.h \
 ../../cachedb/../db/../parser/parse_fline.h \
 ../../cachedb/../db/../parser/parse_multipart.h \
 ../../cachedb/../db/../parser/hf.h \
 ../../cachedb/../db/../parser/sdp/sdp.h \
 ../../cachedb/../db/../parser/sdp/../msg_parser.h \
 ../../cachedb/../db/../parser/parse_to.h \
 ../../cachedb/../db/../statistics.h ../../cachedb/../db/../hash_func.h \
 ../../cachedb/../db/../str.h ../../cachedb/../db/../atomic.h \
 ../../cachedb/../db/../mi/mi.h ../../cachedb/../db/../mi/../str.h \
 ../../cachedb/../db/../mi/tree.h ../../cachedb/../db/../mi/attr.h \
 ../../cachedb/../db/../pvar.h ../../cachedb/../db/../usr_avp.h \
 ../../cachedb/../db/../version.h ../../cachedb/../db/../route.h \
 ../../cachedb/../db/../error.h ../../cachedb/../db/../route_struct.h \
 ../../cachedb/../db/../async.h ../../cachedb/../db/../sr_module_deps.h \
 ../../cachedb/../db/../action.h ../../cachedb/../db/../evi/evi_modules.h \
 ../../cachedb/../db/../evi/../str.h \
 ../../cachedb/../db/../evi/event_interface.h \
 ../../cachedb/../db/../evi/evi_transport.h \
 ../../cachedb/../db/../evi/../mi/mi.h \
 ../../cachedb/../db/../evi/../ip_addr.h \
 ../../cachedb/../db/../evi/../parser/msg_parser.h \
 ../../cachedb/../db/../evi/evi_params.h ../../cachedb/../db/../evi/evi.h \
 ../../cachedb/../db/../evi/../locking.h \
 ../../cachedb/../db/../evi/../lock_ops.h \
 ../../cachedb/../db/../evi/../fastlock.h \
 ../../cachedb/../db/../evi/../lock_alloc.h \
 ../../cachedb/../db/../evi/../mem/mem.h \
 ../../cachedb/../db/../evi/../mem/../config.h \
 ../../cachedb/../db/../evi/../mem/../dprint.h \
 ../../cachedb/../db/../evi/../mem/common.h \
 ../../cachedb/../db/../evi/../mem/f_malloc.h \
 ../../cachedb/../db/../evi/../mem/meminfo.h \
 ../../cachedb/../db/../evi/../mem/../error.h \
 ../../cachedb/../db/../evi/../mem/shm_mem.h \
 ../../cachedb/../db/../evi/../mem/../statistics.h \
 ../../cachedb/../db/../evi/../mem/../lock_ops.h \
 ../../cachedb/../db/../evi/evi_core.h ../../cachedb/../db/../mem/mem.h \
 ../../cachedb/../db/../mem/shm_mem.h \
 ../../cachedb/../db/../mem/../statistics.h \
 ../../cachedb/../db/../mem/../error.h ../../cachedb/../db/db_op.h \
 ../../cachedb/../db/db_val.h ../../cachedb/../db/../str.h \
 ../../cachedb/../db/db_con.h ../../cachedb/../db/db_ps.h \
 ../../cachedb/../db/db_id.h ../../cachedb/../db/db_row.h \
 ../../cachedb/../db/db_res.h ../../cachedb/../db/db_cap.h \
 ../../cachedb/cachedb_con.h ../../cachedb/cachedb_pool.h \
 ../../cachedb/cachedb_id.h ../../cachedb/cachedb_cap.h \
 ../../cachedb/cachedb.h ../../cachedb/../dprint.h ../../mem/shm_mem.h \
 ../../mem/../statistics.h ../../mem/../error.h ../../hash_func.h \
 ../../dprint.h ../../ut.h dlg_hash.h ../../locking.h ../../context.h \
 ../../mi/mi.h dlg_timer.h dlg_cb.h ../../parser/msg_parser.h dlg_vals.h \
 ../../pvar.h dlg_profile.h ../../map.h ../../str.h ../../str.h \
 dlg_repl_profile.h ../../bin_interface.h ../../ip_addr.h ../../crc.h \
 ../../socket_info.h ../../dprint.h ../../globals.h ../../poll_types.h \
 ../../net/trans.h ../../net/../ip_addr.h ../../net/api_proto.h \
 ../../net/api_proto_net.h ../../net/tcp_conn_defs.h \
 ../../net/../locking.h ../../ut.h ../../timer.h dlg_req_within.h \
 ../../statistics.h ../tm/tm_load.h ../tm/../../sr_module.h \
 ../tm/t_hooks.h ../tm/uac.h ../tm/../../str.h ../tm/dlg.h \
 ../tm/../../parser/parse_rr.h ../tm/../../parser/msg_parser.h \
 ../tm/../../parser/parse_nameaddr.h ../tm/../../parser/../str.h \
 ../tm/../../parser/parse_param.h ../tm/../../parser/hf.h \
 ../tm/../../parser/msg_parser.h ../tm/t_fwd.h ../tm/../../proxy.h \
 ../tm/../../ip_addr.h ../tm/../../str.h ../tm/../../resolve.h \
 ../tm/../../mem/shm_mem.h ../tm/../../mem/../statistics.h \
 ../tm/../../mem/../error.h ../tm/../../proxy.h ../tm/t_reply.h \
 ../tm/../../tags.h ../tm/../../parser/msg_parser.h ../tm/../../globals.h \
 ../tm/../../crc.h ../tm/../../socket_info.h ../tm/h_table.h \
 ../tm/../../md5utils.h ../tm/../../async.h ../tm/../../usr_avp.h \
 ../tm/config.h ../tm/../../hash_func.h ../tm/../../config.h \
 ../tm/../../mem/shm_mem.h ../tm/lock.h ../tm/../../dprint.h \
 ../tm/../../locking.h ../tm/timer.h ../tm/../../timer.h \
 ../tm/../../rw_locking.h ../tm/../../locking.h ../tm/sip_msg.h \
 ../tm/t_lookup.h ../tm/t_funcs.h ../tm/../../globals.h \
 ../tm/../../msg_translator.h ../tm/../../context.h ../tm/../../forward.h \
 ../tm/../../mem/mem.h ../tm/../../route.h ../tm/../../script_cb.h \
 ../tm/../../sl_cb.h ../tm/../../net/trans.h ../tm/../../mem/mem.h \
 ../tm/../../ip_addr.h ../tm/../../parser/parse_uri.h \
 ../tm/../../parser/../net/trans.h \
 ../tm/../../parser/../parser/msg_parser.h ../tm/ut.h ../tm/../../ut.h \
 ../tm/../../error.h ../tm/t_cancel.h ../tm/t_ctx.h
