//
// Created by root on 12/3/18.
//

#include "readFile.h"

void my_readFile_main(){

    string NQSLIBOBJS_str = "_nqs_swlock.o a6btoul.o analyzercm.o analyzetcm.o asciierrno.o \\\n"
                            "\tblockdb.o budgetcmd.o bufstderr.o bufstdout.o bytecopy.o \\\n"
                            "\tchkpriv.o \\\n"
                            "\tchkreq.o closedb.o cmdapi.o ctlscript.o daepres.o \\\n"
                            "\tdatachain.o delreq.o destacct.o destdev.o destpath.o destqueue.o \\\n"
                            "\tdqmapd.o e_shoallq.o e_shoqbyd.o e_shoqbyn.o errnototcm.o \\\n"
                            "\testablish.o fetchgrdb.o fetchpwdb.o filecopy.o fmtgidname.o \\\n"
                            "\tfmtmidname.o fmttime.o fmtuidname.o gethdr.o getrreq.o getsreq.o \\\n"
                            "\tgetsockch.o grpnam.o holdreq.o homeacct.o inter.o \\\n"
                            "\tinterread.o interwrite.o isdecstr.o ldparam.o localmid.o \\\n"
                            "\tmachacct.o machhost.o machpath.o machspec.o macnam.o \\\n"
                            "\tmapuser.o mergertcm.o \\\n"
                            "\tmkdefault.o mkreq.o modlim.o modreq.o moveqdesc.o moveqname.o \\\n"
                            "\tmovereq.o movreq.o namjorout.o namrstfile.o namstderr.o \\\n"
                            "\tnamstdout.o nextdb.o nextseqno.o api.o nqsdirs.o \\\n"
                            "\tnqspriv.o nqssleep.o opendata.o opendb.o \\\n"
                            "\topenqacc.o openqord.o pack6name.o parseserv.o \\\n"
                            "\tquereqvlpq.o rcimsgs.o rcmmsgs.o readdb.o readhdr.o readreq.o \\\n"
                            "\treqspec.o request.o rerunreq.o resmreq.o restinfo.o rlsreq.o \\\n"
                            "\trnamrstfile.o rstreq.o scancpulim.o scanprofwa.o scanquolim.o \\\n"
                            "\tscantime.o secgrfir.o seekdb.o seekdbb.o serexit.o setmtime.o \\\n"
                            "\tshoabydsca.o shoallcplx.o shoalldev.o shoalldevd.o shoalldevf.o \\\n"
                            "\tshoalllim.o shoallque.o shoallquer.o shoallrstf.o shobydscdd.o \\\n"
                            "\tshobynamea.o shobynamed.o shobynamef.o shodbydesc.o shodbydscd.o \\\n"
                            "\tshodbydscf.o shodbyname.o shoqbycplx.o shoqbydall.o shoqbydesc.o \\\n"
                            "\tshoqbydscc.o shoqbydscnr.o shoqbydscr.o shoqbyname.o sizedb.o \\\n"
                            "\tsocketio.o spndreq.o srctransact.o \\\n"
                            "\ttcimsgs.o tcmmsgs.o telldb.o tracking.o \\\n"
                            "\ttransact.o usenam.o verifyhdr.o verifyreq.o \\\n"
                            "\twatchlib.o writehdr.o \\\n"
                            "\twritereq.o flkmn.o flockpc.o flockname.o catreq.o altlib.o \\\n"
                            "\treadmacgrp.o license.o qstatxlib.o \\\n"
                            "\tkanjiutil.o kanjicutil.o \\\n"
                            "\tnqsapi.o tcmident.o nicdump.o nqsconnect.o \\\n"
                            "\t_ns_nwlcs.o apicmlib.o ctimezone.o\\\n"
                            "\tproc.o daestat.o portkeeper.o nqslcsfile.o nqslcsgen.o \\";

    string NMAPLIBOBJS_str = "nmapread.o\n"
                             "nmapwrite.o\n"
                             "nmapcommon.o\n"
                             "nqsgethostbyname.o\n"
                             "nmaplocal.o";

    string NQSOBJS_str = "a6btoul.o accessenf.o allodb.o budgetdae.o budgetnet.o \
	bytezero.o freedb.o fsg1limenf.o fsg2limenf.o fsg3limenf.o \
	getreq.o memlimenf.o namstdlog.o nqs_a2s.o nqs_aboque.o \
	nqs_abort.o nqs_boot.o nqs_bsc.o nqs_bsck.o nqs_check.o \
	nqs_chkreq.o nqs_complt.o nqs_delreq.o nqs_delrfs.o nqs_deque.o \
	nqs_disreq.o nqs_dsc.o nqs_enf.o nqs_enfile.o nqs_event.o \
	nqs_failed.o nqs_family.o nqs_fndnnq.o nqs_fndreq.o nqs_hldreq.o \
	nqs_interdae.o nqs_jormai.o nqs_jorout.o nqs_lbbat.o nqs_lbidc.o \
	nqs_lbpq.o nqs_lbupd.o nqs_ldconf.o nqs_liserv.o nqs_mai.o \
	nqs_main.o nqs_modlim.o nqs_modpri.o nqs_modreq.o nqs_move.o \
	nqs_net.o nqs_netinf.o nqs_nsq.o nqs_pip.o nqs_poll.o nqs_psc.o \
	nqs_quereq.o nqs_rbuild.o nqs_reqcom.o nqs_reqexi.o nqs_reqser.o \
	nqs_rerun.o nqs_resume.o nqs_rlsreq.o nqs_rstdel.o nqs_rstreq.o \
	nqs_spawn.o nqs_stgset.o nqs_suspnd.o nqs_tid.o nqs_tracking.o \
	nqs_transpipe.o nqs_udb.o nqs_upa.o nqs_upc.o nqs_upd.o nqs_upf.o \
	nqs_upm.o nqs_upp.o nqs_upq.o nqs_uprl.o nqs_ups.o nqs_upv.o \
	nqs_vtimer.o nqs_wakdes.o nqs_wakreq.o nqs_watch.o nqs_migration.o \
	quelimenf.o quolimok.o rewritedb.o runlimenf.o nqs_netcl.o \
	writeacct.o xmulimenf.o nqsconf.o nqs_flockman.o nqs_license.o \
	estblshout.o nqs_requeue.o nqs_clu.o ";

    string SHPOBJ_str = "crefenv.o delfenv.o putfenv.o print.o getfenv.o getfall.o b_print.o b_fenv.o unsetfenv.o flock_msg_lib.o flrep.o flsv_chk.o report_msg_lib.o print_msg_lib.o serchstr.o";


    string CSTOBJS_str = " qprompt \n"
                         " qstatp\n"
                         " qalter \n"
                         " qchk qdel \n"
                         " qdev \n"
                         " qhold \n"
                         " qlimit \n"
                         " qmsg \n"
                         " qpr \n"
                         " qrerun \n"
                         " qmove \n"
                         " qrls\n"
                         " qrsm \n"
                         " qrst \n"
                         " qspnd \n"
                         " qstat \n"
                         " qstata \n"
                         " qstatc \n"
                         " qstatck \n"
                         " qstatd \n"
                         " qstatf \n"
                         " qstatq\n"
                         " qstatr \n"
                         " qstatx \n"
                         " qsub \n"
                         " qwait \n"
                         " qwatch \n"
                         " qcat\n"
                         " qmgr \n"
                         " nmapmgr \n"
                         " genevent \n"
                         " jnwwatch";

    char* CSTOBJS_array = format_input_str_with_array(CSTOBJS_str);
    cout << CSTOBJS_array << endl;

    split_input_array_with_stock(CSTOBJS_array);

}

char* format_input_str_with_array(string input_str){

    char * string_array = new char [input_str.length()+1];
    char * output_array = new char [input_str.length()+1];

    strcpy(string_array, input_str.c_str());
    cout << string_array << endl;

    cout << "length : " << sizeof(string_array) / sizeof(char) << endl;

    int pt = 0;
    int space_count = 0;
    for(int i = 0 ; i < 2000; i ++){
        if((string_array[i] == ' ' && string_array[i-1] != ' ' && string_array[i+1] != ' ') || string_array[i+1] == '\\'){
            output_array[pt] = '\t';
            pt ++;
            space_count ++;
        }else if(string_array[i] == '\\' || string_array[i] == ' ' || string_array[i] == '\n' || string_array[i] == '\t'){
            continue;
        }else{
            output_array[pt] = string_array[i];
            pt ++;
        }

        //make 5 files a line
//        if(space_count == 5){
//            output_array[pt] = '\n';
//            pt ++;
//            space_count = 0;
//        }
    }

   // cout << output_array << endl;
    return output_array;
}

char * split_input_array_with_stock(char * input){

    cout << "split_input_array_with_stock" << endl;

    //the num of the file name
    const int FILE_COUNT = 32;

    const char *d = "\t";
    char * p = strtok(input, d);
    char ** ps= new char*[FILE_COUNT];

    for(int i = 0; i < FILE_COUNT; i ++){
        ps[i] = new char[20];
    }

    //seperate the arrays of char to arrays of the file name into ps
    int i = 0;
    while (p){
        //cout << p << endl;
        ps[i] = p;
        i ++;
        p = strtok(NULL, d);
    }

    //output
    cout << "count: " << i << endl;
    for(int i = 0; i < FILE_COUNT; i ++){
        cout << i+1 << " " << ps[i] << endl;
    }

    //sort the file of name by lexicographical order.
    for(int i = 0; i < FILE_COUNT; i ++){
        for(int j = i + 1; j < FILE_COUNT; j ++){
            if(strcmp(ps[i],ps[j]) > 0){
                //change the value of two array
                char * temp = ps[i];
                ps[i] = ps[j];
                ps[j] = temp;
            }
        }
    }

    cout << "lexicographical order : " << endl;
    for(int i = 0; i < FILE_COUNT; i ++){
        cout << i+1 << " " << ps[i] << endl;
    }

//    for(int i = 0; i < FILE_COUNT; i ++){
//        delete  ps[i];
//    }
//    delete [] ps;
}

void format_input_str_with_string(string input){

}