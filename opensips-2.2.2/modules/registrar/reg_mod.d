reg_mod.o reg_mod.d : reg_mod.c ../../sr_module.h ../../parser/msg_parser.h \
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
 ../../sr_module_deps.h ../../timer.h ../../dprint.h ../../error.h \
 ../../socket_info.h ../../ip_addr.h ../../dprint.h ../../globals.h \
 ../../poll_types.h ../../net/trans.h ../../net/../ip_addr.h \
 ../../net/api_proto.h ../../net/api_proto_net.h \
 ../../net/tcp_conn_defs.h ../../net/../locking.h ../../net/../lock_ops.h \
 ../../net/../fastlock.h ../../net/../lock_alloc.h ../../net/../mem/mem.h \
 ../../net/../mem/../config.h ../../net/../mem/../dprint.h \
 ../../net/../mem/common.h ../../net/../mem/f_malloc.h \
 ../../net/../mem/meminfo.h ../../net/../mem/../error.h \
 ../../net/../mem/shm_mem.h ../../net/../mem/../statistics.h \
 ../../net/../mem/../lock_ops.h ../../ut.h ../../sr_module.h \
 ../../action.h ../../evi/evi_modules.h ../../evi/../str.h \
 ../../evi/event_interface.h ../../evi/evi_transport.h \
 ../../evi/../mi/mi.h ../../evi/../ip_addr.h \
 ../../evi/../parser/msg_parser.h ../../evi/evi_params.h ../../evi/evi.h \
 ../../evi/../locking.h ../../evi/evi_core.h ../../mem/mem.h \
 ../../mem/shm_mem.h ../../mem/../statistics.h ../../mem/../error.h \
 ../../pvar.h ../usrloc/ul_mod.h ../usrloc/../../db/db.h \
 ../usrloc/../../db/db_key.h ../usrloc/../../db/../ut.h \
 ../usrloc/../../db/db_op.h ../usrloc/../../db/db_val.h \
 ../usrloc/../../db/../str.h ../usrloc/../../db/db_con.h \
 ../usrloc/../../db/db_ps.h ../usrloc/../../db/db_id.h \
 ../usrloc/../../db/db_res.h ../usrloc/../../db/db_cap.h \
 ../usrloc/../../db/db_row.h ../usrloc/../../db/../globals.h \
 ../usrloc/../../str.h ../signaling/signaling.h \
 ../signaling/../../sr_module.h ../signaling/../../parser/msg_parser.h \
 ../../mod_fix.h save.h ../../parser/msg_parser.h lookup.h reply.h \
 ../usrloc/ucontact.h ../usrloc/../../qvalue.h ../usrloc/../../proxy.h \
 ../usrloc/../../ip_addr.h ../usrloc/../../str.h \
 ../usrloc/../../resolve.h ../usrloc/../../mem/shm_mem.h \
 ../usrloc/../../mem/../statistics.h ../usrloc/../../mem/../error.h \
 ../usrloc/../../proxy.h ../usrloc/../../db/db_insertq.h \
 ../usrloc/../../db/db_ut.h ../usrloc/../../db/db.h \
 ../usrloc/../../db/db_query.h ../usrloc/../../db/../locking.h reg_mod.h \
 ../../qvalue.h ../../usr_avp.h ../usrloc/usrloc.h ../usrloc/dlist.h \
 ../usrloc/udomain.h ../usrloc/../../statistics.h \
 ../usrloc/../../locking.h ../usrloc/urecord.h ../usrloc/hslot.h \
 ../usrloc/../../map.h ../usrloc/ucontact.h ../usrloc/ul_callback.h \
 ../tm/tm_load.h ../tm/../../sr_module.h ../tm/t_hooks.h ../tm/uac.h \
 ../tm/../../str.h ../tm/dlg.h ../tm/../../parser/parse_rr.h \
 ../tm/../../parser/msg_parser.h ../tm/../../parser/parse_nameaddr.h \
 ../tm/../../parser/../str.h ../tm/../../parser/parse_param.h \
 ../tm/../../parser/hf.h ../tm/../../parser/msg_parser.h ../tm/t_fwd.h \
 ../tm/../../proxy.h ../tm/t_reply.h ../tm/../../tags.h \
 ../tm/../../parser/msg_parser.h ../tm/../../globals.h ../tm/../../crc.h \
 ../tm/../../str.h ../tm/../../socket_info.h ../tm/h_table.h \
 ../tm/../../md5utils.h ../tm/../../async.h ../tm/../../usr_avp.h \
 ../tm/config.h ../tm/../../hash_func.h ../tm/../../config.h \
 ../tm/../../mem/shm_mem.h ../tm/../../mem/../statistics.h \
 ../tm/../../mem/../error.h ../tm/lock.h ../tm/../../dprint.h \
 ../tm/../../locking.h ../tm/timer.h ../tm/../../timer.h \
 ../tm/../../rw_locking.h ../tm/../../locking.h ../tm/sip_msg.h \
 ../tm/t_lookup.h ../tm/t_funcs.h ../tm/../../globals.h \
 ../tm/../../msg_translator.h ../tm/../../ip_addr.h ../tm/../../context.h \
 ../tm/../../forward.h ../tm/../../mem/mem.h ../tm/../../route.h \
 ../tm/../../proxy.h ../tm/../../script_cb.h ../tm/../../sl_cb.h \
 ../tm/../../net/trans.h ../tm/../../mem/mem.h ../tm/../../ip_addr.h \
 ../tm/../../parser/parse_uri.h ../tm/../../parser/../net/trans.h \
 ../tm/../../parser/../parser/msg_parser.h ../tm/ut.h ../tm/../../ut.h \
 ../tm/../../error.h ../tm/t_cancel.h ../tm/t_ctx.h ../../data_lump.h \
 ../../lump_struct.h ../../parser/hf.h ../../ip_addr.h ../../ut.h
