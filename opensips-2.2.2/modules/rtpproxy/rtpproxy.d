rtpproxy.o rtpproxy.d : rtpproxy.c ../../dprint.h ../../pt.h ../../data_lump.h \
 ../../lump_struct.h ../.././parser/hf.h ../.././parser/../str.h \
 ../../parser/msg_parser.h ../../parser/../str.h \
 ../../parser/../lump_struct.h ../../parser/../flags.h \
 ../../parser/../ip_addr.h ../../parser/../str.h ../../parser/../dprint.h \
 ../../parser/../md5utils.h ../../parser/../qvalue.h \
 ../../parser/../config.h ../../parser/parse_def.h \
 ../../parser/parse_cseq.h ../../parser/parse_content.h \
 ../../parser/parse_param.h ../../parser/msg_parser.h \
 ../../parser/parse_via.h ../../parser/parse_fline.h \
 ../../parser/parse_multipart.h ../../parser/hf.h ../../parser/sdp/sdp.h \
 ../../parser/sdp/../msg_parser.h ../../parser/parse_to.h \
 ../../parser/hf.h ../../data_lump_rpl.h ../../error.h ../../str.h \
 ../../forward.h ../../globals.h ../../ip_addr.h ../../poll_types.h \
 ../../mem/mem.h ../../mem/../config.h ../../mem/../dprint.h \
 ../../mem/common.h ../../mem/f_malloc.h ../../mem/meminfo.h \
 ../../mem/../error.h ../../route.h ../../pvar.h ../../usr_avp.h \
 ../../config.h ../../error.h ../../route_struct.h ../../proxy.h \
 ../../resolve.h ../../mem/shm_mem.h ../../mem/../statistics.h \
 ../../mem/../hash_func.h ../../mem/../str.h ../../mem/../atomic.h \
 ../../mem/../lock_ops.h ../../mem/../fastlock.h ../../script_cb.h \
 ../../sl_cb.h ../../net/trans.h ../../net/../ip_addr.h \
 ../../net/api_proto.h ../../net/api_proto_net.h \
 ../../net/tcp_conn_defs.h ../../net/../locking.h ../../net/../lock_ops.h \
 ../../net/../lock_alloc.h ../../net/../mem/mem.h \
 ../../net/../mem/shm_mem.h ../../net/../mem/../statistics.h \
 ../../net/../mem/../error.h ../../mem/mem.h ../../mod_fix.h \
 ../../timer.h ../../parser/parse_from.h ../../parser/parse_to.h \
 ../../parser/parse_uri.h ../../parser/../net/trans.h \
 ../../parser/../parser/msg_parser.h ../../parser/parser_f.h \
 ../../parser/sdp/sdp_helpr_funcs.h ../../parser/sdp/../../str.h \
 ../../db/db.h ../../db/db_key.h ../../db/../ut.h ../../db/../config.h \
 ../../db/../dprint.h ../../db/../sr_module.h \
 ../../db/../parser/msg_parser.h ../../db/../statistics.h \
 ../../db/../mi/mi.h ../../db/../mi/../str.h ../../db/../mi/tree.h \
 ../../db/../mi/attr.h ../../db/../pvar.h ../../db/../version.h \
 ../../db/../route.h ../../db/../async.h ../../db/../route_struct.h \
 ../../db/../sr_module_deps.h ../../db/../str.h ../../db/../action.h \
 ../../db/../evi/evi_modules.h ../../db/../evi/../str.h \
 ../../db/../evi/event_interface.h ../../db/../evi/evi_transport.h \
 ../../db/../evi/../mi/mi.h ../../db/../evi/../ip_addr.h \
 ../../db/../evi/../parser/msg_parser.h ../../db/../evi/evi_params.h \
 ../../db/../evi/evi.h ../../db/../evi/../locking.h \
 ../../db/../evi/evi_core.h ../../db/../mem/mem.h \
 ../../db/../mem/shm_mem.h ../../db/../mem/../statistics.h \
 ../../db/../mem/../error.h ../../db/db_op.h ../../db/db_val.h \
 ../../db/../str.h ../../db/db_con.h ../../db/db_ps.h ../../db/db_id.h \
 ../../db/db_res.h ../../db/db_cap.h ../../db/db_row.h \
 ../../db/../globals.h ../../parser/parse_content.h \
 ../../parser/msg_parser.h ../../parser/parse_multipart.h \
 ../../msg_callbacks.h ../../evi/evi_modules.h ../dialog/dlg_load.h \
 ../dialog/dlg_cb.h ../dialog/../../parser/msg_parser.h \
 ../dialog/dlg_handlers.h ../dialog/../../parser/parse_from.h \
 ../dialog/../../trim.h ../dialog/../../str.h ../dialog/../../str.h \
 ../dialog/../../pvar.h ../dialog/../../ut.h ../dialog/../tm/t_hooks.h \
 ../dialog/dlg_timer.h ../dialog/../../locking.h ../dialog/dlg_profile.h \
 ../dialog/../../map.h ../dialog/dlg_vals.h ../dialog/dlg_hash.h \
 ../dialog/../../context.h ../dialog/../../mi/mi.h \
 ../dialog/../../sr_module.h ../tm/tm_load.h ../tm/../../sr_module.h \
 ../tm/t_hooks.h ../tm/uac.h ../tm/../../str.h ../tm/dlg.h \
 ../tm/../../parser/parse_rr.h ../tm/../../parser/msg_parser.h \
 ../tm/../../parser/parse_nameaddr.h ../tm/../../parser/../str.h \
 ../tm/../../parser/parse_param.h ../tm/../../parser/hf.h \
 ../tm/../../parser/msg_parser.h ../tm/t_fwd.h ../tm/../../proxy.h \
 ../tm/t_reply.h ../tm/../../tags.h ../tm/../../parser/msg_parser.h \
 ../tm/../../globals.h ../tm/../../crc.h ../tm/../../str.h \
 ../tm/../../socket_info.h ../tm/../../ip_addr.h ../tm/../../dprint.h \
 ../tm/../../net/trans.h ../tm/../../ut.h ../tm/h_table.h \
 ../tm/../../md5utils.h ../tm/../../async.h ../tm/../../usr_avp.h \
 ../tm/config.h ../tm/../../hash_func.h ../tm/../../config.h \
 ../tm/../../mem/shm_mem.h ../tm/../../mem/../statistics.h \
 ../tm/../../mem/../error.h ../tm/lock.h ../tm/../../dprint.h \
 ../tm/../../locking.h ../tm/timer.h ../tm/../../timer.h \
 ../tm/../../rw_locking.h ../tm/../../locking.h ../tm/sip_msg.h \
 ../tm/t_lookup.h ../tm/t_funcs.h ../tm/../../globals.h \
 ../tm/../../msg_translator.h ../tm/../../context.h ../tm/../../forward.h \
 ../tm/../../mem/mem.h ../tm/../../ip_addr.h \
 ../tm/../../parser/parse_uri.h ../tm/ut.h ../tm/../../ut.h \
 ../tm/../../error.h ../tm/t_cancel.h ../tm/t_ctx.h rtpproxy.h \
 ../../str.h ../../pvar.h ../../rw_locking.h nhelpr_funcs.h \
 ../../parser/contact/contact.h ../../parser/contact/../../str.h \
 ../../parser/contact/../parse_param.h rtpproxy_stream.h \
 rtpproxy_callbacks.h
