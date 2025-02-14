/*!
 * @file syscall_numbers.h
 *
 * @brief Symbolic names for syscall numbers. We make this header c++ only
 * so we can use namespaces. This results in shorter names in the code and
 * avoids polluting the preprocessor namespace.
 */
#pragma once
#if !defined(__cplusplus)
#else
namespace syscalls2 {
	// linux:arm
	namespace linux {
		namespace arm {
			
			const int sys_restart_syscall = 0;
			
			
			const int sys_exit = 1;
			
			
			const int sys_fork = 2;
			
			
			const int sys_read = 3;
			
			
			const int sys_write = 4;
			
			
			const int sys_open = 5;
			
			
			const int sys_close = 6;
			
			
			const int sys_creat = 8;
			
			
			const int sys_link = 9;
			
			
			const int sys_unlink = 10;
			
			
			const int sys_execve = 11;
			
			
			const int sys_chdir = 12;
			
			
			const int sys_time = 13;
			
			
			const int sys_mknod = 14;
			
			
			const int sys_chmod = 15;
			
			
			const int sys_lchown16 = 16;
			
			
			const int sys_lseek = 19;
			
			
			const int sys_getpid = 20;
			
			
			const int sys_mount = 21;
			
			
			const int sys_setuid16 = 23;
			
			
			const int sys_getuid16 = 24;
			
			
			const int sys_stime = 25;
			
			
			const int sys_ptrace = 26;
			
			
			const int sys_alarm = 27;
			
			
			const int sys_pause = 29;
			
			
			const int sys_utime = 30;
			
			
			const int sys_access = 33;
			
			
			const int sys_nice = 34;
			
			
			const int sys_sync = 36;
			
			
			const int sys_kill = 37;
			
			
			const int sys_rename = 38;
			
			
			const int sys_mkdir = 39;
			
			
			const int sys_rmdir = 40;
			
			
			const int sys_dup = 41;
			
			
			const int sys_pipe = 42;
			
			
			const int sys_times = 43;
			
			
			const int sys_brk = 45;
			
			
			const int sys_setgid16 = 46;
			
			
			const int sys_getgid16 = 47;
			
			
			const int sys_geteuid16 = 49;
			
			
			const int sys_getegid16 = 50;
			
			
			const int sys_acct = 51;
			
			
			const int sys_umount = 52;
			
			
			const int sys_ioctl = 54;
			
			
			const int sys_fcntl = 55;
			
			
			const int sys_setpgid = 57;
			
			
			const int sys_umask = 60;
			
			
			const int sys_chroot = 61;
			
			
			const int sys_ustat = 62;
			
			
			const int sys_dup2 = 63;
			
			
			const int sys_getppid = 64;
			
			
			const int sys_getpgrp = 65;
			
			
			const int sys_setsid = 66;
			
			
			const int sys_sigaction = 67;
			
			
			const int sys_setreuid16 = 70;
			
			
			const int sys_setregid16 = 71;
			
			
			const int sys_sigsuspend = 72;
			
			
			const int sys_sigpending = 73;
			
			
			const int sys_sethostname = 74;
			
			
			const int sys_setrlimit = 75;
			
			
			const int sys_getrusage = 77;
			
			
			const int sys_gettimeofday = 78;
			
			
			const int sys_settimeofday = 79;
			
			
			const int sys_getgroups16 = 80;
			
			
			const int sys_setgroups16 = 81;
			
			
			const int sys_symlink = 83;
			
			
			const int sys_readlink = 85;
			
			
			const int sys_uselib = 86;
			
			
			const int sys_swapon = 87;
			
			
			const int sys_reboot = 88;
			
			
			const int sys_munmap = 91;
			
			
			const int sys_truncate = 92;
			
			
			const int sys_ftruncate = 93;
			
			
			const int sys_fchmod = 94;
			
			
			const int sys_fchown16 = 95;
			
			
			const int sys_getpriority = 96;
			
			
			const int sys_setpriority = 97;
			
			
			const int sys_statfs = 99;
			
			
			const int sys_fstatfs = 100;
			
			
			const int sys_socketcall = 102;
			
			
			const int sys_syslog = 103;
			
			
			const int sys_setitimer = 104;
			
			
			const int sys_getitimer = 105;
			
			
			const int sys_newstat = 106;
			
			
			const int sys_newlstat = 107;
			
			
			const int sys_newfstat = 108;
			
			
			const int sys_vhangup = 111;
			
			
			const int sys_wait4 = 114;
			
			
			const int sys_swapoff = 115;
			
			
			const int sys_sysinfo = 116;
			
			
			const int sys_ipc = 117;
			
			
			const int sys_fsync = 118;
			
			
			const int sys_sigreturn = 119;
			
			
			const int sys_clone = 120;
			
			
			const int sys_setdomainname = 121;
			
			
			const int sys_newuname = 122;
			
			
			const int sys_adjtimex = 124;
			
			
			const int sys_mprotect = 125;
			
			
			const int sys_sigprocmask = 126;
			
			
			const int sys_init_module = 128;
			
			
			const int sys_delete_module = 129;
			
			
			const int sys_quotactl = 131;
			
			
			const int sys_getpgid = 132;
			
			
			const int sys_fchdir = 133;
			
			
			const int sys_bdflush = 134;
			
			
			const int sys_sysfs = 135;
			
			
			const int sys_personality = 136;
			
			
			const int sys_setfsuid16 = 138;
			
			
			const int sys_setfsgid16 = 139;
			
			
			const int sys_llseek = 140;
			
			
			const int sys_getdents = 141;
			
			
			const int sys_select = 142;
			
			
			const int sys_flock = 143;
			
			
			const int sys_msync = 144;
			
			
			const int sys_readv = 145;
			
			
			const int sys_writev = 146;
			
			
			const int sys_getsid = 147;
			
			
			const int sys_fdatasync = 148;
			
			
			const int sys_sysctl = 149;
			
			
			const int sys_mlock = 150;
			
			
			const int sys_munlock = 151;
			
			
			const int sys_mlockall = 152;
			
			
			const int sys_munlockall = 153;
			
			
			const int sys_sched_setparam = 154;
			
			
			const int sys_sched_getparam = 155;
			
			
			const int sys_sched_setscheduler = 156;
			
			
			const int sys_sched_getscheduler = 157;
			
			
			const int sys_sched_yield = 158;
			
			
			const int sys_sched_get_priority_max = 159;
			
			
			const int sys_sched_get_priority_min = 160;
			
			
			const int sys_sched_rr_get_interval = 161;
			
			
			const int sys_nanosleep = 162;
			
			
			const int sys_mremap = 163;
			
			
			const int sys_setresuid16 = 164;
			
			
			const int sys_getresuid16 = 165;
			
			
			const int sys_poll = 168;
			
			
			const int sys_setresgid16 = 170;
			
			
			const int sys_getresgid16 = 171;
			
			
			const int sys_prctl = 172;
			
			
			const int sys_rt_sigreturn = 173;
			
			
			const int sys_rt_sigaction = 174;
			
			
			const int sys_rt_sigprocmask = 175;
			
			
			const int sys_rt_sigpending = 176;
			
			
			const int sys_rt_sigtimedwait = 177;
			
			
			const int sys_rt_sigqueueinfo = 178;
			
			
			const int sys_rt_sigsuspend = 179;
			
			
			const int sys_pread64 = 180;
			
			
			const int sys_pwrite64 = 181;
			
			
			const int sys_chown16 = 182;
			
			
			const int sys_getcwd = 183;
			
			
			const int sys_capget = 184;
			
			
			const int sys_capset = 185;
			
			
			const int sys_sigaltstack = 186;
			
			
			const int sys_sendfile = 187;
			
			
			const int sys_vfork = 190;
			
			
			const int sys_getrlimit = 191;
			
			
			const int do_mmap2 = 192;
			
			
			const int sys_truncate64 = 193;
			
			
			const int sys_ftruncate64 = 194;
			
			
			const int sys_stat64 = 195;
			
			
			const int sys_lstat64 = 196;
			
			
			const int sys_fstat64 = 197;
			
			
			const int sys_lchown = 198;
			
			
			const int sys_getuid = 199;
			
			
			const int sys_getgid = 200;
			
			
			const int sys_geteuid = 201;
			
			
			const int sys_getegid = 202;
			
			
			const int sys_setreuid = 203;
			
			
			const int sys_setregid = 204;
			
			
			const int sys_getgroups = 205;
			
			
			const int sys_setgroups = 206;
			
			
			const int sys_fchown = 207;
			
			
			const int sys_setresuid = 208;
			
			
			const int sys_getresuid = 209;
			
			
			const int sys_setresgid = 210;
			
			
			const int sys_getresgid = 211;
			
			
			const int sys_chown = 212;
			
			
			const int sys_setuid = 213;
			
			
			const int sys_setgid = 214;
			
			
			const int sys_setfsuid = 215;
			
			
			const int sys_setfsgid = 216;
			
			
			const int sys_getdents64 = 217;
			
			
			const int sys_pivot_root = 218;
			
			
			const int sys_mincore = 219;
			
			
			const int sys_madvise = 220;
			
			
			const int sys_fcntl64 = 221;
			
			
			const int sys_gettid = 224;
			
			
			const int sys_readahead = 225;
			
			
			const int sys_setxattr = 226;
			
			
			const int sys_lsetxattr = 227;
			
			
			const int sys_fsetxattr = 228;
			
			
			const int sys_getxattr = 229;
			
			
			const int sys_lgetxattr = 230;
			
			
			const int sys_fgetxattr = 231;
			
			
			const int sys_listxattr = 232;
			
			
			const int sys_llistxattr = 233;
			
			
			const int sys_flistxattr = 234;
			
			
			const int sys_removexattr = 235;
			
			
			const int sys_lremovexattr = 236;
			
			
			const int sys_fremovexattr = 237;
			
			
			const int sys_tkill = 238;
			
			
			const int sys_sendfile64 = 239;
			
			
			const int sys_futex = 240;
			
			
			const int sys_sched_setaffinity = 241;
			
			
			const int sys_sched_getaffinity = 242;
			
			
			const int sys_io_setup = 243;
			
			
			const int sys_io_destroy = 244;
			
			
			const int sys_io_getevents = 245;
			
			
			const int sys_io_submit = 246;
			
			
			const int sys_io_cancel = 247;
			
			
			const int sys_exit_group = 248;
			
			
			const int sys_lookup_dcookie = 249;
			
			
			const int sys_epoll_create = 250;
			
			
			const int sys_epoll_ctl = 251;
			
			
			const int sys_epoll_wait = 252;
			
			
			const int sys_remap_file_pages = 253;
			
			
			const int sys_set_tid_address = 256;
			
			
			const int sys_timer_create = 257;
			
			
			const int sys_timer_settime = 258;
			
			
			const int sys_timer_gettime = 259;
			
			
			const int sys_timer_getoverrun = 260;
			
			
			const int sys_timer_delete = 261;
			
			
			const int sys_clock_settime = 262;
			
			
			const int sys_clock_gettime = 263;
			
			
			const int sys_clock_getres = 264;
			
			
			const int sys_clock_nanosleep = 265;
			
			
			const int sys_statfs64 = 266;
			
			
			const int sys_fstatfs64 = 267;
			
			
			const int sys_tgkill = 268;
			
			
			const int sys_utimes = 269;
			
			
			const int sys_arm_fadvise64_64 = 270;
			
			
			const int sys_pciconfig_iobase = 271;
			
			
			const int sys_pciconfig_read = 272;
			
			
			const int sys_pciconfig_write = 273;
			
			
			const int sys_mq_open = 274;
			
			
			const int sys_mq_unlink = 275;
			
			
			const int sys_mq_timedsend = 276;
			
			
			const int sys_mq_timedreceive = 277;
			
			
			const int sys_mq_notify = 278;
			
			
			const int sys_mq_getsetattr = 279;
			
			
			const int sys_waitid = 280;
			
			
			const int sys_socket = 281;
			
			
			const int sys_bind = 282;
			
			
			const int sys_connect = 283;
			
			
			const int sys_listen = 284;
			
			
			const int sys_accept = 285;
			
			
			const int sys_getsockname = 286;
			
			
			const int sys_getpeername = 287;
			
			
			const int sys_socketpair = 288;
			
			
			const int sys_send = 289;
			
			
			const int sys_sendto = 290;
			
			
			const int sys_recv = 291;
			
			
			const int sys_recvfrom = 292;
			
			
			const int sys_shutdown = 293;
			
			
			const int sys_setsockopt = 294;
			
			
			const int sys_getsockopt = 295;
			
			
			const int sys_sendmsg = 296;
			
			
			const int sys_recvmsg = 297;
			
			
			const int sys_semop = 298;
			
			
			const int sys_semget = 299;
			
			
			const int sys_semctl = 300;
			
			
			const int sys_msgsnd = 301;
			
			
			const int sys_msgrcv = 302;
			
			
			const int sys_msgget = 303;
			
			
			const int sys_msgctl = 304;
			
			
			const int sys_shmat = 305;
			
			
			const int sys_shmdt = 306;
			
			
			const int sys_shmget = 307;
			
			
			const int sys_shmctl = 308;
			
			
			const int sys_add_key = 309;
			
			
			const int sys_request_key = 310;
			
			
			const int sys_keyctl = 311;
			
			
			const int sys_semtimedop = 312;
			
			
			const int sys_ioprio_set = 314;
			
			
			const int sys_ioprio_get = 315;
			
			
			const int sys_inotify_init = 316;
			
			
			const int sys_inotify_add_watch = 317;
			
			
			const int sys_inotify_rm_watch = 318;
			
			
			const int sys_mbind = 319;
			
			
			const int sys_get_mempolicy = 320;
			
			
			const int sys_set_mempolicy = 321;
			
			
			const int sys_openat = 322;
			
			
			const int sys_mkdirat = 323;
			
			
			const int sys_mknodat = 324;
			
			
			const int sys_fchownat = 325;
			
			
			const int sys_futimesat = 326;
			
			
			const int sys_fstatat64 = 327;
			
			
			const int sys_unlinkat = 328;
			
			
			const int sys_renameat = 329;
			
			
			const int sys_linkat = 330;
			
			
			const int sys_symlinkat = 331;
			
			
			const int sys_readlinkat = 332;
			
			
			const int sys_fchmodat = 333;
			
			
			const int sys_faccessat = 334;
			
			
			const int sys_pselect6 = 335;
			
			
			const int sys_ppoll = 336;
			
			
			const int sys_unshare = 337;
			
			
			const int sys_set_robust_list = 338;
			
			
			const int sys_get_robust_list = 339;
			
			
			const int sys_splice = 340;
			
			
			const int sys_sync_file_range2 = 341;
			
			
			const int sys_tee = 342;
			
			
			const int sys_vmsplice = 343;
			
			
			const int sys_move_pages = 344;
			
			
			const int sys_getcpu = 345;
			
			
			const int sys_epoll_pwait = 346;
			
			
			const int sys_kexec_load = 347;
			
			
			const int sys_utimensat = 348;
			
			
			const int sys_signalfd = 349;
			
			
			const int sys_timerfd_create = 350;
			
			
			const int sys_eventfd = 351;
			
			
			const int sys_fallocate = 352;
			
			
			const int sys_timerfd_settime = 353;
			
			
			const int sys_timerfd_gettime = 354;
			
			
			const int sys_signalfd4 = 355;
			
			
			const int sys_eventfd2 = 356;
			
			
			const int sys_epoll_create1 = 357;
			
			
			const int sys_dup3 = 358;
			
			
			const int sys_pipe2 = 359;
			
			
			const int sys_inotify_init1 = 360;
			
			
			const int sys_preadv = 361;
			
			
			const int sys_pwritev = 362;
			
			
			const int sys_rt_tgsigqueueinfo = 363;
			
			
			const int sys_perf_event_open = 364;
			
			
			const int sys_recvmmsg = 365;
			
			
			const int sys_accept4 = 366;
			
			
			const int sys_fanotify_init = 367;
			
			
			const int sys_fanotify_mark = 368;
			
			
			const int sys_prlimit64 = 369;
			
			
			const int sys_name_to_handle_at = 370;
			
			
			const int sys_open_by_handle_at = 371;
			
			
			const int sys_clock_adjtime = 372;
			
			
			const int sys_syncfs = 373;
			
			
			const int sys_sendmmsg = 374;
			
			
			const int sys_setns = 375;
			
			
			const int sys_process_vm_readv = 376;
			
			
			const int sys_process_vm_writev = 377;
			
			
			const int sys_kcmp = 378;
			
			
			const int sys_finit_module = 379;
			
			
			const int sys_sched_setattr = 380;
			
			
			const int sys_sched_getattr = 381;
			
			
			const int sys_renameat2 = 382;
			
			
			const int sys_seccomp = 383;
			
			
			const int sys_getrandom = 384;
			
			
			const int sys_memfd_create = 385;
			
			
			const int sys_bpf = 386;
			
			
			const int sys_execveat = 387;
			
			
			const int sys_userfaultfd = 388;
			
			
			const int sys_membarrier = 389;
			
			
			const int sys_mlock2 = 390;
			
			
			const int ARM_breakpoint = 983041;
			
			
			const int ARM_cacheflush = 983042;
			
			
			const int ARM_user26_mode = 983043;
			
			
			const int ARM_usr32_mode = 983044;
			
			
			const int ARM_set_tls = 983045;
			
		}
	}
	// linux:arm64
	namespace linux {
		namespace arm64 {
			
			const int sys_io_setup = 0;
			
			
			const int sys_io_destroy = 1;
			
			
			const int sys_io_submit = 2;
			
			
			const int sys_io_cancel = 3;
			
			
			const int sys_io_getevents = 4;
			
			
			const int sys_setxattr = 5;
			
			
			const int sys_lsetxattr = 6;
			
			
			const int sys_fsetxattr = 7;
			
			
			const int sys_getxattr = 8;
			
			
			const int sys_lgetxattr = 9;
			
			
			const int sys_fgetxattr = 10;
			
			
			const int sys_listxattr = 11;
			
			
			const int sys_llistxattr = 12;
			
			
			const int sys_flistxattr = 13;
			
			
			const int sys_removexattr = 14;
			
			
			const int sys_lremovexattr = 15;
			
			
			const int sys_fremovexattr = 16;
			
			
			const int sys_getcwd = 17;
			
			
			const int sys_lookup_dcookie = 18;
			
			
			const int sys_eventfd2 = 19;
			
			
			const int sys_epoll_create1 = 20;
			
			
			const int sys_epoll_ctl = 21;
			
			
			const int sys_epoll_pwait = 22;
			
			
			const int sys_dup = 23;
			
			
			const int sys_dup3 = 24;
			
			
			const int sys_fcntl = 25;
			
			
			const int sys_inotify_init1 = 26;
			
			
			const int sys_inotify_add_watch = 27;
			
			
			const int sys_inotify_rm_watch = 28;
			
			
			const int sys_ioctl = 29;
			
			
			const int sys_ioprio_set = 30;
			
			
			const int sys_ioprio_get = 31;
			
			
			const int sys_flock = 32;
			
			
			const int sys_mknodat = 33;
			
			
			const int sys_mkdirat = 34;
			
			
			const int sys_unlinkat = 35;
			
			
			const int sys_symlinkat = 36;
			
			
			const int sys_linkat = 37;
			
			
			const int sys_renameat = 38;
			
			
			const int sys_umount2 = 39;
			
			
			const int sys_mount = 40;
			
			
			const int sys_pivot_root = 41;
			
			
			const int sys_nfsservctl = 42;
			
			
			const int sys_statfs = 43;
			
			
			const int sys_fstatfs = 44;
			
			
			const int sys_truncate = 45;
			
			
			const int sys_ftruncate = 46;
			
			
			const int sys_fallocate = 47;
			
			
			const int sys_faccessat = 48;
			
			
			const int sys_chdir = 49;
			
			
			const int sys_fchdir = 50;
			
			
			const int sys_chroot = 51;
			
			
			const int sys_fchmod = 52;
			
			
			const int sys_fchmodat = 53;
			
			
			const int sys_fchownat = 54;
			
			
			const int sys_fchown = 55;
			
			
			const int sys_openat = 56;
			
			
			const int sys_close = 57;
			
			
			const int sys_vhangup = 58;
			
			
			const int sys_pipe2 = 59;
			
			
			const int sys_quotactl = 60;
			
			
			const int sys_getdents64 = 61;
			
			
			const int sys_lseek = 62;
			
			
			const int sys_read = 63;
			
			
			const int sys_write = 64;
			
			
			const int sys_readv = 65;
			
			
			const int sys_writev = 66;
			
			
			const int sys_pread64 = 67;
			
			
			const int sys_pwrite64 = 68;
			
			
			const int sys_preadv = 69;
			
			
			const int sys_pwritev = 70;
			
			
			const int sys_sendfile = 71;
			
			
			const int sys_pselect6 = 72;
			
			
			const int sys_ppoll = 73;
			
			
			const int sys_signalfd4 = 74;
			
			
			const int sys_vmsplice = 75;
			
			
			const int sys_splice = 76;
			
			
			const int sys_tee = 77;
			
			
			const int sys_readlinkat = 78;
			
			
			const int sys_newfstatat = 79;
			
			
			const int sys_fstat = 80;
			
			
			const int sys_sync = 81;
			
			
			const int sys_fsync = 82;
			
			
			const int sys_fdatasync = 83;
			
			
			const int sys_sync_file_range = 84;
			
			
			const int sys_timerfd_create = 85;
			
			
			const int sys_timerfd_settime = 86;
			
			
			const int sys_timerfd_gettime = 87;
			
			
			const int sys_utimensat = 88;
			
			
			const int sys_acct = 89;
			
			
			const int sys_capget = 90;
			
			
			const int sys_capset = 91;
			
			
			const int sys_personality = 92;
			
			
			const int sys_exit = 93;
			
			
			const int sys_exit_group = 94;
			
			
			const int sys_waitid = 95;
			
			
			const int sys_set_tid_address = 96;
			
			
			const int sys_unshare = 97;
			
			
			const int sys_futex = 98;
			
			
			const int sys_set_robust_list = 99;
			
			
			const int sys_get_robust_list = 100;
			
			
			const int sys_nanosleep = 101;
			
			
			const int sys_getitimer = 102;
			
			
			const int sys_setitimer = 103;
			
			
			const int sys_kexec_load = 104;
			
			
			const int sys_init_module = 105;
			
			
			const int sys_delete_module = 106;
			
			
			const int sys_timer_create = 107;
			
			
			const int sys_timer_gettime = 108;
			
			
			const int sys_timer_getoverrun = 109;
			
			
			const int sys_timer_settime = 110;
			
			
			const int sys_timer_delete = 111;
			
			
			const int sys_clock_settime = 112;
			
			
			const int sys_clock_gettime = 113;
			
			
			const int sys_clock_getres = 114;
			
			
			const int sys_clock_nanosleep = 115;
			
			
			const int sys_syslog = 116;
			
			
			const int sys_ptrace = 117;
			
			
			const int sys_sched_setparam = 118;
			
			
			const int sys_sched_setscheduler = 119;
			
			
			const int sys_sched_getscheduler = 120;
			
			
			const int sys_sched_getparam = 121;
			
			
			const int sys_sched_setaffinity = 122;
			
			
			const int sys_sched_getaffinity = 123;
			
			
			const int sys_sched_yield = 124;
			
			
			const int sys_sched_get_priority_max = 125;
			
			
			const int sys_sched_get_priority_min = 126;
			
			
			const int sys_sched_rr_get_interval = 127;
			
			
			const int sys_restart_syscall = 128;
			
			
			const int sys_kill = 129;
			
			
			const int sys_tkill = 130;
			
			
			const int sys_tgkill = 131;
			
			
			const int sys_sigaltstack = 132;
			
			
			const int sys_rt_sigsuspend = 133;
			
			
			const int sys_rt_sigaction = 134;
			
			
			const int sys_rt_sigprocmask = 135;
			
			
			const int sys_rt_sigpending = 136;
			
			
			const int sys_rt_sigtimedwait = 137;
			
			
			const int sys_rt_sigqueueinfo = 138;
			
			
			const int sys_rt_sigreturn = 139;
			
			
			const int sys_setpriority = 140;
			
			
			const int sys_getpriority = 141;
			
			
			const int sys_reboot = 142;
			
			
			const int sys_setregid = 143;
			
			
			const int sys_setgid = 144;
			
			
			const int sys_setreuid = 145;
			
			
			const int sys_setuid = 146;
			
			
			const int sys_setresuid = 147;
			
			
			const int sys_getresuid = 148;
			
			
			const int sys_setresgid = 149;
			
			
			const int sys_getresgid = 150;
			
			
			const int sys_setfsuid = 151;
			
			
			const int sys_setfsgid = 152;
			
			
			const int sys_times = 153;
			
			
			const int sys_setpgid = 154;
			
			
			const int sys_getpgid = 155;
			
			
			const int sys_getsid = 156;
			
			
			const int sys_setsid = 157;
			
			
			const int sys_getgroups = 158;
			
			
			const int sys_setgroups = 159;
			
			
			const int sys_uname = 160;
			
			
			const int sys_sethostname = 161;
			
			
			const int sys_setdomainname = 162;
			
			
			const int sys_getrlimit = 163;
			
			
			const int sys_setrlimit = 164;
			
			
			const int sys_getrusage = 165;
			
			
			const int sys_umask = 166;
			
			
			const int sys_prctl = 167;
			
			
			const int sys_getcpu = 168;
			
			
			const int sys_gettimeofday = 169;
			
			
			const int sys_settimeofday = 170;
			
			
			const int sys_adjtimex = 171;
			
			
			const int sys_getpid = 172;
			
			
			const int sys_getppid = 173;
			
			
			const int sys_getuid = 174;
			
			
			const int sys_geteuid = 175;
			
			
			const int sys_getgid = 176;
			
			
			const int sys_getegid = 177;
			
			
			const int sys_gettid = 178;
			
			
			const int sys_sysinfo = 179;
			
			
			const int sys_mq_open = 180;
			
			
			const int sys_mq_unlink = 181;
			
			
			const int sys_mq_timedsend = 182;
			
			
			const int sys_mq_timedreceive = 183;
			
			
			const int sys_mq_notify = 184;
			
			
			const int sys_mq_getsetattr = 185;
			
			
			const int sys_msgget = 186;
			
			
			const int sys_msgctl = 187;
			
			
			const int sys_msgrcv = 188;
			
			
			const int sys_msgsnd = 189;
			
			
			const int sys_semget = 190;
			
			
			const int sys_semctl = 191;
			
			
			const int sys_semtimedop = 192;
			
			
			const int sys_semop = 193;
			
			
			const int sys_shmget = 194;
			
			
			const int sys_shmctl = 195;
			
			
			const int sys_shmat = 196;
			
			
			const int sys_shmdt = 197;
			
			
			const int sys_socket = 198;
			
			
			const int sys_socketpair = 199;
			
			
			const int sys_bind = 200;
			
			
			const int sys_listen = 201;
			
			
			const int sys_accept = 202;
			
			
			const int sys_connect = 203;
			
			
			const int sys_getsockname = 204;
			
			
			const int sys_getpeername = 205;
			
			
			const int sys_sendto = 206;
			
			
			const int sys_recvfrom = 207;
			
			
			const int sys_setsockopt = 208;
			
			
			const int sys_getsockopt = 209;
			
			
			const int sys_shutdown = 210;
			
			
			const int sys_sendmsg = 211;
			
			
			const int sys_recvmsg = 212;
			
			
			const int sys_readahead = 213;
			
			
			const int sys_brk = 214;
			
			
			const int sys_munmap = 215;
			
			
			const int sys_mremap = 216;
			
			
			const int sys_add_key = 217;
			
			
			const int sys_request_key = 218;
			
			
			const int sys_keyctl = 219;
			
			
			const int sys_clone = 220;
			
			
			const int sys_execve = 221;
			
			
			const int sys_mmap = 222;
			
			
			const int sys_fadvise64 = 223;
			
			
			const int sys_swapon = 224;
			
			
			const int sys_swapoff = 225;
			
			
			const int sys_mprotect = 226;
			
			
			const int sys_msync = 227;
			
			
			const int sys_mlock = 228;
			
			
			const int sys_munlock = 229;
			
			
			const int sys_mlockall = 230;
			
			
			const int sys_munlockall = 231;
			
			
			const int sys_mincore = 232;
			
			
			const int sys_madvise = 233;
			
			
			const int sys_remap_file_pages = 234;
			
			
			const int sys_mbind = 235;
			
			
			const int sys_get_mempolicy = 236;
			
			
			const int sys_set_mempolicy = 237;
			
			
			const int sys_migrate_pages = 238;
			
			
			const int sys_move_pages = 239;
			
			
			const int sys_rt_tgsigqueueinfo = 240;
			
			
			const int sys_perf_event_open = 241;
			
			
			const int sys_accept4 = 242;
			
			
			const int sys_recvmmsg = 243;
			
			
			const int sys_wait4 = 260;
			
			
			const int sys_prlimit64 = 261;
			
			
			const int sys_fanotify_init = 262;
			
			
			const int sys_fanotify_mark = 263;
			
			
			const int sys_name_to_handle_at = 264;
			
			
			const int sys_open_by_handle_at = 265;
			
			
			const int sys_clock_adjtime = 266;
			
			
			const int sys_syncfs = 267;
			
			
			const int sys_setns = 268;
			
			
			const int sys_sendmmsg = 269;
			
			
			const int sys_process_vm_readv = 270;
			
			
			const int sys_process_vm_writev = 271;
			
			
			const int sys_kcmp = 272;
			
			
			const int sys_finit_module = 273;
			
			
			const int sys_sched_setattr = 274;
			
			
			const int sys_sched_getattr = 275;
			
			
			const int sys_renameat2 = 276;
			
			
			const int sys_seccomp = 277;
			
			
			const int sys_getrandom = 278;
			
			
			const int sys_memfd_create = 279;
			
			
			const int sys_bpf = 280;
			
			
			const int sys_execveat = 281;
			
			
			const int sys_userfaultfd = 282;
			
			
			const int sys_membarrier = 283;
			
			
			const int sys_mlock2 = 284;
			
			
			const int sys_copy_file_range = 285;
			
			
			const int sys_preadv2 = 286;
			
			
			const int sys_pwritev2 = 287;
			
			
			const int sys_pkey_mprotect = 288;
			
			
			const int sys_pkey_alloc = 289;
			
			
			const int sys_pkey_free = 290;
			
			
			const int sys_statx = 291;
			
			
			const int sys_kexec_file_load = 294;
			
			
			const int sys_pidfd_send_signal = 424;
			
			
			const int sys_pidfd_open = 434;
			
			
			const int sys_clone3 = 435;
			
			
			const int sys_openat2 = 437;
			
			
			const int sys_pidfd_getfd = 438;
			
			
			const int sys_faccessat2 = 439;
			
		}
	}
	// linux:x86
	namespace linux {
		namespace x86 {
			
			const int sys_restart_syscall = 0;
			
			
			const int sys_exit = 1;
			
			
			const int sys_fork = 2;
			
			
			const int sys_read = 3;
			
			
			const int sys_write = 4;
			
			
			const int sys_open = 5;
			
			
			const int sys_close = 6;
			
			
			const int sys_waitpid = 7;
			
			
			const int sys_creat = 8;
			
			
			const int sys_link = 9;
			
			
			const int sys_unlink = 10;
			
			
			const int sys_execve = 11;
			
			
			const int sys_chdir = 12;
			
			
			const int sys_time = 13;
			
			
			const int sys_mknod = 14;
			
			
			const int sys_chmod = 15;
			
			
			const int sys_lchown16 = 16;
			
			
			const int sys_stat = 18;
			
			
			const int sys_lseek = 19;
			
			
			const int sys_getpid = 20;
			
			
			const int sys_mount = 21;
			
			
			const int sys_oldumount = 22;
			
			
			const int sys_setuid16 = 23;
			
			
			const int sys_getuid16 = 24;
			
			
			const int sys_stime = 25;
			
			
			const int sys_ptrace = 26;
			
			
			const int sys_alarm = 27;
			
			
			const int sys_fstat = 28;
			
			
			const int sys_pause = 29;
			
			
			const int sys_utime = 30;
			
			
			const int sys_access = 33;
			
			
			const int sys_nice = 34;
			
			
			const int sys_sync = 36;
			
			
			const int sys_kill = 37;
			
			
			const int sys_rename = 38;
			
			
			const int sys_mkdir = 39;
			
			
			const int sys_rmdir = 40;
			
			
			const int sys_dup = 41;
			
			
			const int sys_pipe = 42;
			
			
			const int sys_times = 43;
			
			
			const int sys_brk = 45;
			
			
			const int sys_setgid16 = 46;
			
			
			const int sys_getgid16 = 47;
			
			
			const int sys_signal = 48;
			
			
			const int sys_geteuid16 = 49;
			
			
			const int sys_getegid16 = 50;
			
			
			const int sys_acct = 51;
			
			
			const int sys_umount = 52;
			
			
			const int sys_ioctl = 54;
			
			
			const int sys_fcntl = 55;
			
			
			const int sys_setpgid = 57;
			
			
			const int sys_olduname = 59;
			
			
			const int sys_umask = 60;
			
			
			const int sys_chroot = 61;
			
			
			const int sys_ustat = 62;
			
			
			const int sys_dup2 = 63;
			
			
			const int sys_getppid = 64;
			
			
			const int sys_getpgrp = 65;
			
			
			const int sys_setsid = 66;
			
			
			const int sys_sigaction = 67;
			
			
			const int sys_sgetmask = 68;
			
			
			const int sys_ssetmask = 69;
			
			
			const int sys_setreuid16 = 70;
			
			
			const int sys_setregid16 = 71;
			
			
			const int sys_sigsuspend = 72;
			
			
			const int sys_sigpending = 73;
			
			
			const int sys_sethostname = 74;
			
			
			const int sys_setrlimit = 75;
			
			
			const int sys_old_getrlimit = 76;
			
			
			const int sys_getrusage = 77;
			
			
			const int sys_gettimeofday = 78;
			
			
			const int sys_settimeofday = 79;
			
			
			const int sys_getgroups16 = 80;
			
			
			const int sys_setgroups16 = 81;
			
			
			const int sys_old_select = 82;
			
			
			const int sys_symlink = 83;
			
			
			const int sys_lstat = 84;
			
			
			const int sys_readlink = 85;
			
			
			const int sys_uselib = 86;
			
			
			const int sys_swapon = 87;
			
			
			const int sys_reboot = 88;
			
			
			const int sys_old_readdir = 89;
			
			
			const int sys_old_mmap = 90;
			
			
			const int sys_munmap = 91;
			
			
			const int sys_truncate = 92;
			
			
			const int sys_ftruncate = 93;
			
			
			const int sys_fchmod = 94;
			
			
			const int sys_fchown16 = 95;
			
			
			const int sys_getpriority = 96;
			
			
			const int sys_setpriority = 97;
			
			
			const int sys_statfs = 99;
			
			
			const int sys_fstatfs = 100;
			
			
			const int sys_ioperm = 101;
			
			
			const int sys_socketcall = 102;
			
			
			const int sys_syslog = 103;
			
			
			const int sys_setitimer = 104;
			
			
			const int sys_getitimer = 105;
			
			
			const int sys_newstat = 106;
			
			
			const int sys_newlstat = 107;
			
			
			const int sys_newfstat = 108;
			
			
			const int sys_uname = 109;
			
			
			const int sys_iopl = 110;
			
			
			const int sys_vhangup = 111;
			
			
			const int sys_vm86old = 113;
			
			
			const int sys_wait4 = 114;
			
			
			const int sys_swapoff = 115;
			
			
			const int sys_sysinfo = 116;
			
			
			const int sys_ipc = 117;
			
			
			const int sys_fsync = 118;
			
			
			const int sys_sigreturn = 119;
			
			
			const int sys_clone = 120;
			
			
			const int sys_setdomainname = 121;
			
			
			const int sys_newuname = 122;
			
			
			const int sys_modify_ldt = 123;
			
			
			const int sys_adjtimex = 124;
			
			
			const int sys_mprotect = 125;
			
			
			const int sys_sigprocmask = 126;
			
			
			const int sys_init_module = 128;
			
			
			const int sys_delete_module = 129;
			
			
			const int sys_quotactl = 131;
			
			
			const int sys_getpgid = 132;
			
			
			const int sys_fchdir = 133;
			
			
			const int sys_bdflush = 134;
			
			
			const int sys_sysfs = 135;
			
			
			const int sys_personality = 136;
			
			
			const int sys_setfsuid16 = 138;
			
			
			const int sys_setfsgid16 = 139;
			
			
			const int sys_llseek = 140;
			
			
			const int sys_getdents = 141;
			
			
			const int sys_select = 142;
			
			
			const int sys_flock = 143;
			
			
			const int sys_msync = 144;
			
			
			const int sys_readv = 145;
			
			
			const int sys_writev = 146;
			
			
			const int sys_getsid = 147;
			
			
			const int sys_fdatasync = 148;
			
			
			const int sys_sysctl = 149;
			
			
			const int sys_mlock = 150;
			
			
			const int sys_munlock = 151;
			
			
			const int sys_mlockall = 152;
			
			
			const int sys_munlockall = 153;
			
			
			const int sys_sched_setparam = 154;
			
			
			const int sys_sched_getparam = 155;
			
			
			const int sys_sched_setscheduler = 156;
			
			
			const int sys_sched_getscheduler = 157;
			
			
			const int sys_sched_yield = 158;
			
			
			const int sys_sched_get_priority_max = 159;
			
			
			const int sys_sched_get_priority_min = 160;
			
			
			const int sys_sched_rr_get_interval = 161;
			
			
			const int sys_nanosleep = 162;
			
			
			const int sys_mremap = 163;
			
			
			const int sys_setresuid16 = 164;
			
			
			const int sys_getresuid16 = 165;
			
			
			const int sys_vm86 = 166;
			
			
			const int sys_poll = 168;
			
			
			const int sys_setresgid16 = 170;
			
			
			const int sys_getresgid16 = 171;
			
			
			const int sys_prctl = 172;
			
			
			const int sys_rt_sigreturn = 173;
			
			
			const int sys_rt_sigaction = 174;
			
			
			const int sys_rt_sigprocmask = 175;
			
			
			const int sys_rt_sigpending = 176;
			
			
			const int sys_rt_sigtimedwait = 177;
			
			
			const int sys_rt_sigqueueinfo = 178;
			
			
			const int sys_rt_sigsuspend = 179;
			
			
			const int sys_pread64 = 180;
			
			
			const int sys_pwrite64 = 181;
			
			
			const int sys_chown16 = 182;
			
			
			const int sys_getcwd = 183;
			
			
			const int sys_capget = 184;
			
			
			const int sys_capset = 185;
			
			
			const int sys_sigaltstack = 186;
			
			
			const int sys_sendfile = 187;
			
			
			const int sys_vfork = 190;
			
			
			const int sys_getrlimit = 191;
			
			
			const int sys_mmap_pgoff = 192;
			
			
			const int sys_truncate64 = 193;
			
			
			const int sys_ftruncate64 = 194;
			
			
			const int sys_stat64 = 195;
			
			
			const int sys_lstat64 = 196;
			
			
			const int sys_fstat64 = 197;
			
			
			const int sys_lchown = 198;
			
			
			const int sys_getuid = 199;
			
			
			const int sys_getgid = 200;
			
			
			const int sys_geteuid = 201;
			
			
			const int sys_getegid = 202;
			
			
			const int sys_setreuid = 203;
			
			
			const int sys_setregid = 204;
			
			
			const int sys_getgroups = 205;
			
			
			const int sys_setgroups = 206;
			
			
			const int sys_fchown = 207;
			
			
			const int sys_setresuid = 208;
			
			
			const int sys_getresuid = 209;
			
			
			const int sys_setresgid = 210;
			
			
			const int sys_getresgid = 211;
			
			
			const int sys_chown = 212;
			
			
			const int sys_setuid = 213;
			
			
			const int sys_setgid = 214;
			
			
			const int sys_setfsuid = 215;
			
			
			const int sys_setfsgid = 216;
			
			
			const int sys_pivot_root = 217;
			
			
			const int sys_mincore = 218;
			
			
			const int sys_madvise = 219;
			
			
			const int sys_getdents64 = 220;
			
			
			const int sys_fcntl64 = 221;
			
			
			const int sys_gettid = 224;
			
			
			const int sys_readahead = 225;
			
			
			const int sys_setxattr = 226;
			
			
			const int sys_lsetxattr = 227;
			
			
			const int sys_fsetxattr = 228;
			
			
			const int sys_getxattr = 229;
			
			
			const int sys_lgetxattr = 230;
			
			
			const int sys_fgetxattr = 231;
			
			
			const int sys_listxattr = 232;
			
			
			const int sys_llistxattr = 233;
			
			
			const int sys_flistxattr = 234;
			
			
			const int sys_removexattr = 235;
			
			
			const int sys_lremovexattr = 236;
			
			
			const int sys_fremovexattr = 237;
			
			
			const int sys_tkill = 238;
			
			
			const int sys_sendfile64 = 239;
			
			
			const int sys_futex = 240;
			
			
			const int sys_sched_setaffinity = 241;
			
			
			const int sys_sched_getaffinity = 242;
			
			
			const int sys_set_thread_area = 243;
			
			
			const int sys_get_thread_area = 244;
			
			
			const int sys_io_setup = 245;
			
			
			const int sys_io_destroy = 246;
			
			
			const int sys_io_getevents = 247;
			
			
			const int sys_io_submit = 248;
			
			
			const int sys_io_cancel = 249;
			
			
			const int sys_fadvise64 = 250;
			
			
			const int sys_exit_group = 252;
			
			
			const int sys_lookup_dcookie = 253;
			
			
			const int sys_epoll_create = 254;
			
			
			const int sys_epoll_ctl = 255;
			
			
			const int sys_epoll_wait = 256;
			
			
			const int sys_remap_file_pages = 257;
			
			
			const int sys_set_tid_address = 258;
			
			
			const int sys_timer_create = 259;
			
			
			const int sys_timer_settime = 260;
			
			
			const int sys_timer_gettime = 261;
			
			
			const int sys_timer_getoverrun = 262;
			
			
			const int sys_timer_delete = 263;
			
			
			const int sys_clock_settime = 264;
			
			
			const int sys_clock_gettime = 265;
			
			
			const int sys_clock_getres = 266;
			
			
			const int sys_clock_nanosleep = 267;
			
			
			const int sys_statfs64 = 268;
			
			
			const int sys_fstatfs64 = 269;
			
			
			const int sys_tgkill = 270;
			
			
			const int sys_utimes = 271;
			
			
			const int sys_fadvise64_64 = 272;
			
			
			const int sys_mbind = 274;
			
			
			const int sys_get_mempolicy = 275;
			
			
			const int sys_set_mempolicy = 276;
			
			
			const int sys_mq_open = 277;
			
			
			const int sys_mq_unlink = 278;
			
			
			const int sys_mq_timedsend = 279;
			
			
			const int sys_mq_timedreceive = 280;
			
			
			const int sys_mq_notify = 281;
			
			
			const int sys_mq_getsetattr = 282;
			
			
			const int sys_kexec_load = 283;
			
			
			const int sys_waitid = 284;
			
			
			const int sys_add_key = 286;
			
			
			const int sys_request_key = 287;
			
			
			const int sys_keyctl = 288;
			
			
			const int sys_ioprio_set = 289;
			
			
			const int sys_ioprio_get = 290;
			
			
			const int sys_inotify_init = 291;
			
			
			const int sys_inotify_add_watch = 292;
			
			
			const int sys_inotify_rm_watch = 293;
			
			
			const int sys_migrate_pages = 294;
			
			
			const int sys_openat = 295;
			
			
			const int sys_mkdirat = 296;
			
			
			const int sys_mknodat = 297;
			
			
			const int sys_fchownat = 298;
			
			
			const int sys_futimesat = 299;
			
			
			const int sys_fstatat64 = 300;
			
			
			const int sys_unlinkat = 301;
			
			
			const int sys_renameat = 302;
			
			
			const int sys_linkat = 303;
			
			
			const int sys_symlinkat = 304;
			
			
			const int sys_readlinkat = 305;
			
			
			const int sys_fchmodat = 306;
			
			
			const int sys_faccessat = 307;
			
			
			const int sys_pselect6 = 308;
			
			
			const int sys_ppoll = 309;
			
			
			const int sys_unshare = 310;
			
			
			const int sys_set_robust_list = 311;
			
			
			const int sys_get_robust_list = 312;
			
			
			const int sys_splice = 313;
			
			
			const int sys_sync_file_range = 314;
			
			
			const int sys_tee = 315;
			
			
			const int sys_vmsplice = 316;
			
			
			const int sys_move_pages = 317;
			
			
			const int sys_getcpu = 318;
			
			
			const int sys_epoll_pwait = 319;
			
			
			const int sys_utimensat = 320;
			
			
			const int sys_signalfd = 321;
			
			
			const int sys_timerfd_create = 322;
			
			
			const int sys_eventfd = 323;
			
			
			const int sys_fallocate = 324;
			
			
			const int sys_timerfd_settime = 325;
			
			
			const int sys_timerfd_gettime = 326;
			
			
			const int sys_signalfd4 = 327;
			
			
			const int sys_eventfd2 = 328;
			
			
			const int sys_epoll_create1 = 329;
			
			
			const int sys_dup3 = 330;
			
			
			const int sys_pipe2 = 331;
			
			
			const int sys_inotify_init1 = 332;
			
			
			const int sys_preadv = 333;
			
			
			const int sys_pwritev = 334;
			
			
			const int sys_rt_tgsigqueueinfo = 335;
			
			
			const int sys_perf_event_open = 336;
			
			
			const int sys_recvmmsg = 337;
			
			
			const int sys_fanotify_init = 338;
			
			
			const int sys_fanotify_mark = 339;
			
			
			const int sys_prlimit64 = 340;
			
			
			const int sys_name_to_handle_at = 341;
			
			
			const int sys_open_by_handle_at = 342;
			
			
			const int sys_clock_adjtime = 343;
			
			
			const int sys_syncfs = 344;
			
			
			const int sys_sendmmsg = 345;
			
			
			const int sys_setns = 346;
			
			
			const int sys_process_vm_readv = 347;
			
			
			const int sys_process_vm_writev = 348;
			
			
			const int sys_kcmp = 349;
			
			
			const int sys_finit_module = 350;
			
			
			const int sys_sched_setattr = 351;
			
			
			const int sys_sched_getattr = 352;
			
			
			const int sys_renameat2 = 353;
			
			
			const int sys_seccomp = 354;
			
			
			const int sys_getrandom = 355;
			
			
			const int sys_memfd_create = 356;
			
			
			const int sys_bpf = 357;
			
			
			const int sys_execveat = 358;
			
			
			const int sys_socket = 359;
			
			
			const int sys_socketpair = 360;
			
			
			const int sys_bind = 361;
			
			
			const int sys_connect = 362;
			
			
			const int sys_listen = 363;
			
			
			const int sys_accept4 = 364;
			
			
			const int sys_getsockopt = 365;
			
			
			const int sys_setsockopt = 366;
			
			
			const int sys_getsockname = 367;
			
			
			const int sys_getpeername = 368;
			
			
			const int sys_sendto = 369;
			
			
			const int sys_sendmsg = 370;
			
			
			const int sys_recvfrom = 371;
			
			
			const int sys_recvmsg = 372;
			
			
			const int sys_shutdown = 373;
			
			
			const int sys_userfaultfd = 374;
			
			
			const int sys_membarrier = 375;
			
			
			const int sys_mlock2 = 376;
			
			
			const int sys_copy_file_range = 377;
			
			
			const int sys_preadv2 = 378;
			
			
			const int sys_pwritev2 = 379;
			
			
			const int sys_pkey_mprotect = 380;
			
			
			const int sys_pkey_alloc = 381;
			
			
			const int sys_pkey_free = 382;
			
			
			const int sys_statx = 383;
			
			
			const int sys_arch_prctl = 384;
			
		}
	}
	// linux:x64
	namespace linux {
		namespace x64 {
			
			const int sys_read = 0;
			
			
			const int sys_write = 1;
			
			
			const int sys_open = 2;
			
			
			const int sys_close = 3;
			
			
			const int sys_newstat = 4;
			
			
			const int sys_newfstat = 5;
			
			
			const int sys_newlstat = 6;
			
			
			const int sys_poll = 7;
			
			
			const int sys_lseek = 8;
			
			
			const int sys_mmap = 9;
			
			
			const int sys_mprotect = 10;
			
			
			const int sys_munmap = 11;
			
			
			const int sys_brk = 12;
			
			
			const int sys_rt_sigaction = 13;
			
			
			const int sys_rt_sigprocmask = 14;
			
			
			const int sys_rt_sigreturn = 15;
			
			
			const int sys_ioctl = 16;
			
			
			const int sys_pread64 = 17;
			
			
			const int sys_pwrite64 = 18;
			
			
			const int sys_readv = 19;
			
			
			const int sys_writev = 20;
			
			
			const int sys_access = 21;
			
			
			const int sys_pipe = 22;
			
			
			const int sys_select = 23;
			
			
			const int sys_sched_yield = 24;
			
			
			const int sys_mremap = 25;
			
			
			const int sys_msync = 26;
			
			
			const int sys_mincore = 27;
			
			
			const int sys_madvise = 28;
			
			
			const int sys_shmget = 29;
			
			
			const int sys_shmat = 30;
			
			
			const int sys_shmctl = 31;
			
			
			const int sys_dup = 32;
			
			
			const int sys_dup2 = 33;
			
			
			const int sys_pause = 34;
			
			
			const int sys_nanosleep = 35;
			
			
			const int sys_getitimer = 36;
			
			
			const int sys_alarm = 37;
			
			
			const int sys_setitimer = 38;
			
			
			const int sys_getpid = 39;
			
			
			const int sys_sendfile64 = 40;
			
			
			const int sys_socket = 41;
			
			
			const int sys_connect = 42;
			
			
			const int sys_accept = 43;
			
			
			const int sys_sendto = 44;
			
			
			const int sys_recvfrom = 45;
			
			
			const int sys_sendmsg = 46;
			
			
			const int sys_recvmsg = 47;
			
			
			const int sys_shutdown = 48;
			
			
			const int sys_bind = 49;
			
			
			const int sys_listen = 50;
			
			
			const int sys_getsockname = 51;
			
			
			const int sys_getpeername = 52;
			
			
			const int sys_socketpair = 53;
			
			
			const int sys_setsockopt = 54;
			
			
			const int sys_getsockopt = 55;
			
			
			const int sys_clone = 56;
			
			
			const int sys_fork = 57;
			
			
			const int sys_vfork = 58;
			
			
			const int sys_execve = 59;
			
			
			const int sys_exit = 60;
			
			
			const int sys_wait4 = 61;
			
			
			const int sys_kill = 62;
			
			
			const int sys_newuname = 63;
			
			
			const int sys_semget = 64;
			
			
			const int sys_semop = 65;
			
			
			const int sys_semctl = 66;
			
			
			const int sys_shmdt = 67;
			
			
			const int sys_msgget = 68;
			
			
			const int sys_msgsnd = 69;
			
			
			const int sys_msgrcv = 70;
			
			
			const int sys_msgctl = 71;
			
			
			const int sys_fcntl = 72;
			
			
			const int sys_flock = 73;
			
			
			const int sys_fsync = 74;
			
			
			const int sys_fdatasync = 75;
			
			
			const int sys_truncate = 76;
			
			
			const int sys_ftruncate = 77;
			
			
			const int sys_getdents = 78;
			
			
			const int sys_getcwd = 79;
			
			
			const int sys_chdir = 80;
			
			
			const int sys_fchdir = 81;
			
			
			const int sys_rename = 82;
			
			
			const int sys_mkdir = 83;
			
			
			const int sys_rmdir = 84;
			
			
			const int sys_creat = 85;
			
			
			const int sys_link = 86;
			
			
			const int sys_unlink = 87;
			
			
			const int sys_symlink = 88;
			
			
			const int sys_readlink = 89;
			
			
			const int sys_chmod = 90;
			
			
			const int sys_fchmod = 91;
			
			
			const int sys_chown = 92;
			
			
			const int sys_fchown = 93;
			
			
			const int sys_lchown = 94;
			
			
			const int sys_umask = 95;
			
			
			const int sys_gettimeofday = 96;
			
			
			const int sys_getrlimit = 97;
			
			
			const int sys_getrusage = 98;
			
			
			const int sys_sysinfo = 99;
			
			
			const int sys_times = 100;
			
			
			const int sys_ptrace = 101;
			
			
			const int sys_getuid = 102;
			
			
			const int sys_syslog = 103;
			
			
			const int sys_getgid = 104;
			
			
			const int sys_setuid = 105;
			
			
			const int sys_setgid = 106;
			
			
			const int sys_geteuid = 107;
			
			
			const int sys_getegid = 108;
			
			
			const int sys_setpgid = 109;
			
			
			const int sys_getppid = 110;
			
			
			const int sys_getpgrp = 111;
			
			
			const int sys_setsid = 112;
			
			
			const int sys_setreuid = 113;
			
			
			const int sys_setregid = 114;
			
			
			const int sys_getgroups = 115;
			
			
			const int sys_setgroups = 116;
			
			
			const int sys_setresuid = 117;
			
			
			const int sys_getresuid = 118;
			
			
			const int sys_setresgid = 119;
			
			
			const int sys_getresgid = 120;
			
			
			const int sys_getpgid = 121;
			
			
			const int sys_setfsuid = 122;
			
			
			const int sys_setfsgid = 123;
			
			
			const int sys_getsid = 124;
			
			
			const int sys_capget = 125;
			
			
			const int sys_capset = 126;
			
			
			const int sys_rt_sigpending = 127;
			
			
			const int sys_rt_sigtimedwait = 128;
			
			
			const int sys_rt_sigqueueinfo = 129;
			
			
			const int sys_rt_sigsuspend = 130;
			
			
			const int sys_sigaltstack = 131;
			
			
			const int sys_utime = 132;
			
			
			const int sys_mknod = 133;
			
			
			const int sys_personality = 135;
			
			
			const int sys_ustat = 136;
			
			
			const int sys_statfs = 137;
			
			
			const int sys_fstatfs = 138;
			
			
			const int sys_sysfs = 139;
			
			
			const int sys_getpriority = 140;
			
			
			const int sys_setpriority = 141;
			
			
			const int sys_sched_setparam = 142;
			
			
			const int sys_sched_getparam = 143;
			
			
			const int sys_sched_setscheduler = 144;
			
			
			const int sys_sched_getscheduler = 145;
			
			
			const int sys_sched_get_priority_max = 146;
			
			
			const int sys_sched_get_priority_min = 147;
			
			
			const int sys_sched_rr_get_interval = 148;
			
			
			const int sys_mlock = 149;
			
			
			const int sys_munlock = 150;
			
			
			const int sys_mlockall = 151;
			
			
			const int sys_munlockall = 152;
			
			
			const int sys_vhangup = 153;
			
			
			const int sys_modify_ldt = 154;
			
			
			const int sys_pivot_root = 155;
			
			
			const int sys_sysctl = 156;
			
			
			const int sys_prctl = 157;
			
			
			const int sys_arch_prctl = 158;
			
			
			const int sys_adjtimex = 159;
			
			
			const int sys_setrlimit = 160;
			
			
			const int sys_chroot = 161;
			
			
			const int sys_sync = 162;
			
			
			const int sys_acct = 163;
			
			
			const int sys_settimeofday = 164;
			
			
			const int sys_mount = 165;
			
			
			const int sys_umount = 166;
			
			
			const int sys_swapon = 167;
			
			
			const int sys_swapoff = 168;
			
			
			const int sys_reboot = 169;
			
			
			const int sys_sethostname = 170;
			
			
			const int sys_setdomainname = 171;
			
			
			const int sys_iopl = 172;
			
			
			const int sys_ioperm = 173;
			
			
			const int sys_init_module = 175;
			
			
			const int sys_delete_module = 176;
			
			
			const int sys_quotactl = 179;
			
			
			const int sys_gettid = 186;
			
			
			const int sys_readahead = 187;
			
			
			const int sys_setxattr = 188;
			
			
			const int sys_lsetxattr = 189;
			
			
			const int sys_fsetxattr = 190;
			
			
			const int sys_getxattr = 191;
			
			
			const int sys_lgetxattr = 192;
			
			
			const int sys_fgetxattr = 193;
			
			
			const int sys_listxattr = 194;
			
			
			const int sys_llistxattr = 195;
			
			
			const int sys_flistxattr = 196;
			
			
			const int sys_removexattr = 197;
			
			
			const int sys_lremovexattr = 198;
			
			
			const int sys_fremovexattr = 199;
			
			
			const int sys_tkill = 200;
			
			
			const int sys_time = 201;
			
			
			const int sys_futex = 202;
			
			
			const int sys_sched_setaffinity = 203;
			
			
			const int sys_sched_getaffinity = 204;
			
			
			const int sys_io_setup = 206;
			
			
			const int sys_io_destroy = 207;
			
			
			const int sys_io_getevents = 208;
			
			
			const int sys_io_submit = 209;
			
			
			const int sys_io_cancel = 210;
			
			
			const int sys_lookup_dcookie = 212;
			
			
			const int sys_epoll_create = 213;
			
			
			const int sys_remap_file_pages = 216;
			
			
			const int sys_getdents64 = 217;
			
			
			const int sys_set_tid_address = 218;
			
			
			const int sys_restart_syscall = 219;
			
			
			const int sys_semtimedop = 220;
			
			
			const int sys_fadvise64 = 221;
			
			
			const int sys_timer_create = 222;
			
			
			const int sys_timer_settime = 223;
			
			
			const int sys_timer_gettime = 224;
			
			
			const int sys_timer_getoverrun = 225;
			
			
			const int sys_timer_delete = 226;
			
			
			const int sys_clock_settime = 227;
			
			
			const int sys_clock_gettime = 228;
			
			
			const int sys_clock_getres = 229;
			
			
			const int sys_clock_nanosleep = 230;
			
			
			const int sys_exit_group = 231;
			
			
			const int sys_epoll_wait = 232;
			
			
			const int sys_epoll_ctl = 233;
			
			
			const int sys_tgkill = 234;
			
			
			const int sys_utimes = 235;
			
			
			const int sys_mbind = 237;
			
			
			const int sys_set_mempolicy = 238;
			
			
			const int sys_get_mempolicy = 239;
			
			
			const int sys_mq_open = 240;
			
			
			const int sys_mq_unlink = 241;
			
			
			const int sys_mq_timedsend = 242;
			
			
			const int sys_mq_timedreceive = 243;
			
			
			const int sys_mq_notify = 244;
			
			
			const int sys_mq_getsetattr = 245;
			
			
			const int sys_kexec_load = 246;
			
			
			const int sys_waitid = 247;
			
			
			const int sys_add_key = 248;
			
			
			const int sys_request_key = 249;
			
			
			const int sys_keyctl = 250;
			
			
			const int sys_ioprio_set = 251;
			
			
			const int sys_ioprio_get = 252;
			
			
			const int sys_inotify_init = 253;
			
			
			const int sys_inotify_add_watch = 254;
			
			
			const int sys_inotify_rm_watch = 255;
			
			
			const int sys_migrate_pages = 256;
			
			
			const int sys_openat = 257;
			
			
			const int sys_mkdirat = 258;
			
			
			const int sys_mknodat = 259;
			
			
			const int sys_fchownat = 260;
			
			
			const int sys_futimesat = 261;
			
			
			const int sys_newfstatat = 262;
			
			
			const int sys_unlinkat = 263;
			
			
			const int sys_renameat = 264;
			
			
			const int sys_linkat = 265;
			
			
			const int sys_symlinkat = 266;
			
			
			const int sys_readlinkat = 267;
			
			
			const int sys_fchmodat = 268;
			
			
			const int sys_faccessat = 269;
			
			
			const int sys_pselect6 = 270;
			
			
			const int sys_ppoll = 271;
			
			
			const int sys_unshare = 272;
			
			
			const int sys_set_robust_list = 273;
			
			
			const int sys_get_robust_list = 274;
			
			
			const int sys_splice = 275;
			
			
			const int sys_tee = 276;
			
			
			const int sys_sync_file_range = 277;
			
			
			const int sys_vmsplice = 278;
			
			
			const int sys_move_pages = 279;
			
			
			const int sys_utimensat = 280;
			
			
			const int sys_epoll_pwait = 281;
			
			
			const int sys_signalfd = 282;
			
			
			const int sys_timerfd_create = 283;
			
			
			const int sys_eventfd = 284;
			
			
			const int sys_fallocate = 285;
			
			
			const int sys_timerfd_settime = 286;
			
			
			const int sys_timerfd_gettime = 287;
			
			
			const int sys_accept4 = 288;
			
			
			const int sys_signalfd4 = 289;
			
			
			const int sys_eventfd2 = 290;
			
			
			const int sys_epoll_create1 = 291;
			
			
			const int sys_dup3 = 292;
			
			
			const int sys_pipe2 = 293;
			
			
			const int sys_inotify_init1 = 294;
			
			
			const int sys_preadv = 295;
			
			
			const int sys_pwritev = 296;
			
			
			const int sys_rt_tgsigqueueinfo = 297;
			
			
			const int sys_perf_event_open = 298;
			
			
			const int sys_recvmmsg = 299;
			
			
			const int sys_fanotify_init = 300;
			
			
			const int sys_fanotify_mark = 301;
			
			
			const int sys_prlimit64 = 302;
			
			
			const int sys_name_to_handle_at = 303;
			
			
			const int sys_open_by_handle_at = 304;
			
			
			const int sys_clock_adjtime = 305;
			
			
			const int sys_syncfs = 306;
			
			
			const int sys_sendmmsg = 307;
			
			
			const int sys_setns = 308;
			
			
			const int sys_getcpu = 309;
			
			
			const int sys_process_vm_readv = 310;
			
			
			const int sys_process_vm_writev = 311;
			
			
			const int sys_kcmp = 312;
			
			
			const int sys_finit_module = 313;
			
			
			const int sys_sched_setattr = 314;
			
			
			const int sys_sched_getattr = 315;
			
			
			const int sys_renameat2 = 316;
			
			
			const int sys_seccomp = 317;
			
			
			const int sys_getrandom = 318;
			
			
			const int sys_memfd_create = 319;
			
			
			const int sys_kexec_file_load = 320;
			
			
			const int sys_bpf = 321;
			
			
			const int sys_execveat = 322;
			
			
			const int sys_userfaultfd = 323;
			
			
			const int sys_membarrier = 324;
			
			
			const int sys_mlock2 = 325;
			
			
			const int sys_copy_file_range = 326;
			
			
			const int sys_preadv2 = 327;
			
			
			const int sys_pwritev2 = 328;
			
			
			const int sys_pkey_mprotect = 329;
			
			
			const int sys_pkey_alloc = 330;
			
			
			const int sys_pkey_free = 331;
			
			
			const int sys_statx = 332;
			
		}
	}
	// linux:mips
	namespace linux {
		namespace mips {
			
			const int sys_exit = 4001;
			
			
			const int sys_fork = 4002;
			
			
			const int sys_read = 4003;
			
			
			const int sys_write = 4004;
			
			
			const int sys_open = 4005;
			
			
			const int sys_close = 4006;
			
			
			const int sys_waitpid = 4007;
			
			
			const int sys_creat = 4008;
			
			
			const int sys_link = 4009;
			
			
			const int sys_unlink = 4010;
			
			
			const int sys_execve = 4011;
			
			
			const int sys_chdir = 4012;
			
			
			const int sys_time32 = 4013;
			
			
			const int sys_mknod = 4014;
			
			
			const int sys_chmod = 4015;
			
			
			const int sys_lchown = 4016;
			
			
			const int sys_stat = 4018;
			
			
			const int sys_lseek = 4019;
			
			
			const int sys_getpid = 4020;
			
			
			const int sys_mount = 4021;
			
			
			const int sys_oldumount = 4022;
			
			
			const int sys_setuid = 4023;
			
			
			const int sys_getuid = 4024;
			
			
			const int sys_stime32 = 4025;
			
			
			const int sys_ptrace = 4026;
			
			
			const int sys_alarm = 4027;
			
			
			const int sys_fstat = 4028;
			
			
			const int sys_pause = 4029;
			
			
			const int sys_utime32 = 4030;
			
			
			const int sys_access = 4033;
			
			
			const int sys_nice = 4034;
			
			
			const int sys_sync = 4036;
			
			
			const int sys_kill = 4037;
			
			
			const int sys_rename = 4038;
			
			
			const int sys_mkdir = 4039;
			
			
			const int sys_rmdir = 4040;
			
			
			const int sys_dup = 4041;
			
			
			const int sys_pipe = 4042;
			
			
			const int sys_times = 4043;
			
			
			const int sys_brk = 4045;
			
			
			const int sys_setgid = 4046;
			
			
			const int sys_getgid = 4047;
			
			
			const int sys_signal = 4048;
			
			
			const int sys_geteuid = 4049;
			
			
			const int sys_getegid = 4050;
			
			
			const int sys_acct = 4051;
			
			
			const int sys_umount = 4052;
			
			
			const int sys_ioctl = 4054;
			
			
			const int sys_fcntl = 4055;
			
			
			const int sys_setpgid = 4057;
			
			
			const int sys_olduname = 4059;
			
			
			const int sys_umask = 4060;
			
			
			const int sys_chroot = 4061;
			
			
			const int sys_ustat = 4062;
			
			
			const int sys_dup2 = 4063;
			
			
			const int sys_getppid = 4064;
			
			
			const int sys_getpgrp = 4065;
			
			
			const int sys_setsid = 4066;
			
			
			const int sys_sigaction = 4067;
			
			
			const int sys_sgetmask = 4068;
			
			
			const int sys_ssetmask = 4069;
			
			
			const int sys_setreuid = 4070;
			
			
			const int sys_setregid = 4071;
			
			
			const int sys_sigsuspend = 4072;
			
			
			const int sys_sigpending = 4073;
			
			
			const int sys_sethostname = 4074;
			
			
			const int sys_setrlimit = 4075;
			
			
			const int sys_getrlimit = 4076;
			
			
			const int sys_getrusage = 4077;
			
			
			const int sys_gettimeofday = 4078;
			
			
			const int sys_settimeofday = 4079;
			
			
			const int sys_getgroups = 4080;
			
			
			const int sys_setgroups = 4081;
			
			
			const int sys_symlink = 4083;
			
			
			const int sys_lstat = 4084;
			
			
			const int sys_readlink = 4085;
			
			
			const int sys_uselib = 4086;
			
			
			const int sys_swapon = 4087;
			
			
			const int sys_reboot = 4088;
			
			
			const int sys_old_readdir = 4089;
			
			
			const int sys_mmap = 4090;
			
			
			const int sys_munmap = 4091;
			
			
			const int sys_truncate = 4092;
			
			
			const int sys_ftruncate = 4093;
			
			
			const int sys_fchmod = 4094;
			
			
			const int sys_fchown = 4095;
			
			
			const int sys_getpriority = 4096;
			
			
			const int sys_setpriority = 4097;
			
			
			const int sys_statfs = 4099;
			
			
			const int sys_fstatfs = 4100;
			
			
			const int sys_ioperm = 4101;
			
			
			const int sys_socketcall = 4102;
			
			
			const int sys_syslog = 4103;
			
			
			const int sys_setitimer = 4104;
			
			
			const int sys_getitimer = 4105;
			
			
			const int sys_newstat = 4106;
			
			
			const int sys_newlstat = 4107;
			
			
			const int sys_newfstat = 4108;
			
			
			const int sys_uname = 4109;
			
			
			const int sys_iopl = 4110;
			
			
			const int sys_vhangup = 4111;
			
			
			const int sys_idle = 4112;
			
			
			const int sys_wait4 = 4114;
			
			
			const int sys_swapoff = 4115;
			
			
			const int sys_sysinfo = 4116;
			
			
			const int sys_ipc = 4117;
			
			
			const int sys_fsync = 4118;
			
			
			const int sys_sigreturn = 4119;
			
			
			const int sys_clone = 4120;
			
			
			const int sys_setdomainname = 4121;
			
			
			const int sys_newuname = 4122;
			
			
			const int modify_ldt = 4123;
			
			
			const int sys_adjtimex_time32 = 4124;
			
			
			const int sys_mprotect = 4125;
			
			
			const int sys_sigprocmask = 4126;
			
			
			const int create_module = 4127;
			
			
			const int sys_init_module = 4128;
			
			
			const int sys_delete_module = 4129;
			
			
			const int get_kernel_syms = 4130;
			
			
			const int sys_quotactl = 4131;
			
			
			const int sys_getpgid = 4132;
			
			
			const int sys_fchdir = 4133;
			
			
			const int sys_bdflush = 4134;
			
			
			const int sys_sysfs = 4135;
			
			
			const int sys_personality = 4136;
			
			
			const int sys_setfsuid = 4138;
			
			
			const int sys_setfsgid = 4139;
			
			
			const int sys_llseek = 4140;
			
			
			const int sys_getdents = 4141;
			
			
			const int sys_select = 4142;
			
			
			const int sys_flock = 4143;
			
			
			const int sys_msync = 4144;
			
			
			const int sys_readv = 4145;
			
			
			const int sys_writev = 4146;
			
			
			const int sys_cacheflush = 4147;
			
			
			const int sys_setup = 4150;
			
			
			const int sys_getsid = 4151;
			
			
			const int sys_fdatasync = 4152;
			
			
			const int sys_sysctl = 4153;
			
			
			const int sys_mlock = 4154;
			
			
			const int sys_munlock = 4155;
			
			
			const int sys_mlockall = 4156;
			
			
			const int sys_munlockall = 4157;
			
			
			const int sys_sched_setparam = 4158;
			
			
			const int sys_sched_getparam = 4159;
			
			
			const int sys_sched_setscheduler = 4160;
			
			
			const int sys_sched_getscheduler = 4161;
			
			
			const int sys_sched_yield = 4162;
			
			
			const int sys_sched_get_priority_max = 4163;
			
			
			const int sys_sched_get_priority_min = 4164;
			
			
			const int sys_sched_rr_get_interval_time32 = 4165;
			
			
			const int sys_nanosleep_time32 = 4166;
			
			
			const int sys_mremap = 4167;
			
			
			const int sys_accept = 4168;
			
			
			const int sys_bind = 4169;
			
			
			const int sys_connect = 4170;
			
			
			const int sys_getpeername = 4171;
			
			
			const int sys_getsockname = 4172;
			
			
			const int sys_getsockopt = 4173;
			
			
			const int sys_listen = 4174;
			
			
			const int sys_recv = 4175;
			
			
			const int sys_recvfrom = 4176;
			
			
			const int sys_recvmsg = 4177;
			
			
			const int sys_send = 4178;
			
			
			const int sys_sendmsg = 4179;
			
			
			const int sys_sendto = 4180;
			
			
			const int sys_setsockopt = 4181;
			
			
			const int sys_shutdown = 4182;
			
			
			const int sys_socket = 4183;
			
			
			const int sys_socketpair = 4184;
			
			
			const int sys_setresuid = 4185;
			
			
			const int sys_getresuid = 4186;
			
			
			const int sys_query_module = 4187;
			
			
			const int sys_poll = 4188;
			
			
			const int sys_nfsservctl = 4189;
			
			
			const int sys_setresgid = 4190;
			
			
			const int sys_getresgid = 4191;
			
			
			const int sys_prctl = 4192;
			
			
			const int sys_rt_sigreturn = 4193;
			
			
			const int sys_rt_sigaction = 4194;
			
			
			const int sys_rt_sigprocmask = 4195;
			
			
			const int sys_rt_sigpending = 4196;
			
			
			const int sys_rt_sigtimedwait_time32 = 4197;
			
			
			const int sys_rt_sigqueueinfo = 4198;
			
			
			const int sys_rt_sigsuspend = 4199;
			
			
			const int sys_pread64 = 4200;
			
			
			const int sys_pwrite64 = 4201;
			
			
			const int sys_chown = 4202;
			
			
			const int sys_getcwd = 4203;
			
			
			const int sys_capget = 4204;
			
			
			const int sys_capset = 4205;
			
			
			const int sys_sigaltstack = 4206;
			
			
			const int sys_sendfile = 4207;
			
			
			const int mmap2 = 4210;
			
			
			const int sys_truncate64 = 4211;
			
			
			const int sys_ftruncate64 = 4212;
			
			
			const int sys_stat64 = 4213;
			
			
			const int sys_lstat64 = 4214;
			
			
			const int sys_fstat64 = 4215;
			
			
			const int sys_pivot_root = 4216;
			
			
			const int sys_mincore = 4217;
			
			
			const int sys_madvise = 4218;
			
			
			const int sys_getdents64 = 4219;
			
			
			const int sys_fcntl64 = 4220;
			
			
			const int sys_gettid = 4222;
			
			
			const int sys_readahead = 4223;
			
			
			const int sys_setxattr = 4224;
			
			
			const int sys_lsetxattr = 4225;
			
			
			const int sys_fsetxattr = 4226;
			
			
			const int sys_getxattr = 4227;
			
			
			const int sys_lgetxattr = 4228;
			
			
			const int sys_fgetxattr = 4229;
			
			
			const int sys_listxattr = 4230;
			
			
			const int sys_llistxattr = 4231;
			
			
			const int sys_flistxattr = 4232;
			
			
			const int sys_removexattr = 4233;
			
			
			const int sys_lremovexattr = 4234;
			
			
			const int sys_fremovexattr = 4235;
			
			
			const int sys_tkill = 4236;
			
			
			const int sys_sendfile64 = 4237;
			
			
			const int sys_futex_time32 = 4238;
			
			
			const int sys_sched_setaffinity = 4239;
			
			
			const int sys_sched_getaffinity = 4240;
			
			
			const int sys_io_setup = 4241;
			
			
			const int sys_io_destroy = 4242;
			
			
			const int sys_io_getevents_time32 = 4243;
			
			
			const int sys_io_submit = 4244;
			
			
			const int sys_io_cancel = 4245;
			
			
			const int sys_exit_group = 4246;
			
			
			const int sys_lookup_dcookie = 4247;
			
			
			const int sys_epoll_create = 4248;
			
			
			const int sys_epoll_ctl = 4249;
			
			
			const int sys_epoll_wait = 4250;
			
			
			const int sys_remap_file_pages = 4251;
			
			
			const int sys_set_tid_address = 4252;
			
			
			const int sys_restart_syscall = 4253;
			
			
			const int sys_fadvise64_64 = 4254;
			
			
			const int sys_statfs64 = 4255;
			
			
			const int sys_fstatfs64 = 4256;
			
			
			const int sys_timer_create = 4257;
			
			
			const int sys_timer_settime32 = 4258;
			
			
			const int sys_timer_gettime32 = 4259;
			
			
			const int sys_timer_getoverrun = 4260;
			
			
			const int sys_timer_delete = 4261;
			
			
			const int sys_clock_settime32 = 4262;
			
			
			const int sys_clock_gettime32 = 4263;
			
			
			const int sys_clock_getres_time32 = 4264;
			
			
			const int sys_clock_nanosleep_time32 = 4265;
			
			
			const int sys_tgkill = 4266;
			
			
			const int sys_utimes_time32 = 4267;
			
			
			const int sys_mbind = 4268;
			
			
			const int sys_get_mempolicy = 4269;
			
			
			const int sys_set_mempolicy = 4270;
			
			
			const int sys_mq_open = 4271;
			
			
			const int sys_mq_unlink = 4272;
			
			
			const int sys_mq_timedsend_time32 = 4273;
			
			
			const int sys_mq_timedreceive_time32 = 4274;
			
			
			const int sys_mq_notify = 4275;
			
			
			const int sys_mq_getsetattr = 4276;
			
			
			const int sys_waitid = 4278;
			
			
			const int sys_add_key = 4280;
			
			
			const int sys_request_key = 4281;
			
			
			const int sys_keyctl = 4282;
			
			
			const int set_thread_area = 4283;
			
			
			const int sys_inotify_init = 4284;
			
			
			const int sys_inotify_add_watch = 4285;
			
			
			const int sys_inotify_rm_watch = 4286;
			
			
			const int sys_migrate_pages = 4287;
			
			
			const int sys_openat = 4288;
			
			
			const int sys_mkdirat = 4289;
			
			
			const int sys_mknodat = 4290;
			
			
			const int sys_fchownat = 4291;
			
			
			const int sys_futimesat_time32 = 4292;
			
			
			const int sys_fstatat64 = 4293;
			
			
			const int sys_unlinkat = 4294;
			
			
			const int sys_renameat = 4295;
			
			
			const int sys_linkat = 4296;
			
			
			const int sys_symlinkat = 4297;
			
			
			const int sys_readlinkat = 4298;
			
			
			const int sys_fchmodat = 4299;
			
			
			const int sys_faccessat = 4300;
			
			
			const int sys_pselect6_time32 = 4301;
			
			
			const int sys_ppoll_time32 = 4302;
			
			
			const int sys_unshare = 4303;
			
			
			const int sys_splice = 4304;
			
			
			const int sys_sync_file_range = 4305;
			
			
			const int sys_tee = 4306;
			
			
			const int sys_vmsplice = 4307;
			
			
			const int sys_move_pages = 4308;
			
			
			const int sys_set_robust_list = 4309;
			
			
			const int sys_get_robust_list = 4310;
			
			
			const int sys_kexec_load = 4311;
			
			
			const int sys_getcpu = 4312;
			
			
			const int sys_epoll_pwait = 4313;
			
			
			const int sys_ioprio_set = 4314;
			
			
			const int sys_ioprio_get = 4315;
			
			
			const int sys_utimensat_time32 = 4316;
			
			
			const int sys_signalfd = 4317;
			
			
			const int sys_ni_syscall = 4318;
			
			
			const int sys_eventfd = 4319;
			
			
			const int sys_fallocate = 4320;
			
			
			const int sys_timerfd_create = 4321;
			
			
			const int sys_timerfd_gettime32 = 4322;
			
			
			const int sys_timerfd_settime32 = 4323;
			
			
			const int sys_signalfd4 = 4324;
			
			
			const int sys_eventfd2 = 4325;
			
			
			const int sys_epoll_create1 = 4326;
			
			
			const int sys_dup3 = 4327;
			
			
			const int sys_pipe2 = 4328;
			
			
			const int sys_inotify_init1 = 4329;
			
			
			const int sys_preadv = 4330;
			
			
			const int sys_pwritev = 4331;
			
			
			const int sys_rt_tgsigqueueinfo = 4332;
			
			
			const int sys_perf_event_open = 4333;
			
			
			const int sys_accept4 = 4334;
			
			
			const int sys_recvmmsg_time32 = 4335;
			
			
			const int sys_fanotify_init = 4336;
			
			
			const int sys_fanotify_mark = 4337;
			
			
			const int sys_prlimit64 = 4338;
			
			
			const int sys_name_to_handle_at = 4339;
			
			
			const int sys_open_by_handle_at = 4340;
			
			
			const int sys_clock_adjtime32 = 4341;
			
			
			const int sys_syncfs = 4342;
			
			
			const int sys_sendmmsg = 4343;
			
			
			const int sys_setns = 4344;
			
			
			const int sys_process_vm_readv = 4345;
			
			
			const int sys_process_vm_writev = 4346;
			
			
			const int sys_kcmp = 4347;
			
			
			const int sys_finit_module = 4348;
			
			
			const int sys_sched_setattr = 4349;
			
			
			const int sys_sched_getattr = 4350;
			
			
			const int sys_renameat2 = 4351;
			
			
			const int sys_seccomp = 4352;
			
			
			const int sys_getrandom = 4353;
			
			
			const int sys_memfd_create = 4354;
			
			
			const int sys_bpf = 4355;
			
			
			const int sys_execveat = 4356;
			
			
			const int sys_userfaultfd = 4357;
			
			
			const int sys_membarrier = 4358;
			
			
			const int sys_mlock2 = 4359;
			
			
			const int sys_copy_file_range = 4360;
			
			
			const int sys_preadv2 = 4361;
			
			
			const int sys_pwritev2 = 4362;
			
			
			const int sys_pkey_mprotect = 4363;
			
			
			const int sys_pkey_alloc = 4364;
			
			
			const int sys_pkey_free = 4365;
			
			
			const int sys_statx = 4366;
			
			
			const int sys_rseq = 4367;
			
			
			const int sys_io_pgetevents_time32 = 4368;
			
			
			const int sys_semget = 4393;
			
			
			const int sys_semctl = 4394;
			
			
			const int sys_shmget = 4395;
			
			
			const int sys_shmctl = 4396;
			
			
			const int sys_shmat = 4397;
			
			
			const int sys_shmdt = 4398;
			
			
			const int sys_msgget = 4399;
			
			
			const int sys_msgsnd = 4400;
			
			
			const int sys_msgrcv = 4401;
			
			
			const int sys_msgctl = 4402;
			
			
			const int sys_clock_gettime = 4403;
			
			
			const int sys_clock_settime = 4404;
			
			
			const int sys_clock_adjtime = 4405;
			
			
			const int sys_clock_getres = 4406;
			
			
			const int sys_clock_nanosleep = 4407;
			
			
			const int sys_timer_gettime = 4408;
			
			
			const int sys_timer_settime = 4409;
			
			
			const int sys_timerfd_gettime = 4410;
			
			
			const int sys_timerfd_settime = 4411;
			
			
			const int sys_utimensat = 4412;
			
			
			const int sys_pselect6 = 4413;
			
			
			const int sys_ppoll = 4414;
			
			
			const int sys_io_pgetevents = 4416;
			
			
			const int sys_recvmmsg = 4417;
			
			
			const int sys_mq_timedsend = 4418;
			
			
			const int sys_mq_timedreceive = 4419;
			
			
			const int sys_semtimedop = 4420;
			
			
			const int sys_rt_sigtimedwait = 4421;
			
			
			const int sys_futex = 4422;
			
			
			const int sys_sched_rr_get_interval = 4423;
			
			
			const int sys_pidfd_send_signal = 4424;
			
			
			const int sys_io_uring_setup = 4425;
			
			
			const int sys_io_uring_enter = 4426;
			
			
			const int sys_io_uring_register = 4427;
			
			
			const int sys_open_tree = 4428;
			
			
			const int sys_move_mount = 4429;
			
			
			const int sys_fsopen = 4430;
			
			
			const int sys_fsconfig = 4431;
			
			
			const int sys_fsmount = 4432;
			
			
			const int sys_fspick = 4433;
			
			
			const int sys_pidfd_open = 4434;
			
			
			const int sys_openat2 = 4437;
			
			
			const int sys_pidfd_getfd = 4438;
			
			
			const int sys_faccessat2 = 4439;
			
		}
	}
	// linux:mips64n32
	namespace linux {
		namespace mips64n32 {
			
			const int sys_read = 5000;
			
			
			const int sys_write = 5001;
			
			
			const int sys_open = 5002;
			
			
			const int sys_close = 5003;
			
			
			const int sys_newstat = 5004;
			
			
			const int sys_newfstat = 5005;
			
			
			const int sys_newlstat = 5006;
			
			
			const int sys_poll = 5007;
			
			
			const int sys_lseek = 5008;
			
			
			const int sys_old_mmap = 5009;
			
			
			const int sys_mprotect = 5010;
			
			
			const int sys_munmap = 5011;
			
			
			const int sys_brk = 5012;
			
			
			const int sys_rt_sigaction = 5013;
			
			
			const int sys_rt_sigprocmask = 5014;
			
			
			const int sys_ioctl = 5015;
			
			
			const int sys_pread64 = 5016;
			
			
			const int sys_pwrite64 = 5017;
			
			
			const int sys_readv = 5018;
			
			
			const int sys_writev = 5019;
			
			
			const int sys_access = 5020;
			
			
			const int sys_pipe = 5021;
			
			
			const int sys_select = 5022;
			
			
			const int sys_sched_yield = 5023;
			
			
			const int sys_mremap = 5024;
			
			
			const int sys_msync = 5025;
			
			
			const int sys_mincore = 5026;
			
			
			const int sys_madvise = 5027;
			
			
			const int sys_shmget = 5028;
			
			
			const int sys_shmat = 5029;
			
			
			const int sys_old_shmctl = 5030;
			
			
			const int sys_dup = 5031;
			
			
			const int sys_dup2 = 5032;
			
			
			const int sys_pause = 5033;
			
			
			const int sys_nanosleep = 5034;
			
			
			const int sys_getitimer = 5035;
			
			
			const int sys_setitimer = 5036;
			
			
			const int sys_alarm = 5037;
			
			
			const int sys_getpid = 5038;
			
			
			const int sys_sendfile64 = 5039;
			
			
			const int sys_socket = 5040;
			
			
			const int sys_connect = 5041;
			
			
			const int sys_accept = 5042;
			
			
			const int sys_sendto = 5043;
			
			
			const int sys_recvfrom = 5044;
			
			
			const int sys_sendmsg = 5045;
			
			
			const int sys_recvmsg = 5046;
			
			
			const int sys_shutdown = 5047;
			
			
			const int sys_bind = 5048;
			
			
			const int sys_listen = 5049;
			
			
			const int sys_getsockname = 5050;
			
			
			const int sys_getpeername = 5051;
			
			
			const int sys_socketpair = 5052;
			
			
			const int sys_setsockopt = 5053;
			
			
			const int sys_getsockopt = 5054;
			
			
			const int sys_clone = 5055;
			
			
			const int sys_fork = 5056;
			
			
			const int sys_execve = 5057;
			
			
			const int sys_exit = 5058;
			
			
			const int sys_wait4 = 5059;
			
			
			const int sys_kill = 5060;
			
			
			const int sys_newuname = 5061;
			
			
			const int sys_semget = 5062;
			
			
			const int sys_semop = 5063;
			
			
			const int sys_old_semctl = 5064;
			
			
			const int sys_shmdt = 5065;
			
			
			const int sys_msgget = 5066;
			
			
			const int sys_msgsnd = 5067;
			
			
			const int sys_msgrcv = 5068;
			
			
			const int sys_old_msgctl = 5069;
			
			
			const int sys_fcntl = 5070;
			
			
			const int sys_flock = 5071;
			
			
			const int sys_fsync = 5072;
			
			
			const int sys_fdatasync = 5073;
			
			
			const int sys_truncate = 5074;
			
			
			const int sys_ftruncate = 5075;
			
			
			const int sys_getdents = 5076;
			
			
			const int sys_getcwd = 5077;
			
			
			const int sys_chdir = 5078;
			
			
			const int sys_fchdir = 5079;
			
			
			const int sys_rename = 5080;
			
			
			const int sys_mkdir = 5081;
			
			
			const int sys_rmdir = 5082;
			
			
			const int sys_creat = 5083;
			
			
			const int sys_link = 5084;
			
			
			const int sys_unlink = 5085;
			
			
			const int sys_symlink = 5086;
			
			
			const int sys_readlink = 5087;
			
			
			const int sys_chmod = 5088;
			
			
			const int sys_fchmod = 5089;
			
			
			const int sys_chown = 5090;
			
			
			const int sys_fchown = 5091;
			
			
			const int sys_lchown = 5092;
			
			
			const int sys_umask = 5093;
			
			
			const int sys_gettimeofday = 5094;
			
			
			const int sys_getrlimit = 5095;
			
			
			const int sys_getrusage = 5096;
			
			
			const int sys_sysinfo = 5097;
			
			
			const int sys_times = 5098;
			
			
			const int sys_ptrace = 5099;
			
			
			const int sys_getuid = 5100;
			
			
			const int sys_syslog = 5101;
			
			
			const int sys_getgid = 5102;
			
			
			const int sys_setuid = 5103;
			
			
			const int sys_setgid = 5104;
			
			
			const int sys_geteuid = 5105;
			
			
			const int sys_getegid = 5106;
			
			
			const int sys_setpgid = 5107;
			
			
			const int sys_getppid = 5108;
			
			
			const int sys_getpgrp = 5109;
			
			
			const int sys_setsid = 5110;
			
			
			const int sys_setreuid = 5111;
			
			
			const int sys_setregid = 5112;
			
			
			const int sys_getgroups = 5113;
			
			
			const int sys_setgroups = 5114;
			
			
			const int sys_setresuid = 5115;
			
			
			const int sys_getresuid = 5116;
			
			
			const int sys_setresgid = 5117;
			
			
			const int sys_getresgid = 5118;
			
			
			const int sys_getpgid = 5119;
			
			
			const int sys_setfsuid = 5120;
			
			
			const int sys_setfsgid = 5121;
			
			
			const int sys_getsid = 5122;
			
			
			const int sys_capget = 5123;
			
			
			const int sys_capset = 5124;
			
			
			const int sys_rt_sigpending = 5125;
			
			
			const int sys_rt_sigtimedwait = 5126;
			
			
			const int sys_rt_sigqueueinfo = 5127;
			
			
			const int sys_rt_sigsuspend = 5128;
			
			
			const int sys_sigaltstack = 5129;
			
			
			const int sys_utime = 5130;
			
			
			const int sys_mknod = 5131;
			
			
			const int sys_personality = 5132;
			
			
			const int sys_ustat = 5133;
			
			
			const int sys_statfs = 5134;
			
			
			const int sys_fstatfs = 5135;
			
			
			const int sys_sysfs = 5136;
			
			
			const int sys_getpriority = 5137;
			
			
			const int sys_setpriority = 5138;
			
			
			const int sys_sched_setparam = 5139;
			
			
			const int sys_sched_getparam = 5140;
			
			
			const int sys_sched_setscheduler = 5141;
			
			
			const int sys_sched_getscheduler = 5142;
			
			
			const int sys_sched_get_priority_max = 5143;
			
			
			const int sys_sched_get_priority_min = 5144;
			
			
			const int sys_sched_rr_get_interval = 5145;
			
			
			const int sys_mlock = 5146;
			
			
			const int sys_munlock = 5147;
			
			
			const int sys_mlockall = 5148;
			
			
			const int sys_munlockall = 5149;
			
			
			const int sys_vhangup = 5150;
			
			
			const int sys_pivot_root = 5151;
			
			
			const int sys_sysctl = 5152;
			
			
			const int sys_prctl = 5153;
			
			
			const int sys_adjtimex = 5154;
			
			
			const int sys_setrlimit = 5155;
			
			
			const int sys_chroot = 5156;
			
			
			const int sys_sync = 5157;
			
			
			const int sys_acct = 5158;
			
			
			const int sys_settimeofday = 5159;
			
			
			const int sys_mount = 5160;
			
			
			const int sys_umount = 5161;
			
			
			const int sys_swapon = 5162;
			
			
			const int sys_swapoff = 5163;
			
			
			const int sys_reboot = 5164;
			
			
			const int sys_sethostname = 5165;
			
			
			const int sys_setdomainname = 5166;
			
			
			const int sys_ni_syscall = 5167;
			
			
			const int sys_init_module = 5168;
			
			
			const int sys_delete_module = 5169;
			
			
			const int sys_quotactl = 5172;
			
			
			const int sys_gettid = 5178;
			
			
			const int sys_readahead = 5179;
			
			
			const int sys_setxattr = 5180;
			
			
			const int sys_lsetxattr = 5181;
			
			
			const int sys_fsetxattr = 5182;
			
			
			const int sys_getxattr = 5183;
			
			
			const int sys_lgetxattr = 5184;
			
			
			const int sys_fgetxattr = 5185;
			
			
			const int sys_listxattr = 5186;
			
			
			const int sys_llistxattr = 5187;
			
			
			const int sys_flistxattr = 5188;
			
			
			const int sys_removexattr = 5189;
			
			
			const int sys_lremovexattr = 5190;
			
			
			const int sys_fremovexattr = 5191;
			
			
			const int sys_tkill = 5192;
			
			
			const int sys_futex = 5194;
			
			
			const int sys_sched_setaffinity = 5195;
			
			
			const int sys_sched_getaffinity = 5196;
			
			
			const int sys_io_setup = 5200;
			
			
			const int sys_io_destroy = 5201;
			
			
			const int sys_io_getevents = 5202;
			
			
			const int sys_io_submit = 5203;
			
			
			const int sys_io_cancel = 5204;
			
			
			const int sys_exit_group = 5205;
			
			
			const int sys_lookup_dcookie = 5206;
			
			
			const int sys_epoll_create = 5207;
			
			
			const int sys_epoll_ctl = 5208;
			
			
			const int sys_epoll_wait = 5209;
			
			
			const int sys_remap_file_pages = 5210;
			
			
			const int sys_rt_sigreturn = 5211;
			
			
			const int sys_set_tid_address = 5212;
			
			
			const int sys_restart_syscall = 5213;
			
			
			const int sys_semtimedop = 5214;
			
			
			const int sys_fadvise64_64 = 5215;
			
			
			const int sys_timer_create = 5216;
			
			
			const int sys_timer_settime = 5217;
			
			
			const int sys_timer_gettime = 5218;
			
			
			const int sys_timer_getoverrun = 5219;
			
			
			const int sys_timer_delete = 5220;
			
			
			const int sys_clock_settime = 5221;
			
			
			const int sys_clock_gettime = 5222;
			
			
			const int sys_clock_getres = 5223;
			
			
			const int sys_clock_nanosleep = 5224;
			
			
			const int sys_tgkill = 5225;
			
			
			const int sys_utimes = 5226;
			
			
			const int sys_mbind = 5227;
			
			
			const int sys_get_mempolicy = 5228;
			
			
			const int sys_set_mempolicy = 5229;
			
			
			const int sys_mq_open = 5230;
			
			
			const int sys_mq_unlink = 5231;
			
			
			const int sys_mq_timedsend = 5232;
			
			
			const int sys_mq_timedreceive = 5233;
			
			
			const int sys_mq_notify = 5234;
			
			
			const int sys_mq_getsetattr = 5235;
			
			
			const int sys_waitid = 5237;
			
			
			const int sys_add_key = 5239;
			
			
			const int sys_request_key = 5240;
			
			
			const int sys_keyctl = 5241;
			
			
			const int sys_inotify_init = 5243;
			
			
			const int sys_inotify_add_watch = 5244;
			
			
			const int sys_inotify_rm_watch = 5245;
			
			
			const int sys_migrate_pages = 5246;
			
			
			const int sys_openat = 5247;
			
			
			const int sys_mkdirat = 5248;
			
			
			const int sys_mknodat = 5249;
			
			
			const int sys_fchownat = 5250;
			
			
			const int sys_futimesat = 5251;
			
			
			const int sys_newfstatat = 5252;
			
			
			const int sys_unlinkat = 5253;
			
			
			const int sys_renameat = 5254;
			
			
			const int sys_linkat = 5255;
			
			
			const int sys_symlinkat = 5256;
			
			
			const int sys_readlinkat = 5257;
			
			
			const int sys_fchmodat = 5258;
			
			
			const int sys_faccessat = 5259;
			
			
			const int sys_pselect6 = 5260;
			
			
			const int sys_ppoll = 5261;
			
			
			const int sys_unshare = 5262;
			
			
			const int sys_splice = 5263;
			
			
			const int sys_sync_file_range = 5264;
			
			
			const int sys_tee = 5265;
			
			
			const int sys_vmsplice = 5266;
			
			
			const int sys_move_pages = 5267;
			
			
			const int sys_set_robust_list = 5268;
			
			
			const int sys_get_robust_list = 5269;
			
			
			const int sys_kexec_load = 5270;
			
			
			const int sys_getcpu = 5271;
			
			
			const int sys_epoll_pwait = 5272;
			
			
			const int sys_ioprio_set = 5273;
			
			
			const int sys_ioprio_get = 5274;
			
			
			const int sys_utimensat = 5275;
			
			
			const int sys_signalfd = 5276;
			
			
			const int sys_eventfd = 5278;
			
			
			const int sys_fallocate = 5279;
			
			
			const int sys_timerfd_create = 5280;
			
			
			const int sys_timerfd_gettime = 5281;
			
			
			const int sys_timerfd_settime = 5282;
			
			
			const int sys_signalfd4 = 5283;
			
			
			const int sys_eventfd2 = 5284;
			
			
			const int sys_epoll_create1 = 5285;
			
			
			const int sys_dup3 = 5286;
			
			
			const int sys_pipe2 = 5287;
			
			
			const int sys_inotify_init1 = 5288;
			
			
			const int sys_preadv = 5289;
			
			
			const int sys_pwritev = 5290;
			
			
			const int sys_rt_tgsigqueueinfo = 5291;
			
			
			const int sys_perf_event_open = 5292;
			
			
			const int sys_accept4 = 5293;
			
			
			const int sys_recvmmsg = 5294;
			
			
			const int sys_fanotify_init = 5295;
			
			
			const int sys_fanotify_mark = 5296;
			
			
			const int sys_prlimit64 = 5297;
			
			
			const int sys_name_to_handle_at = 5298;
			
			
			const int sys_open_by_handle_at = 5299;
			
			
			const int sys_clock_adjtime = 5300;
			
			
			const int sys_syncfs = 5301;
			
			
			const int sys_sendmmsg = 5302;
			
			
			const int sys_setns = 5303;
			
			
			const int sys_process_vm_readv = 5304;
			
			
			const int sys_process_vm_writev = 5305;
			
			
			const int sys_kcmp = 5306;
			
			
			const int sys_finit_module = 5307;
			
			
			const int sys_getdents64 = 5308;
			
			
			const int sys_sched_setattr = 5309;
			
			
			const int sys_sched_getattr = 5310;
			
			
			const int sys_renameat2 = 5311;
			
			
			const int sys_seccomp = 5312;
			
			
			const int sys_getrandom = 5313;
			
			
			const int sys_memfd_create = 5314;
			
			
			const int sys_bpf = 5315;
			
			
			const int sys_execveat = 5316;
			
			
			const int sys_userfaultfd = 5317;
			
			
			const int sys_membarrier = 5318;
			
			
			const int sys_mlock2 = 5319;
			
			
			const int sys_copy_file_range = 5320;
			
			
			const int sys_preadv2 = 5321;
			
			
			const int sys_pwritev2 = 5322;
			
			
			const int sys_pkey_mprotect = 5323;
			
			
			const int sys_pkey_alloc = 5324;
			
			
			const int sys_pkey_free = 5325;
			
			
			const int sys_statx = 5326;
			
			
			const int sys_rseq = 5327;
			
			
			const int sys_io_pgetevents = 5328;
			
			
			const int sys_pidfd_send_signal = 5424;
			
			
			const int sys_io_uring_setup = 5425;
			
			
			const int sys_io_uring_enter = 5426;
			
			
			const int sys_io_uring_register = 5427;
			
			
			const int sys_open_tree = 5428;
			
			
			const int sys_move_mount = 5429;
			
			
			const int sys_fsopen = 5430;
			
			
			const int sys_fsconfig = 5431;
			
			
			const int sys_fsmount = 5432;
			
			
			const int sys_fspick = 5433;
			
			
			const int sys_pidfd_open = 5434;
			
			
			const int sys_clone3 = 5435;
			
			
			const int sys_openat2 = 5437;
			
			
			const int sys_pidfd_getfd = 5438;
			
			
			const int sys_faccessat2 = 5439;
			
		}
	}
	// linux:mips64
	namespace linux {
		namespace mips64 {
			
			const int sys_exit = 4001;
			
			
			const int sys_fork = 4002;
			
			
			const int sys_read = 4003;
			
			
			const int sys_write = 4004;
			
			
			const int sys_open = 4005;
			
			
			const int sys_close = 4006;
			
			
			const int sys_waitpid = 4007;
			
			
			const int sys_creat = 4008;
			
			
			const int sys_link = 4009;
			
			
			const int sys_unlink = 4010;
			
			
			const int sys_execve = 4011;
			
			
			const int sys_chdir = 4012;
			
			
			const int sys_time32 = 4013;
			
			
			const int sys_mknod = 4014;
			
			
			const int sys_chmod = 4015;
			
			
			const int sys_lchown = 4016;
			
			
			const int sys_stat = 4018;
			
			
			const int sys_lseek = 4019;
			
			
			const int sys_getpid = 4020;
			
			
			const int sys_mount = 4021;
			
			
			const int sys_oldumount = 4022;
			
			
			const int sys_setuid = 4023;
			
			
			const int sys_getuid = 4024;
			
			
			const int sys_stime32 = 4025;
			
			
			const int sys_ptrace = 4026;
			
			
			const int sys_alarm = 4027;
			
			
			const int sys_fstat = 4028;
			
			
			const int sys_pause = 4029;
			
			
			const int sys_utime32 = 4030;
			
			
			const int sys_access = 4033;
			
			
			const int sys_nice = 4034;
			
			
			const int sys_sync = 4036;
			
			
			const int sys_kill = 4037;
			
			
			const int sys_rename = 4038;
			
			
			const int sys_mkdir = 4039;
			
			
			const int sys_rmdir = 4040;
			
			
			const int sys_dup = 4041;
			
			
			const int sys_pipe = 4042;
			
			
			const int sys_times = 4043;
			
			
			const int sys_brk = 4045;
			
			
			const int sys_setgid = 4046;
			
			
			const int sys_getgid = 4047;
			
			
			const int sys_signal = 4048;
			
			
			const int sys_geteuid = 4049;
			
			
			const int sys_getegid = 4050;
			
			
			const int sys_acct = 4051;
			
			
			const int sys_umount = 4052;
			
			
			const int sys_ioctl = 4054;
			
			
			const int sys_fcntl = 4055;
			
			
			const int sys_setpgid = 4057;
			
			
			const int sys_olduname = 4059;
			
			
			const int sys_umask = 4060;
			
			
			const int sys_chroot = 4061;
			
			
			const int sys_ustat = 4062;
			
			
			const int sys_dup2 = 4063;
			
			
			const int sys_getppid = 4064;
			
			
			const int sys_getpgrp = 4065;
			
			
			const int sys_setsid = 4066;
			
			
			const int sys_sigaction = 4067;
			
			
			const int sys_sgetmask = 4068;
			
			
			const int sys_ssetmask = 4069;
			
			
			const int sys_setreuid = 4070;
			
			
			const int sys_setregid = 4071;
			
			
			const int sys_sigsuspend = 4072;
			
			
			const int sys_sigpending = 4073;
			
			
			const int sys_sethostname = 4074;
			
			
			const int sys_setrlimit = 4075;
			
			
			const int sys_getrlimit = 4076;
			
			
			const int sys_getrusage = 4077;
			
			
			const int sys_gettimeofday = 4078;
			
			
			const int sys_settimeofday = 4079;
			
			
			const int sys_getgroups = 4080;
			
			
			const int sys_setgroups = 4081;
			
			
			const int sys_symlink = 4083;
			
			
			const int sys_lstat = 4084;
			
			
			const int sys_readlink = 4085;
			
			
			const int sys_uselib = 4086;
			
			
			const int sys_swapon = 4087;
			
			
			const int sys_reboot = 4088;
			
			
			const int sys_old_readdir = 4089;
			
			
			const int sys_mmap = 4090;
			
			
			const int sys_munmap = 4091;
			
			
			const int sys_truncate = 4092;
			
			
			const int sys_ftruncate = 4093;
			
			
			const int sys_fchmod = 4094;
			
			
			const int sys_fchown = 4095;
			
			
			const int sys_getpriority = 4096;
			
			
			const int sys_setpriority = 4097;
			
			
			const int sys_statfs = 4099;
			
			
			const int sys_fstatfs = 4100;
			
			
			const int sys_ioperm = 4101;
			
			
			const int sys_socketcall = 4102;
			
			
			const int sys_syslog = 4103;
			
			
			const int sys_setitimer = 4104;
			
			
			const int sys_getitimer = 4105;
			
			
			const int sys_newstat = 4106;
			
			
			const int sys_newlstat = 4107;
			
			
			const int sys_newfstat = 4108;
			
			
			const int sys_uname = 4109;
			
			
			const int sys_iopl = 4110;
			
			
			const int sys_vhangup = 4111;
			
			
			const int sys_idle = 4112;
			
			
			const int sys_wait4 = 4114;
			
			
			const int sys_swapoff = 4115;
			
			
			const int sys_sysinfo = 4116;
			
			
			const int sys_ipc = 4117;
			
			
			const int sys_fsync = 4118;
			
			
			const int sys_sigreturn = 4119;
			
			
			const int sys_clone = 4120;
			
			
			const int sys_setdomainname = 4121;
			
			
			const int sys_newuname = 4122;
			
			
			const int modify_ldt = 4123;
			
			
			const int sys_adjtimex_time32 = 4124;
			
			
			const int sys_mprotect = 4125;
			
			
			const int sys_sigprocmask = 4126;
			
			
			const int create_module = 4127;
			
			
			const int sys_init_module = 4128;
			
			
			const int sys_delete_module = 4129;
			
			
			const int get_kernel_syms = 4130;
			
			
			const int sys_quotactl = 4131;
			
			
			const int sys_getpgid = 4132;
			
			
			const int sys_fchdir = 4133;
			
			
			const int sys_bdflush = 4134;
			
			
			const int sys_sysfs = 4135;
			
			
			const int sys_personality = 4136;
			
			
			const int sys_setfsuid = 4138;
			
			
			const int sys_setfsgid = 4139;
			
			
			const int sys_llseek = 4140;
			
			
			const int sys_getdents = 4141;
			
			
			const int sys_select = 4142;
			
			
			const int sys_flock = 4143;
			
			
			const int sys_msync = 4144;
			
			
			const int sys_readv = 4145;
			
			
			const int sys_writev = 4146;
			
			
			const int sys_cacheflush = 4147;
			
			
			const int sys_setup = 4150;
			
			
			const int sys_getsid = 4151;
			
			
			const int sys_fdatasync = 4152;
			
			
			const int sys_sysctl = 4153;
			
			
			const int sys_mlock = 4154;
			
			
			const int sys_munlock = 4155;
			
			
			const int sys_mlockall = 4156;
			
			
			const int sys_munlockall = 4157;
			
			
			const int sys_sched_setparam = 4158;
			
			
			const int sys_sched_getparam = 4159;
			
			
			const int sys_sched_setscheduler = 4160;
			
			
			const int sys_sched_getscheduler = 4161;
			
			
			const int sys_sched_yield = 4162;
			
			
			const int sys_sched_get_priority_max = 4163;
			
			
			const int sys_sched_get_priority_min = 4164;
			
			
			const int sys_sched_rr_get_interval_time32 = 4165;
			
			
			const int sys_nanosleep_time32 = 4166;
			
			
			const int sys_mremap = 4167;
			
			
			const int sys_accept = 4168;
			
			
			const int sys_bind = 4169;
			
			
			const int sys_connect = 4170;
			
			
			const int sys_getpeername = 4171;
			
			
			const int sys_getsockname = 4172;
			
			
			const int sys_getsockopt = 4173;
			
			
			const int sys_listen = 4174;
			
			
			const int sys_recv = 4175;
			
			
			const int sys_recvfrom = 4176;
			
			
			const int sys_recvmsg = 4177;
			
			
			const int sys_send = 4178;
			
			
			const int sys_sendmsg = 4179;
			
			
			const int sys_sendto = 4180;
			
			
			const int sys_setsockopt = 4181;
			
			
			const int sys_shutdown = 4182;
			
			
			const int sys_socket = 4183;
			
			
			const int sys_socketpair = 4184;
			
			
			const int sys_setresuid = 4185;
			
			
			const int sys_getresuid = 4186;
			
			
			const int sys_query_module = 4187;
			
			
			const int sys_poll = 4188;
			
			
			const int sys_nfsservctl = 4189;
			
			
			const int sys_setresgid = 4190;
			
			
			const int sys_getresgid = 4191;
			
			
			const int sys_prctl = 4192;
			
			
			const int sys_rt_sigreturn = 4193;
			
			
			const int sys_rt_sigaction = 4194;
			
			
			const int sys_rt_sigprocmask = 4195;
			
			
			const int sys_rt_sigpending = 4196;
			
			
			const int sys_rt_sigtimedwait_time32 = 4197;
			
			
			const int sys_rt_sigqueueinfo = 4198;
			
			
			const int sys_rt_sigsuspend = 4199;
			
			
			const int sys_pread64 = 4200;
			
			
			const int sys_pwrite64 = 4201;
			
			
			const int sys_chown = 4202;
			
			
			const int sys_getcwd = 4203;
			
			
			const int sys_capget = 4204;
			
			
			const int sys_capset = 4205;
			
			
			const int sys_sigaltstack = 4206;
			
			
			const int sys_sendfile = 4207;
			
			
			const int mmap2 = 4210;
			
			
			const int sys_truncate64 = 4211;
			
			
			const int sys_ftruncate64 = 4212;
			
			
			const int sys_stat64 = 4213;
			
			
			const int sys_lstat64 = 4214;
			
			
			const int sys_fstat64 = 4215;
			
			
			const int sys_pivot_root = 4216;
			
			
			const int sys_mincore = 4217;
			
			
			const int sys_madvise = 4218;
			
			
			const int sys_getdents64 = 4219;
			
			
			const int sys_fcntl64 = 4220;
			
			
			const int sys_gettid = 4222;
			
			
			const int sys_readahead = 4223;
			
			
			const int sys_setxattr = 4224;
			
			
			const int sys_lsetxattr = 4225;
			
			
			const int sys_fsetxattr = 4226;
			
			
			const int sys_getxattr = 4227;
			
			
			const int sys_lgetxattr = 4228;
			
			
			const int sys_fgetxattr = 4229;
			
			
			const int sys_listxattr = 4230;
			
			
			const int sys_llistxattr = 4231;
			
			
			const int sys_flistxattr = 4232;
			
			
			const int sys_removexattr = 4233;
			
			
			const int sys_lremovexattr = 4234;
			
			
			const int sys_fremovexattr = 4235;
			
			
			const int sys_tkill = 4236;
			
			
			const int sys_sendfile64 = 4237;
			
			
			const int sys_futex_time32 = 4238;
			
			
			const int sys_sched_setaffinity = 4239;
			
			
			const int sys_sched_getaffinity = 4240;
			
			
			const int sys_io_setup = 4241;
			
			
			const int sys_io_destroy = 4242;
			
			
			const int sys_io_getevents_time32 = 4243;
			
			
			const int sys_io_submit = 4244;
			
			
			const int sys_io_cancel = 4245;
			
			
			const int sys_exit_group = 4246;
			
			
			const int sys_lookup_dcookie = 4247;
			
			
			const int sys_epoll_create = 4248;
			
			
			const int sys_epoll_ctl = 4249;
			
			
			const int sys_epoll_wait = 4250;
			
			
			const int sys_remap_file_pages = 4251;
			
			
			const int sys_set_tid_address = 4252;
			
			
			const int sys_restart_syscall = 4253;
			
			
			const int sys_fadvise64_64 = 4254;
			
			
			const int sys_statfs64 = 4255;
			
			
			const int sys_fstatfs64 = 4256;
			
			
			const int sys_timer_create = 4257;
			
			
			const int sys_timer_settime32 = 4258;
			
			
			const int sys_timer_gettime32 = 4259;
			
			
			const int sys_timer_getoverrun = 4260;
			
			
			const int sys_timer_delete = 4261;
			
			
			const int sys_clock_settime32 = 4262;
			
			
			const int sys_clock_gettime32 = 4263;
			
			
			const int sys_clock_getres_time32 = 4264;
			
			
			const int sys_clock_nanosleep_time32 = 4265;
			
			
			const int sys_tgkill = 4266;
			
			
			const int sys_utimes_time32 = 4267;
			
			
			const int sys_mbind = 4268;
			
			
			const int sys_get_mempolicy = 4269;
			
			
			const int sys_set_mempolicy = 4270;
			
			
			const int sys_mq_open = 4271;
			
			
			const int sys_mq_unlink = 4272;
			
			
			const int sys_mq_timedsend_time32 = 4273;
			
			
			const int sys_mq_timedreceive_time32 = 4274;
			
			
			const int sys_mq_notify = 4275;
			
			
			const int sys_mq_getsetattr = 4276;
			
			
			const int sys_waitid = 4278;
			
			
			const int sys_add_key = 4280;
			
			
			const int sys_request_key = 4281;
			
			
			const int sys_keyctl = 4282;
			
			
			const int set_thread_area = 4283;
			
			
			const int sys_inotify_init = 4284;
			
			
			const int sys_inotify_add_watch = 4285;
			
			
			const int sys_inotify_rm_watch = 4286;
			
			
			const int sys_migrate_pages = 4287;
			
			
			const int sys_openat = 4288;
			
			
			const int sys_mkdirat = 4289;
			
			
			const int sys_mknodat = 4290;
			
			
			const int sys_fchownat = 4291;
			
			
			const int sys_futimesat_time32 = 4292;
			
			
			const int sys_fstatat64 = 4293;
			
			
			const int sys_unlinkat = 4294;
			
			
			const int sys_renameat = 4295;
			
			
			const int sys_linkat = 4296;
			
			
			const int sys_symlinkat = 4297;
			
			
			const int sys_readlinkat = 4298;
			
			
			const int sys_fchmodat = 4299;
			
			
			const int sys_faccessat = 4300;
			
			
			const int sys_pselect6_time32 = 4301;
			
			
			const int sys_ppoll_time32 = 4302;
			
			
			const int sys_unshare = 4303;
			
			
			const int sys_splice = 4304;
			
			
			const int sys_sync_file_range = 4305;
			
			
			const int sys_tee = 4306;
			
			
			const int sys_vmsplice = 4307;
			
			
			const int sys_move_pages = 4308;
			
			
			const int sys_set_robust_list = 4309;
			
			
			const int sys_get_robust_list = 4310;
			
			
			const int sys_kexec_load = 4311;
			
			
			const int sys_getcpu = 4312;
			
			
			const int sys_epoll_pwait = 4313;
			
			
			const int sys_ioprio_set = 4314;
			
			
			const int sys_ioprio_get = 4315;
			
			
			const int sys_utimensat_time32 = 4316;
			
			
			const int sys_signalfd = 4317;
			
			
			const int sys_ni_syscall = 4318;
			
			
			const int sys_eventfd = 4319;
			
			
			const int sys_fallocate = 4320;
			
			
			const int sys_timerfd_create = 4321;
			
			
			const int sys_timerfd_gettime32 = 4322;
			
			
			const int sys_timerfd_settime32 = 4323;
			
			
			const int sys_signalfd4 = 4324;
			
			
			const int sys_eventfd2 = 4325;
			
			
			const int sys_epoll_create1 = 4326;
			
			
			const int sys_dup3 = 4327;
			
			
			const int sys_pipe2 = 4328;
			
			
			const int sys_inotify_init1 = 4329;
			
			
			const int sys_preadv = 4330;
			
			
			const int sys_pwritev = 4331;
			
			
			const int sys_rt_tgsigqueueinfo = 4332;
			
			
			const int sys_perf_event_open = 4333;
			
			
			const int sys_accept4 = 4334;
			
			
			const int sys_recvmmsg_time32 = 4335;
			
			
			const int sys_fanotify_init = 4336;
			
			
			const int sys_fanotify_mark = 4337;
			
			
			const int sys_prlimit64 = 4338;
			
			
			const int sys_name_to_handle_at = 4339;
			
			
			const int sys_open_by_handle_at = 4340;
			
			
			const int sys_clock_adjtime32 = 4341;
			
			
			const int sys_syncfs = 4342;
			
			
			const int sys_sendmmsg = 4343;
			
			
			const int sys_setns = 4344;
			
			
			const int sys_process_vm_readv = 4345;
			
			
			const int sys_process_vm_writev = 4346;
			
			
			const int sys_kcmp = 4347;
			
			
			const int sys_finit_module = 4348;
			
			
			const int sys_sched_setattr = 4349;
			
			
			const int sys_sched_getattr = 4350;
			
			
			const int sys_renameat2 = 4351;
			
			
			const int sys_seccomp = 4352;
			
			
			const int sys_getrandom = 4353;
			
			
			const int sys_memfd_create = 4354;
			
			
			const int sys_bpf = 4355;
			
			
			const int sys_execveat = 4356;
			
			
			const int sys_userfaultfd = 4357;
			
			
			const int sys_membarrier = 4358;
			
			
			const int sys_mlock2 = 4359;
			
			
			const int sys_copy_file_range = 4360;
			
			
			const int sys_preadv2 = 4361;
			
			
			const int sys_pwritev2 = 4362;
			
			
			const int sys_pkey_mprotect = 4363;
			
			
			const int sys_pkey_alloc = 4364;
			
			
			const int sys_pkey_free = 4365;
			
			
			const int sys_statx = 4366;
			
			
			const int sys_rseq = 4367;
			
			
			const int sys_io_pgetevents_time32 = 4368;
			
			
			const int sys_semget = 4393;
			
			
			const int sys_semctl = 4394;
			
			
			const int sys_shmget = 4395;
			
			
			const int sys_shmctl = 4396;
			
			
			const int sys_shmat = 4397;
			
			
			const int sys_shmdt = 4398;
			
			
			const int sys_msgget = 4399;
			
			
			const int sys_msgsnd = 4400;
			
			
			const int sys_msgrcv = 4401;
			
			
			const int sys_msgctl = 4402;
			
			
			const int sys_clock_gettime = 4403;
			
			
			const int sys_clock_settime = 4404;
			
			
			const int sys_clock_adjtime = 4405;
			
			
			const int sys_clock_getres = 4406;
			
			
			const int sys_clock_nanosleep = 4407;
			
			
			const int sys_timer_gettime = 4408;
			
			
			const int sys_timer_settime = 4409;
			
			
			const int sys_timerfd_gettime = 4410;
			
			
			const int sys_timerfd_settime = 4411;
			
			
			const int sys_utimensat = 4412;
			
			
			const int sys_pselect6 = 4413;
			
			
			const int sys_ppoll = 4414;
			
			
			const int sys_io_pgetevents = 4416;
			
			
			const int sys_recvmmsg = 4417;
			
			
			const int sys_mq_timedsend = 4418;
			
			
			const int sys_mq_timedreceive = 4419;
			
			
			const int sys_semtimedop = 4420;
			
			
			const int sys_rt_sigtimedwait = 4421;
			
			
			const int sys_futex = 4422;
			
			
			const int sys_sched_rr_get_interval = 4423;
			
			
			const int sys_pidfd_send_signal = 4424;
			
			
			const int sys_io_uring_setup = 4425;
			
			
			const int sys_io_uring_enter = 4426;
			
			
			const int sys_io_uring_register = 4427;
			
			
			const int sys_open_tree = 4428;
			
			
			const int sys_move_mount = 4429;
			
			
			const int sys_fsopen = 4430;
			
			
			const int sys_fsconfig = 4431;
			
			
			const int sys_fsmount = 4432;
			
			
			const int sys_fspick = 4433;
			
			
			const int sys_pidfd_open = 4434;
			
			
			const int sys_openat2 = 4437;
			
			
			const int sys_pidfd_getfd = 4438;
			
			
			const int sys_faccessat2 = 4439;
			
			
			const int sys_old_mmap = 5009;
			
			
			const int sys_old_shmctl = 5030;
			
			
			const int sys_nanosleep = 5034;
			
			
			const int sys_semop = 5063;
			
			
			const int sys_old_semctl = 5064;
			
			
			const int sys_old_msgctl = 5069;
			
			
			const int sys_utime = 5130;
			
			
			const int sys_adjtimex = 5154;
			
			
			const int sys_io_getevents = 5202;
			
			
			const int sys_utimes = 5226;
			
			
			const int sys_futimesat = 5251;
			
			
			const int sys_newfstatat = 5252;
			
			
			const int sys_clone3 = 5435;
			
			
			const int sys_semtimedop_time32 = 6215;
			
		}
	}
	// windows_2000:x86
	namespace windows_2000 {
		namespace x86 {
			
			const int NtAcceptConnectPort = 0;
			
			
			const int NtAccessCheck = 1;
			
			
			const int NtAccessCheckAndAuditAlarm = 2;
			
			
			const int NtAccessCheckByType = 3;
			
			
			const int NtAccessCheckByTypeAndAuditAlarm = 4;
			
			
			const int NtAccessCheckByTypeResultList = 5;
			
			
			const int NtAccessCheckByTypeResultListAndAuditAlarm = 6;
			
			
			const int NtAccessCheckByTypeResultListAndAuditAlarmByHandle = 7;
			
			
			const int NtAddAtom = 8;
			
			
			const int NtAdjustGroupsToken = 9;
			
			
			const int NtAdjustPrivilegesToken = 10;
			
			
			const int NtAlertResumeThread = 11;
			
			
			const int NtAlertThread = 12;
			
			
			const int NtAllocateLocallyUniqueId = 13;
			
			
			const int NtAllocateUserPhysicalPages = 14;
			
			
			const int NtAllocateUuids = 15;
			
			
			const int NtAllocateVirtualMemory = 16;
			
			
			const int NtAreMappedFilesTheSame = 17;
			
			
			const int NtAssignProcessToJobObject = 18;
			
			
			const int NtCallbackReturn = 19;
			
			
			const int NtCancelIoFile = 20;
			
			
			const int NtCancelTimer = 21;
			
			
			const int NtClearEvent = 23;
			
			
			const int NtClose = 24;
			
			
			const int NtCloseObjectAuditAlarm = 25;
			
			
			const int NtCompleteConnectPort = 26;
			
			
			const int NtConnectPort = 27;
			
			
			const int NtContinue = 28;
			
			
			const int NtCreateDirectoryObject = 29;
			
			
			const int NtCreateEvent = 30;
			
			
			const int NtCreateEventPair = 31;
			
			
			const int NtCreateFile = 32;
			
			
			const int NtCreateIoCompletion = 33;
			
			
			const int NtCreateJobObject = 34;
			
			
			const int NtCreateKey = 35;
			
			
			const int NtCreateMailslotFile = 36;
			
			
			const int NtCreateMutant = 37;
			
			
			const int NtCreateNamedPipeFile = 38;
			
			
			const int NtCreatePagingFile = 39;
			
			
			const int NtCreatePort = 40;
			
			
			const int NtCreateProcess = 41;
			
			
			const int NtCreateProfile = 42;
			
			
			const int NtCreateSection = 43;
			
			
			const int NtCreateSemaphore = 44;
			
			
			const int NtCreateSymbolicLinkObject = 45;
			
			
			const int NtCreateThread = 46;
			
			
			const int NtCreateTimer = 47;
			
			
			const int NtCreateToken = 48;
			
			
			const int NtCreateWaitablePort = 49;
			
			
			const int NtDelayExecution = 50;
			
			
			const int NtDeleteAtom = 51;
			
			
			const int NtDeleteFile = 52;
			
			
			const int NtDeleteKey = 53;
			
			
			const int NtDeleteObjectAuditAlarm = 54;
			
			
			const int NtDeleteValueKey = 55;
			
			
			const int NtDeviceIoControlFile = 56;
			
			
			const int NtDisplayString = 57;
			
			
			const int NtDuplicateObject = 58;
			
			
			const int NtDuplicateToken = 59;
			
			
			const int NtEnumerateKey = 60;
			
			
			const int NtEnumerateValueKey = 61;
			
			
			const int NtExtendSection = 62;
			
			
			const int NtFilterToken = 63;
			
			
			const int NtFindAtom = 64;
			
			
			const int NtFlushBuffersFile = 65;
			
			
			const int NtFlushInstructionCache = 66;
			
			
			const int NtFlushKey = 67;
			
			
			const int NtFlushVirtualMemory = 68;
			
			
			const int NtFlushWriteBuffer = 69;
			
			
			const int NtFreeUserPhysicalPages = 70;
			
			
			const int NtFreeVirtualMemory = 71;
			
			
			const int NtFsControlFile = 72;
			
			
			const int NtGetContextThread = 73;
			
			
			const int NtGetDevicePowerState = 74;
			
			
			const int NtGetPlugPlayEvent = 75;
			
			
			const int NtGetWriteWatch = 77;
			
			
			const int NtImpersonateAnonymousToken = 78;
			
			
			const int NtImpersonateClientOfPort = 79;
			
			
			const int NtImpersonateThread = 80;
			
			
			const int NtInitializeRegistry = 81;
			
			
			const int NtInitiatePowerAction = 82;
			
			
			const int NtIsSystemResumeAutomatic = 83;
			
			
			const int NtListenPort = 84;
			
			
			const int NtLoadDriver = 85;
			
			
			const int NtLoadKey = 86;
			
			
			const int NtLoadKey2 = 87;
			
			
			const int NtLockFile = 88;
			
			
			const int NtLockVirtualMemory = 89;
			
			
			const int NtMakeTemporaryObject = 90;
			
			
			const int NtMapUserPhysicalPages = 91;
			
			
			const int NtMapUserPhysicalPagesScatter = 92;
			
			
			const int NtMapViewOfSection = 93;
			
			
			const int NtNotifyChangeDirectoryFile = 94;
			
			
			const int NtNotifyChangeKey = 95;
			
			
			const int NtNotifyChangeMultipleKeys = 96;
			
			
			const int NtOpenDirectoryObject = 97;
			
			
			const int NtOpenEvent = 98;
			
			
			const int NtOpenEventPair = 99;
			
			
			const int NtOpenFile = 100;
			
			
			const int NtOpenIoCompletion = 101;
			
			
			const int NtOpenJobObject = 102;
			
			
			const int NtOpenKey = 103;
			
			
			const int NtOpenMutant = 104;
			
			
			const int NtOpenObjectAuditAlarm = 105;
			
			
			const int NtOpenProcess = 106;
			
			
			const int NtOpenProcessToken = 107;
			
			
			const int NtOpenSection = 108;
			
			
			const int NtOpenSemaphore = 109;
			
			
			const int NtOpenSymbolicLinkObject = 110;
			
			
			const int NtOpenThread = 111;
			
			
			const int NtOpenThreadToken = 112;
			
			
			const int NtOpenTimer = 113;
			
			
			const int NtPlugPlayControl = 114;
			
			
			const int NtPowerInformation = 115;
			
			
			const int NtPrivilegeCheck = 116;
			
			
			const int NtPrivilegedServiceAuditAlarm = 117;
			
			
			const int NtPrivilegeObjectAuditAlarm = 118;
			
			
			const int NtProtectVirtualMemory = 119;
			
			
			const int NtPulseEvent = 120;
			
			
			const int NtQueryInformationAtom = 121;
			
			
			const int NtQueryAttributesFile = 122;
			
			
			const int NtQueryDefaultLocale = 123;
			
			
			const int NtQueryDefaultUILanguage = 124;
			
			
			const int NtQueryDirectoryFile = 125;
			
			
			const int NtQueryDirectoryObject = 126;
			
			
			const int NtQueryEaFile = 127;
			
			
			const int NtQueryEvent = 128;
			
			
			const int NtQueryFullAttributesFile = 129;
			
			
			const int NtQueryInformationFile = 130;
			
			
			const int NtQueryInformationJobObject = 131;
			
			
			const int NtQueryIoCompletion = 132;
			
			
			const int NtQueryInformationPort = 133;
			
			
			const int NtQueryInformationProcess = 134;
			
			
			const int NtQueryInformationThread = 135;
			
			
			const int NtQueryInformationToken = 136;
			
			
			const int NtQueryInstallUILanguage = 137;
			
			
			const int NtQueryIntervalProfile = 138;
			
			
			const int NtQueryKey = 139;
			
			
			const int NtQueryMultipleValueKey = 140;
			
			
			const int NtQueryMutant = 141;
			
			
			const int NtQueryObject = 142;
			
			
			const int NtQueryOpenSubKeys = 143;
			
			
			const int NtQueryPerformanceCounter = 144;
			
			
			const int NtQueryQuotaInformationFile = 145;
			
			
			const int NtQuerySection = 146;
			
			
			const int NtQuerySecurityObject = 147;
			
			
			const int NtQuerySemaphore = 148;
			
			
			const int NtQuerySymbolicLinkObject = 149;
			
			
			const int NtQuerySystemEnvironmentValue = 150;
			
			
			const int NtQuerySystemInformation = 151;
			
			
			const int NtQuerySystemTime = 152;
			
			
			const int NtQueryTimer = 153;
			
			
			const int NtQueryTimerResolution = 154;
			
			
			const int NtQueryValueKey = 155;
			
			
			const int NtQueryVirtualMemory = 156;
			
			
			const int NtQueryVolumeInformationFile = 157;
			
			
			const int NtQueueApcThread = 158;
			
			
			const int NtRaiseException = 159;
			
			
			const int NtRaiseHardError = 160;
			
			
			const int NtReadFile = 161;
			
			
			const int NtReadFileScatter = 162;
			
			
			const int NtReadRequestData = 163;
			
			
			const int NtReadVirtualMemory = 164;
			
			
			const int NtRegisterThreadTerminatePort = 165;
			
			
			const int NtReleaseMutant = 166;
			
			
			const int NtReleaseSemaphore = 167;
			
			
			const int NtRemoveIoCompletion = 168;
			
			
			const int NtReplaceKey = 169;
			
			
			const int NtReplyPort = 170;
			
			
			const int NtReplyWaitReceivePort = 171;
			
			
			const int NtReplyWaitReceivePortEx = 172;
			
			
			const int NtReplyWaitReplyPort = 173;
			
			
			const int NtRequestPort = 175;
			
			
			const int NtRequestWaitReplyPort = 176;
			
			
			const int NtResetEvent = 178;
			
			
			const int NtResetWriteWatch = 179;
			
			
			const int NtRestoreKey = 180;
			
			
			const int NtResumeThread = 181;
			
			
			const int NtSaveKey = 182;
			
			
			const int NtSaveMergedKeys = 183;
			
			
			const int NtSecureConnectPort = 184;
			
			
			const int NtSetIoCompletion = 185;
			
			
			const int NtSetContextThread = 186;
			
			
			const int NtSetDefaultHardErrorPort = 187;
			
			
			const int NtSetDefaultLocale = 188;
			
			
			const int NtSetDefaultUILanguage = 189;
			
			
			const int NtSetEaFile = 190;
			
			
			const int NtSetEvent = 191;
			
			
			const int NtSetHighEventPair = 192;
			
			
			const int NtSetHighWaitLowEventPair = 193;
			
			
			const int NtSetInformationFile = 194;
			
			
			const int NtSetInformationJobObject = 195;
			
			
			const int NtSetInformationKey = 196;
			
			
			const int NtSetInformationObject = 197;
			
			
			const int NtSetInformationProcess = 198;
			
			
			const int NtSetInformationThread = 199;
			
			
			const int NtSetInformationToken = 200;
			
			
			const int NtSetIntervalProfile = 201;
			
			
			const int NtSetLdtEntries = 202;
			
			
			const int NtSetLowEventPair = 203;
			
			
			const int NtSetLowWaitHighEventPair = 204;
			
			
			const int NtSetQuotaInformationFile = 205;
			
			
			const int NtSetSecurityObject = 206;
			
			
			const int NtSetSystemEnvironmentValue = 207;
			
			
			const int NtSetSystemInformation = 208;
			
			
			const int NtSetSystemPowerState = 209;
			
			
			const int NtSetSystemTime = 210;
			
			
			const int NtSetThreadExecutionState = 211;
			
			
			const int NtSetTimer = 212;
			
			
			const int NtSetTimerResolution = 213;
			
			
			const int NtSetUuidSeed = 214;
			
			
			const int NtSetValueKey = 215;
			
			
			const int NtSetVolumeInformationFile = 216;
			
			
			const int NtShutdownSystem = 217;
			
			
			const int NtSignalAndWaitForSingleObject = 218;
			
			
			const int NtStartProfile = 219;
			
			
			const int NtStopProfile = 220;
			
			
			const int NtSuspendThread = 221;
			
			
			const int NtSystemDebugControl = 222;
			
			
			const int NtTerminateJobObject = 223;
			
			
			const int NtTerminateProcess = 224;
			
			
			const int NtTerminateThread = 225;
			
			
			const int NtTestAlert = 226;
			
			
			const int NtUnloadDriver = 227;
			
			
			const int NtUnloadKey = 228;
			
			
			const int NtUnlockFile = 229;
			
			
			const int NtUnlockVirtualMemory = 230;
			
			
			const int NtUnmapViewOfSection = 231;
			
			
			const int NtVdmControl = 232;
			
			
			const int NtWaitForMultipleObjects = 233;
			
			
			const int NtWaitForSingleObject = 234;
			
			
			const int NtWaitHighEventPair = 235;
			
			
			const int NtWaitLowEventPair = 236;
			
			
			const int NtWriteFile = 237;
			
			
			const int NtWriteFileGather = 238;
			
			
			const int NtWriteRequestData = 239;
			
			
			const int NtWriteVirtualMemory = 240;
			
			
			const int NtYieldExecution = 247;
			
		}
	}
	// windows_xpsp2:x86
	namespace windows_xpsp2 {
		namespace x86 {
			
			const int NtAcceptConnectPort = 0;
			
			
			const int NtAccessCheck = 1;
			
			
			const int NtAccessCheckAndAuditAlarm = 2;
			
			
			const int NtAccessCheckByType = 3;
			
			
			const int NtAccessCheckByTypeAndAuditAlarm = 4;
			
			
			const int NtAccessCheckByTypeResultList = 5;
			
			
			const int NtAccessCheckByTypeResultListAndAuditAlarm = 6;
			
			
			const int NtAccessCheckByTypeResultListAndAuditAlarmByHandle = 7;
			
			
			const int NtAddAtom = 8;
			
			
			const int NtAddBootEntry = 9;
			
			
			const int NtAdjustGroupsToken = 10;
			
			
			const int NtAdjustPrivilegesToken = 11;
			
			
			const int NtAlertResumeThread = 12;
			
			
			const int NtAlertThread = 13;
			
			
			const int NtAllocateLocallyUniqueId = 14;
			
			
			const int NtAllocateUserPhysicalPages = 15;
			
			
			const int NtAllocateUuids = 16;
			
			
			const int NtAllocateVirtualMemory = 17;
			
			
			const int NtAreMappedFilesTheSame = 18;
			
			
			const int NtAssignProcessToJobObject = 19;
			
			
			const int NtCallbackReturn = 20;
			
			
			const int NtCancelIoFile = 22;
			
			
			const int NtCancelTimer = 23;
			
			
			const int NtClearEvent = 24;
			
			
			const int NtClose = 25;
			
			
			const int NtCloseObjectAuditAlarm = 26;
			
			
			const int NtCompactKeys = 27;
			
			
			const int NtCompareTokens = 28;
			
			
			const int NtCompleteConnectPort = 29;
			
			
			const int NtCompressKey = 30;
			
			
			const int NtConnectPort = 31;
			
			
			const int NtContinue = 32;
			
			
			const int NtCreateDebugObject = 33;
			
			
			const int NtCreateDirectoryObject = 34;
			
			
			const int NtCreateEvent = 35;
			
			
			const int NtCreateEventPair = 36;
			
			
			const int NtCreateFile = 37;
			
			
			const int NtCreateIoCompletion = 38;
			
			
			const int NtCreateJobObject = 39;
			
			
			const int NtCreateJobSet = 40;
			
			
			const int NtCreateKey = 41;
			
			
			const int NtCreateMailslotFile = 42;
			
			
			const int NtCreateMutant = 43;
			
			
			const int NtCreateNamedPipeFile = 44;
			
			
			const int NtCreatePagingFile = 45;
			
			
			const int NtCreatePort = 46;
			
			
			const int NtCreateProcess = 47;
			
			
			const int NtCreateProcessEx = 48;
			
			
			const int NtCreateProfile = 49;
			
			
			const int NtCreateSection = 50;
			
			
			const int NtCreateSemaphore = 51;
			
			
			const int NtCreateSymbolicLinkObject = 52;
			
			
			const int NtCreateThread = 53;
			
			
			const int NtCreateTimer = 54;
			
			
			const int NtCreateToken = 55;
			
			
			const int NtCreateWaitablePort = 56;
			
			
			const int NtDebugActiveProcess = 57;
			
			
			const int NtDebugContinue = 58;
			
			
			const int NtDelayExecution = 59;
			
			
			const int NtDeleteAtom = 60;
			
			
			const int NtDeleteBootEntry = 61;
			
			
			const int NtDeleteFile = 62;
			
			
			const int NtDeleteKey = 63;
			
			
			const int NtDeleteObjectAuditAlarm = 64;
			
			
			const int NtDeleteValueKey = 65;
			
			
			const int NtDeviceIoControlFile = 66;
			
			
			const int NtDisplayString = 67;
			
			
			const int NtDuplicateObject = 68;
			
			
			const int NtDuplicateToken = 69;
			
			
			const int NtEnumerateBootEntries = 70;
			
			
			const int NtEnumerateKey = 71;
			
			
			const int NtEnumerateSystemEnvironmentValuesEx = 72;
			
			
			const int NtEnumerateValueKey = 73;
			
			
			const int NtExtendSection = 74;
			
			
			const int NtFilterToken = 75;
			
			
			const int NtFindAtom = 76;
			
			
			const int NtFlushBuffersFile = 77;
			
			
			const int NtFlushInstructionCache = 78;
			
			
			const int NtFlushKey = 79;
			
			
			const int NtFlushVirtualMemory = 80;
			
			
			const int NtFlushWriteBuffer = 81;
			
			
			const int NtFreeUserPhysicalPages = 82;
			
			
			const int NtFreeVirtualMemory = 83;
			
			
			const int NtFsControlFile = 84;
			
			
			const int NtGetContextThread = 85;
			
			
			const int NtGetDevicePowerState = 86;
			
			
			const int NtGetPlugPlayEvent = 87;
			
			
			const int NtGetWriteWatch = 88;
			
			
			const int NtImpersonateAnonymousToken = 89;
			
			
			const int NtImpersonateClientOfPort = 90;
			
			
			const int NtImpersonateThread = 91;
			
			
			const int NtInitializeRegistry = 92;
			
			
			const int NtInitiatePowerAction = 93;
			
			
			const int NtIsProcessInJob = 94;
			
			
			const int NtIsSystemResumeAutomatic = 95;
			
			
			const int NtListenPort = 96;
			
			
			const int NtLoadDriver = 97;
			
			
			const int NtLoadKey = 98;
			
			
			const int NtLoadKey2 = 99;
			
			
			const int NtLockFile = 100;
			
			
			const int NtLockProductActivationKeys = 101;
			
			
			const int NtLockRegistryKey = 102;
			
			
			const int NtLockVirtualMemory = 103;
			
			
			const int NtMakePermanentObject = 104;
			
			
			const int NtMakeTemporaryObject = 105;
			
			
			const int NtMapUserPhysicalPages = 106;
			
			
			const int NtMapUserPhysicalPagesScatter = 107;
			
			
			const int NtMapViewOfSection = 108;
			
			
			const int NtModifyBootEntry = 109;
			
			
			const int NtNotifyChangeDirectoryFile = 110;
			
			
			const int NtNotifyChangeKey = 111;
			
			
			const int NtNotifyChangeMultipleKeys = 112;
			
			
			const int NtOpenDirectoryObject = 113;
			
			
			const int NtOpenEvent = 114;
			
			
			const int NtOpenEventPair = 115;
			
			
			const int NtOpenFile = 116;
			
			
			const int NtOpenIoCompletion = 117;
			
			
			const int NtOpenJobObject = 118;
			
			
			const int NtOpenKey = 119;
			
			
			const int NtOpenMutant = 120;
			
			
			const int NtOpenObjectAuditAlarm = 121;
			
			
			const int NtOpenProcess = 122;
			
			
			const int NtOpenProcessToken = 123;
			
			
			const int NtOpenProcessTokenEx = 124;
			
			
			const int NtOpenSection = 125;
			
			
			const int NtOpenSemaphore = 126;
			
			
			const int NtOpenSymbolicLinkObject = 127;
			
			
			const int NtOpenThread = 128;
			
			
			const int NtOpenThreadToken = 129;
			
			
			const int NtOpenThreadTokenEx = 130;
			
			
			const int NtOpenTimer = 131;
			
			
			const int NtPlugPlayControl = 132;
			
			
			const int NtPowerInformation = 133;
			
			
			const int NtPrivilegeCheck = 134;
			
			
			const int NtPrivilegeObjectAuditAlarm = 135;
			
			
			const int NtPrivilegedServiceAuditAlarm = 136;
			
			
			const int NtProtectVirtualMemory = 137;
			
			
			const int NtPulseEvent = 138;
			
			
			const int NtQueryAttributesFile = 139;
			
			
			const int NtQueryBootEntryOrder = 140;
			
			
			const int NtQueryBootOptions = 141;
			
			
			const int NtQueryDebugFilterState = 142;
			
			
			const int NtQueryDefaultLocale = 143;
			
			
			const int NtQueryDefaultUILanguage = 144;
			
			
			const int NtQueryDirectoryFile = 145;
			
			
			const int NtQueryDirectoryObject = 146;
			
			
			const int NtQueryEaFile = 147;
			
			
			const int NtQueryEvent = 148;
			
			
			const int NtQueryFullAttributesFile = 149;
			
			
			const int NtQueryInformationAtom = 150;
			
			
			const int NtQueryInformationFile = 151;
			
			
			const int NtQueryInformationJobObject = 152;
			
			
			const int NtQueryInformationPort = 153;
			
			
			const int NtQueryInformationProcess = 154;
			
			
			const int NtQueryInformationThread = 155;
			
			
			const int NtQueryInformationToken = 156;
			
			
			const int NtQueryInstallUILanguage = 157;
			
			
			const int NtQueryIntervalProfile = 158;
			
			
			const int NtQueryIoCompletion = 159;
			
			
			const int NtQueryKey = 160;
			
			
			const int NtQueryMultipleValueKey = 161;
			
			
			const int NtQueryMutant = 162;
			
			
			const int NtQueryObject = 163;
			
			
			const int NtQueryOpenSubKeys = 164;
			
			
			const int NtQueryPerformanceCounter = 165;
			
			
			const int NtQueryQuotaInformationFile = 166;
			
			
			const int NtQuerySection = 167;
			
			
			const int NtQuerySecurityObject = 168;
			
			
			const int NtQuerySemaphore = 169;
			
			
			const int NtQuerySymbolicLinkObject = 170;
			
			
			const int NtQuerySystemEnvironmentValue = 171;
			
			
			const int NtQuerySystemEnvironmentValueEx = 172;
			
			
			const int NtQuerySystemInformation = 173;
			
			
			const int NtQuerySystemTime = 174;
			
			
			const int NtQueryTimer = 175;
			
			
			const int NtQueryTimerResolution = 176;
			
			
			const int NtQueryValueKey = 177;
			
			
			const int NtQueryVirtualMemory = 178;
			
			
			const int NtQueryVolumeInformationFile = 179;
			
			
			const int NtQueueApcThread = 180;
			
			
			const int NtRaiseException = 181;
			
			
			const int NtRaiseHardError = 182;
			
			
			const int NtReadFile = 183;
			
			
			const int NtReadFileScatter = 184;
			
			
			const int NtReadRequestData = 185;
			
			
			const int NtReadVirtualMemory = 186;
			
			
			const int NtRegisterThreadTerminatePort = 187;
			
			
			const int NtReleaseMutant = 188;
			
			
			const int NtReleaseSemaphore = 189;
			
			
			const int NtRemoveIoCompletion = 190;
			
			
			const int NtRemoveProcessDebug = 191;
			
			
			const int NtRenameKey = 192;
			
			
			const int NtReplaceKey = 193;
			
			
			const int NtReplyPort = 194;
			
			
			const int NtReplyWaitReceivePort = 195;
			
			
			const int NtReplyWaitReceivePortEx = 196;
			
			
			const int NtReplyWaitReplyPort = 197;
			
			
			const int NtRequestPort = 199;
			
			
			const int NtRequestWaitReplyPort = 200;
			
			
			const int NtResetEvent = 202;
			
			
			const int NtResetWriteWatch = 203;
			
			
			const int NtRestoreKey = 204;
			
			
			const int NtResumeProcess = 205;
			
			
			const int NtResumeThread = 206;
			
			
			const int NtSaveKey = 207;
			
			
			const int NtSaveKeyEx = 208;
			
			
			const int NtSaveMergedKeys = 209;
			
			
			const int NtSecureConnectPort = 210;
			
			
			const int NtSetBootEntryOrder = 211;
			
			
			const int NtSetBootOptions = 212;
			
			
			const int NtSetContextThread = 213;
			
			
			const int NtSetDebugFilterState = 214;
			
			
			const int NtSetDefaultHardErrorPort = 215;
			
			
			const int NtSetDefaultLocale = 216;
			
			
			const int NtSetDefaultUILanguage = 217;
			
			
			const int NtSetEaFile = 218;
			
			
			const int NtSetEvent = 219;
			
			
			const int NtSetEventBoostPriority = 220;
			
			
			const int NtSetHighEventPair = 221;
			
			
			const int NtSetHighWaitLowEventPair = 222;
			
			
			const int NtSetInformationDebugObject = 223;
			
			
			const int NtSetInformationFile = 224;
			
			
			const int NtSetInformationJobObject = 225;
			
			
			const int NtSetInformationKey = 226;
			
			
			const int NtSetInformationObject = 227;
			
			
			const int NtSetInformationProcess = 228;
			
			
			const int NtSetInformationThread = 229;
			
			
			const int NtSetInformationToken = 230;
			
			
			const int NtSetIntervalProfile = 231;
			
			
			const int NtSetIoCompletion = 232;
			
			
			const int NtSetLdtEntries = 233;
			
			
			const int NtSetLowEventPair = 234;
			
			
			const int NtSetLowWaitHighEventPair = 235;
			
			
			const int NtSetQuotaInformationFile = 236;
			
			
			const int NtSetSecurityObject = 237;
			
			
			const int NtSetSystemEnvironmentValue = 238;
			
			
			const int NtSetSystemEnvironmentValueEx = 239;
			
			
			const int NtSetSystemInformation = 240;
			
			
			const int NtSetSystemPowerState = 241;
			
			
			const int NtSetSystemTime = 242;
			
			
			const int NtSetThreadExecutionState = 243;
			
			
			const int NtSetTimer = 244;
			
			
			const int NtSetTimerResolution = 245;
			
			
			const int NtSetUuidSeed = 246;
			
			
			const int NtSetValueKey = 247;
			
			
			const int NtSetVolumeInformationFile = 248;
			
			
			const int NtShutdownSystem = 249;
			
			
			const int NtSignalAndWaitForSingleObject = 250;
			
			
			const int NtStartProfile = 251;
			
			
			const int NtStopProfile = 252;
			
			
			const int NtSuspendProcess = 253;
			
			
			const int NtSuspendThread = 254;
			
			
			const int NtSystemDebugControl = 255;
			
			
			const int NtTerminateJobObject = 256;
			
			
			const int NtTerminateProcess = 257;
			
			
			const int NtTerminateThread = 258;
			
			
			const int NtTestAlert = 259;
			
			
			const int NtTraceEvent = 260;
			
			
			const int NtTranslateFilePath = 261;
			
			
			const int NtUnloadDriver = 262;
			
			
			const int NtUnloadKey = 263;
			
			
			const int NtUnloadKeyEx = 264;
			
			
			const int NtUnlockFile = 265;
			
			
			const int NtUnlockVirtualMemory = 266;
			
			
			const int NtUnmapViewOfSection = 267;
			
			
			const int NtVdmControl = 268;
			
			
			const int NtWaitForDebugEvent = 269;
			
			
			const int NtWaitForMultipleObjects = 270;
			
			
			const int NtWaitForSingleObject = 271;
			
			
			const int NtWaitHighEventPair = 272;
			
			
			const int NtWaitLowEventPair = 273;
			
			
			const int NtWriteFile = 274;
			
			
			const int NtWriteFileGather = 275;
			
			
			const int NtWriteRequestData = 276;
			
			
			const int NtWriteVirtualMemory = 277;
			
			
			const int NtYieldExecution = 278;
			
			
			const int NtCreateKeyedEvent = 279;
			
			
			const int NtOpenKeyedEvent = 280;
			
			
			const int NtReleaseKeyedEvent = 281;
			
			
			const int NtWaitForKeyedEvent = 282;
			
			
			const int NtQueryPortInformationProcess = 283;
			
		}
	}
	// windows_xpsp3:x86
	namespace windows_xpsp3 {
		namespace x86 {
			
			const int NtAcceptConnectPort = 0;
			
			
			const int NtAccessCheck = 1;
			
			
			const int NtAccessCheckAndAuditAlarm = 2;
			
			
			const int NtAccessCheckByType = 3;
			
			
			const int NtAccessCheckByTypeAndAuditAlarm = 4;
			
			
			const int NtAccessCheckByTypeResultList = 5;
			
			
			const int NtAccessCheckByTypeResultListAndAuditAlarm = 6;
			
			
			const int NtAccessCheckByTypeResultListAndAuditAlarmByHandle = 7;
			
			
			const int NtAddAtom = 8;
			
			
			const int NtAddBootEntry = 9;
			
			
			const int NtAdjustGroupsToken = 10;
			
			
			const int NtAdjustPrivilegesToken = 11;
			
			
			const int NtAlertResumeThread = 12;
			
			
			const int NtAlertThread = 13;
			
			
			const int NtAllocateLocallyUniqueId = 14;
			
			
			const int NtAllocateUserPhysicalPages = 15;
			
			
			const int NtAllocateUuids = 16;
			
			
			const int NtAllocateVirtualMemory = 17;
			
			
			const int NtAreMappedFilesTheSame = 18;
			
			
			const int NtAssignProcessToJobObject = 19;
			
			
			const int NtCallbackReturn = 20;
			
			
			const int NtCancelIoFile = 22;
			
			
			const int NtCancelTimer = 23;
			
			
			const int NtClearEvent = 24;
			
			
			const int NtClose = 25;
			
			
			const int NtCloseObjectAuditAlarm = 26;
			
			
			const int NtCompactKeys = 27;
			
			
			const int NtCompareTokens = 28;
			
			
			const int NtCompleteConnectPort = 29;
			
			
			const int NtCompressKey = 30;
			
			
			const int NtConnectPort = 31;
			
			
			const int NtContinue = 32;
			
			
			const int NtCreateDebugObject = 33;
			
			
			const int NtCreateDirectoryObject = 34;
			
			
			const int NtCreateEvent = 35;
			
			
			const int NtCreateEventPair = 36;
			
			
			const int NtCreateFile = 37;
			
			
			const int NtCreateIoCompletion = 38;
			
			
			const int NtCreateJobObject = 39;
			
			
			const int NtCreateJobSet = 40;
			
			
			const int NtCreateKey = 41;
			
			
			const int NtCreateMailslotFile = 42;
			
			
			const int NtCreateMutant = 43;
			
			
			const int NtCreateNamedPipeFile = 44;
			
			
			const int NtCreatePagingFile = 45;
			
			
			const int NtCreatePort = 46;
			
			
			const int NtCreateProcess = 47;
			
			
			const int NtCreateProcessEx = 48;
			
			
			const int NtCreateProfile = 49;
			
			
			const int NtCreateSection = 50;
			
			
			const int NtCreateSemaphore = 51;
			
			
			const int NtCreateSymbolicLinkObject = 52;
			
			
			const int NtCreateThread = 53;
			
			
			const int NtCreateTimer = 54;
			
			
			const int NtCreateToken = 55;
			
			
			const int NtCreateWaitablePort = 56;
			
			
			const int NtDebugActiveProcess = 57;
			
			
			const int NtDebugContinue = 58;
			
			
			const int NtDelayExecution = 59;
			
			
			const int NtDeleteAtom = 60;
			
			
			const int NtDeleteBootEntry = 61;
			
			
			const int NtDeleteFile = 62;
			
			
			const int NtDeleteKey = 63;
			
			
			const int NtDeleteObjectAuditAlarm = 64;
			
			
			const int NtDeleteValueKey = 65;
			
			
			const int NtDeviceIoControlFile = 66;
			
			
			const int NtDisplayString = 67;
			
			
			const int NtDuplicateObject = 68;
			
			
			const int NtDuplicateToken = 69;
			
			
			const int NtEnumerateBootEntries = 70;
			
			
			const int NtEnumerateKey = 71;
			
			
			const int NtEnumerateSystemEnvironmentValuesEx = 72;
			
			
			const int NtEnumerateValueKey = 73;
			
			
			const int NtExtendSection = 74;
			
			
			const int NtFilterToken = 75;
			
			
			const int NtFindAtom = 76;
			
			
			const int NtFlushBuffersFile = 77;
			
			
			const int NtFlushInstructionCache = 78;
			
			
			const int NtFlushKey = 79;
			
			
			const int NtFlushVirtualMemory = 80;
			
			
			const int NtFlushWriteBuffer = 81;
			
			
			const int NtFreeUserPhysicalPages = 82;
			
			
			const int NtFreeVirtualMemory = 83;
			
			
			const int NtFsControlFile = 84;
			
			
			const int NtGetContextThread = 85;
			
			
			const int NtGetDevicePowerState = 86;
			
			
			const int NtGetPlugPlayEvent = 87;
			
			
			const int NtGetWriteWatch = 88;
			
			
			const int NtImpersonateAnonymousToken = 89;
			
			
			const int NtImpersonateClientOfPort = 90;
			
			
			const int NtImpersonateThread = 91;
			
			
			const int NtInitializeRegistry = 92;
			
			
			const int NtInitiatePowerAction = 93;
			
			
			const int NtIsProcessInJob = 94;
			
			
			const int NtIsSystemResumeAutomatic = 95;
			
			
			const int NtListenPort = 96;
			
			
			const int NtLoadDriver = 97;
			
			
			const int NtLoadKey = 98;
			
			
			const int NtLoadKey2 = 99;
			
			
			const int NtLockFile = 100;
			
			
			const int NtLockProductActivationKeys = 101;
			
			
			const int NtLockRegistryKey = 102;
			
			
			const int NtLockVirtualMemory = 103;
			
			
			const int NtMakePermanentObject = 104;
			
			
			const int NtMakeTemporaryObject = 105;
			
			
			const int NtMapUserPhysicalPages = 106;
			
			
			const int NtMapUserPhysicalPagesScatter = 107;
			
			
			const int NtMapViewOfSection = 108;
			
			
			const int NtModifyBootEntry = 109;
			
			
			const int NtNotifyChangeDirectoryFile = 110;
			
			
			const int NtNotifyChangeKey = 111;
			
			
			const int NtNotifyChangeMultipleKeys = 112;
			
			
			const int NtOpenDirectoryObject = 113;
			
			
			const int NtOpenEvent = 114;
			
			
			const int NtOpenEventPair = 115;
			
			
			const int NtOpenFile = 116;
			
			
			const int NtOpenIoCompletion = 117;
			
			
			const int NtOpenJobObject = 118;
			
			
			const int NtOpenKey = 119;
			
			
			const int NtOpenMutant = 120;
			
			
			const int NtOpenObjectAuditAlarm = 121;
			
			
			const int NtOpenProcess = 122;
			
			
			const int NtOpenProcessToken = 123;
			
			
			const int NtOpenProcessTokenEx = 124;
			
			
			const int NtOpenSection = 125;
			
			
			const int NtOpenSemaphore = 126;
			
			
			const int NtOpenSymbolicLinkObject = 127;
			
			
			const int NtOpenThread = 128;
			
			
			const int NtOpenThreadToken = 129;
			
			
			const int NtOpenThreadTokenEx = 130;
			
			
			const int NtOpenTimer = 131;
			
			
			const int NtPlugPlayControl = 132;
			
			
			const int NtPowerInformation = 133;
			
			
			const int NtPrivilegeCheck = 134;
			
			
			const int NtPrivilegeObjectAuditAlarm = 135;
			
			
			const int NtPrivilegedServiceAuditAlarm = 136;
			
			
			const int NtProtectVirtualMemory = 137;
			
			
			const int NtPulseEvent = 138;
			
			
			const int NtQueryAttributesFile = 139;
			
			
			const int NtQueryBootEntryOrder = 140;
			
			
			const int NtQueryBootOptions = 141;
			
			
			const int NtQueryDebugFilterState = 142;
			
			
			const int NtQueryDefaultLocale = 143;
			
			
			const int NtQueryDefaultUILanguage = 144;
			
			
			const int NtQueryDirectoryFile = 145;
			
			
			const int NtQueryDirectoryObject = 146;
			
			
			const int NtQueryEaFile = 147;
			
			
			const int NtQueryEvent = 148;
			
			
			const int NtQueryFullAttributesFile = 149;
			
			
			const int NtQueryInformationAtom = 150;
			
			
			const int NtQueryInformationFile = 151;
			
			
			const int NtQueryInformationJobObject = 152;
			
			
			const int NtQueryInformationPort = 153;
			
			
			const int NtQueryInformationProcess = 154;
			
			
			const int NtQueryInformationThread = 155;
			
			
			const int NtQueryInformationToken = 156;
			
			
			const int NtQueryInstallUILanguage = 157;
			
			
			const int NtQueryIntervalProfile = 158;
			
			
			const int NtQueryIoCompletion = 159;
			
			
			const int NtQueryKey = 160;
			
			
			const int NtQueryMultipleValueKey = 161;
			
			
			const int NtQueryMutant = 162;
			
			
			const int NtQueryObject = 163;
			
			
			const int NtQueryOpenSubKeys = 164;
			
			
			const int NtQueryPerformanceCounter = 165;
			
			
			const int NtQueryQuotaInformationFile = 166;
			
			
			const int NtQuerySection = 167;
			
			
			const int NtQuerySecurityObject = 168;
			
			
			const int NtQuerySemaphore = 169;
			
			
			const int NtQuerySymbolicLinkObject = 170;
			
			
			const int NtQuerySystemEnvironmentValue = 171;
			
			
			const int NtQuerySystemEnvironmentValueEx = 172;
			
			
			const int NtQuerySystemInformation = 173;
			
			
			const int NtQuerySystemTime = 174;
			
			
			const int NtQueryTimer = 175;
			
			
			const int NtQueryTimerResolution = 176;
			
			
			const int NtQueryValueKey = 177;
			
			
			const int NtQueryVirtualMemory = 178;
			
			
			const int NtQueryVolumeInformationFile = 179;
			
			
			const int NtQueueApcThread = 180;
			
			
			const int NtRaiseException = 181;
			
			
			const int NtRaiseHardError = 182;
			
			
			const int NtReadFile = 183;
			
			
			const int NtReadFileScatter = 184;
			
			
			const int NtReadRequestData = 185;
			
			
			const int NtReadVirtualMemory = 186;
			
			
			const int NtRegisterThreadTerminatePort = 187;
			
			
			const int NtReleaseMutant = 188;
			
			
			const int NtReleaseSemaphore = 189;
			
			
			const int NtRemoveIoCompletion = 190;
			
			
			const int NtRemoveProcessDebug = 191;
			
			
			const int NtRenameKey = 192;
			
			
			const int NtReplaceKey = 193;
			
			
			const int NtReplyPort = 194;
			
			
			const int NtReplyWaitReceivePort = 195;
			
			
			const int NtReplyWaitReceivePortEx = 196;
			
			
			const int NtReplyWaitReplyPort = 197;
			
			
			const int NtRequestPort = 199;
			
			
			const int NtRequestWaitReplyPort = 200;
			
			
			const int NtResetEvent = 202;
			
			
			const int NtResetWriteWatch = 203;
			
			
			const int NtRestoreKey = 204;
			
			
			const int NtResumeProcess = 205;
			
			
			const int NtResumeThread = 206;
			
			
			const int NtSaveKey = 207;
			
			
			const int NtSaveKeyEx = 208;
			
			
			const int NtSaveMergedKeys = 209;
			
			
			const int NtSecureConnectPort = 210;
			
			
			const int NtSetBootEntryOrder = 211;
			
			
			const int NtSetBootOptions = 212;
			
			
			const int NtSetContextThread = 213;
			
			
			const int NtSetDebugFilterState = 214;
			
			
			const int NtSetDefaultHardErrorPort = 215;
			
			
			const int NtSetDefaultLocale = 216;
			
			
			const int NtSetDefaultUILanguage = 217;
			
			
			const int NtSetEaFile = 218;
			
			
			const int NtSetEvent = 219;
			
			
			const int NtSetEventBoostPriority = 220;
			
			
			const int NtSetHighEventPair = 221;
			
			
			const int NtSetHighWaitLowEventPair = 222;
			
			
			const int NtSetInformationDebugObject = 223;
			
			
			const int NtSetInformationFile = 224;
			
			
			const int NtSetInformationJobObject = 225;
			
			
			const int NtSetInformationKey = 226;
			
			
			const int NtSetInformationObject = 227;
			
			
			const int NtSetInformationProcess = 228;
			
			
			const int NtSetInformationThread = 229;
			
			
			const int NtSetInformationToken = 230;
			
			
			const int NtSetIntervalProfile = 231;
			
			
			const int NtSetIoCompletion = 232;
			
			
			const int NtSetLdtEntries = 233;
			
			
			const int NtSetLowEventPair = 234;
			
			
			const int NtSetLowWaitHighEventPair = 235;
			
			
			const int NtSetQuotaInformationFile = 236;
			
			
			const int NtSetSecurityObject = 237;
			
			
			const int NtSetSystemEnvironmentValue = 238;
			
			
			const int NtSetSystemEnvironmentValueEx = 239;
			
			
			const int NtSetSystemInformation = 240;
			
			
			const int NtSetSystemPowerState = 241;
			
			
			const int NtSetSystemTime = 242;
			
			
			const int NtSetThreadExecutionState = 243;
			
			
			const int NtSetTimer = 244;
			
			
			const int NtSetTimerResolution = 245;
			
			
			const int NtSetUuidSeed = 246;
			
			
			const int NtSetValueKey = 247;
			
			
			const int NtSetVolumeInformationFile = 248;
			
			
			const int NtShutdownSystem = 249;
			
			
			const int NtSignalAndWaitForSingleObject = 250;
			
			
			const int NtStartProfile = 251;
			
			
			const int NtStopProfile = 252;
			
			
			const int NtSuspendProcess = 253;
			
			
			const int NtSuspendThread = 254;
			
			
			const int NtSystemDebugControl = 255;
			
			
			const int NtTerminateJobObject = 256;
			
			
			const int NtTerminateProcess = 257;
			
			
			const int NtTerminateThread = 258;
			
			
			const int NtTestAlert = 259;
			
			
			const int NtTraceEvent = 260;
			
			
			const int NtTranslateFilePath = 261;
			
			
			const int NtUnloadDriver = 262;
			
			
			const int NtUnloadKey = 263;
			
			
			const int NtUnloadKeyEx = 264;
			
			
			const int NtUnlockFile = 265;
			
			
			const int NtUnlockVirtualMemory = 266;
			
			
			const int NtUnmapViewOfSection = 267;
			
			
			const int NtVdmControl = 268;
			
			
			const int NtWaitForDebugEvent = 269;
			
			
			const int NtWaitForMultipleObjects = 270;
			
			
			const int NtWaitForSingleObject = 271;
			
			
			const int NtWaitHighEventPair = 272;
			
			
			const int NtWaitLowEventPair = 273;
			
			
			const int NtWriteFile = 274;
			
			
			const int NtWriteFileGather = 275;
			
			
			const int NtWriteRequestData = 276;
			
			
			const int NtWriteVirtualMemory = 277;
			
			
			const int NtYieldExecution = 278;
			
			
			const int NtCreateKeyedEvent = 279;
			
			
			const int NtOpenKeyedEvent = 280;
			
			
			const int NtReleaseKeyedEvent = 281;
			
			
			const int NtWaitForKeyedEvent = 282;
			
			
			const int NtQueryPortInformationProcess = 283;
			
		}
	}
	// windows_7:x86
	namespace windows_7 {
		namespace x86 {
			
			const int NtAcceptConnectPort = 0;
			
			
			const int NtAccessCheck = 1;
			
			
			const int NtAccessCheckAndAuditAlarm = 2;
			
			
			const int NtAccessCheckByType = 3;
			
			
			const int NtAccessCheckByTypeAndAuditAlarm = 4;
			
			
			const int NtAccessCheckByTypeResultList = 5;
			
			
			const int NtAccessCheckByTypeResultListAndAuditAlarm = 6;
			
			
			const int NtAccessCheckByTypeResultListAndAuditAlarmByHandle = 7;
			
			
			const int NtAddAtom = 8;
			
			
			const int NtAddBootEntry = 9;
			
			
			const int NtAddDriverEntry = 10;
			
			
			const int NtAdjustGroupsToken = 11;
			
			
			const int NtAdjustPrivilegesToken = 12;
			
			
			const int NtAlertResumeThread = 13;
			
			
			const int NtAlertThread = 14;
			
			
			const int NtAllocateLocallyUniqueId = 15;
			
			
			const int NtAllocateReserveObject = 16;
			
			
			const int NtAllocateUserPhysicalPages = 17;
			
			
			const int NtAllocateUuids = 18;
			
			
			const int NtAllocateVirtualMemory = 19;
			
			
			const int NtAlpcAcceptConnectPort = 20;
			
			
			const int NtAlpcCancelMessage = 21;
			
			
			const int NtAlpcConnectPort = 22;
			
			
			const int NtAlpcCreatePort = 23;
			
			
			const int NtAlpcCreatePortSection = 24;
			
			
			const int NtAlpcCreateResourceReserve = 25;
			
			
			const int NtAlpcCreateSectionView = 26;
			
			
			const int NtAlpcCreateSecurityContext = 27;
			
			
			const int NtAlpcDeletePortSection = 28;
			
			
			const int NtAlpcDeleteResourceReserve = 29;
			
			
			const int NtAlpcDeleteSectionView = 30;
			
			
			const int NtAlpcDeleteSecurityContext = 31;
			
			
			const int NtAlpcDisconnectPort = 32;
			
			
			const int NtAlpcImpersonateClientOfPort = 33;
			
			
			const int NtAlpcOpenSenderProcess = 34;
			
			
			const int NtAlpcOpenSenderThread = 35;
			
			
			const int NtAlpcQueryInformation = 36;
			
			
			const int NtAlpcQueryInformationMessage = 37;
			
			
			const int NtAlpcRevokeSecurityContext = 38;
			
			
			const int NtAlpcSendWaitReceivePort = 39;
			
			
			const int NtAlpcSetInformation = 40;
			
			
			const int NtApphelpCacheControl = 41;
			
			
			const int NtAreMappedFilesTheSame = 42;
			
			
			const int NtAssignProcessToJobObject = 43;
			
			
			const int NtCallbackReturn = 44;
			
			
			const int NtCancelIoFile = 45;
			
			
			const int NtCancelIoFileEx = 46;
			
			
			const int NtCancelSynchronousIoFile = 47;
			
			
			const int NtCancelTimer = 48;
			
			
			const int NtClearEvent = 49;
			
			
			const int NtClose = 50;
			
			
			const int NtCloseObjectAuditAlarm = 51;
			
			
			const int NtCommitComplete = 52;
			
			
			const int NtCommitEnlistment = 53;
			
			
			const int NtCommitTransaction = 54;
			
			
			const int NtCompactKeys = 55;
			
			
			const int NtCompareTokens = 56;
			
			
			const int NtCompleteConnectPort = 57;
			
			
			const int NtCompressKey = 58;
			
			
			const int NtConnectPort = 59;
			
			
			const int NtContinue = 60;
			
			
			const int NtCreateDebugObject = 61;
			
			
			const int NtCreateDirectoryObject = 62;
			
			
			const int NtCreateEnlistment = 63;
			
			
			const int NtCreateEvent = 64;
			
			
			const int NtCreateEventPair = 65;
			
			
			const int NtCreateFile = 66;
			
			
			const int NtCreateIoCompletion = 67;
			
			
			const int NtCreateJobObject = 68;
			
			
			const int NtCreateJobSet = 69;
			
			
			const int NtCreateKey = 70;
			
			
			const int NtCreateKeyedEvent = 71;
			
			
			const int NtCreateKeyTransacted = 72;
			
			
			const int NtCreateMailslotFile = 73;
			
			
			const int NtCreateMutant = 74;
			
			
			const int NtCreateNamedPipeFile = 75;
			
			
			const int NtCreatePagingFile = 76;
			
			
			const int NtCreatePort = 77;
			
			
			const int NtCreatePrivateNamespace = 78;
			
			
			const int NtCreateProcess = 79;
			
			
			const int NtCreateProcessEx = 80;
			
			
			const int NtCreateProfile = 81;
			
			
			const int NtCreateProfileEx = 82;
			
			
			const int NtCreateResourceManager = 83;
			
			
			const int NtCreateSection = 84;
			
			
			const int NtCreateSemaphore = 85;
			
			
			const int NtCreateSymbolicLinkObject = 86;
			
			
			const int NtCreateThread = 87;
			
			
			const int NtCreateThreadEx = 88;
			
			
			const int NtCreateTimer = 89;
			
			
			const int NtCreateToken = 90;
			
			
			const int NtCreateTransaction = 91;
			
			
			const int NtCreateTransactionManager = 92;
			
			
			const int NtCreateUserProcess = 93;
			
			
			const int NtCreateWaitablePort = 94;
			
			
			const int NtCreateWorkerFactory = 95;
			
			
			const int NtDebugActiveProcess = 96;
			
			
			const int NtDebugContinue = 97;
			
			
			const int NtDelayExecution = 98;
			
			
			const int NtDeleteAtom = 99;
			
			
			const int NtDeleteBootEntry = 100;
			
			
			const int NtDeleteDriverEntry = 101;
			
			
			const int NtDeleteFile = 102;
			
			
			const int NtDeleteKey = 103;
			
			
			const int NtDeleteObjectAuditAlarm = 104;
			
			
			const int NtDeletePrivateNamespace = 105;
			
			
			const int NtDeleteValueKey = 106;
			
			
			const int NtDeviceIoControlFile = 107;
			
			
			const int NtDisableLastKnownGood = 108;
			
			
			const int NtDisplayString = 109;
			
			
			const int NtDrawText = 110;
			
			
			const int NtDuplicateObject = 111;
			
			
			const int NtDuplicateToken = 112;
			
			
			const int NtEnableLastKnownGood = 113;
			
			
			const int NtEnumerateBootEntries = 114;
			
			
			const int NtEnumerateDriverEntries = 115;
			
			
			const int NtEnumerateKey = 116;
			
			
			const int NtEnumerateSystemEnvironmentValuesEx = 117;
			
			
			const int NtEnumerateTransactionObject = 118;
			
			
			const int NtEnumerateValueKey = 119;
			
			
			const int NtExtendSection = 120;
			
			
			const int NtFilterToken = 121;
			
			
			const int NtFindAtom = 122;
			
			
			const int NtFlushBuffersFile = 123;
			
			
			const int NtFlushInstallUILanguage = 124;
			
			
			const int NtFlushInstructionCache = 125;
			
			
			const int NtFlushKey = 126;
			
			
			const int NtFlushProcessWriteBuffers = 127;
			
			
			const int NtFlushVirtualMemory = 128;
			
			
			const int NtFlushWriteBuffer = 129;
			
			
			const int NtFreeUserPhysicalPages = 130;
			
			
			const int NtFreeVirtualMemory = 131;
			
			
			const int NtFreezeRegistry = 132;
			
			
			const int NtFreezeTransactions = 133;
			
			
			const int NtFsControlFile = 134;
			
			
			const int NtGetContextThread = 135;
			
			
			const int NtGetCurrentProcessorNumber = 136;
			
			
			const int NtGetDevicePowerState = 137;
			
			
			const int NtGetMUIRegistryInfo = 138;
			
			
			const int NtGetNextProcess = 139;
			
			
			const int NtGetNextThread = 140;
			
			
			const int NtGetNlsSectionPtr = 141;
			
			
			const int NtGetNotificationResourceManager = 142;
			
			
			const int NtGetPlugPlayEvent = 143;
			
			
			const int NtGetWriteWatch = 144;
			
			
			const int NtImpersonateAnonymousToken = 145;
			
			
			const int NtImpersonateClientOfPort = 146;
			
			
			const int NtImpersonateThread = 147;
			
			
			const int NtInitializeNlsFiles = 148;
			
			
			const int NtInitializeRegistry = 149;
			
			
			const int NtInitiatePowerAction = 150;
			
			
			const int NtIsProcessInJob = 151;
			
			
			const int NtIsSystemResumeAutomatic = 152;
			
			
			const int NtIsUILanguageComitted = 153;
			
			
			const int NtListenPort = 154;
			
			
			const int NtLoadDriver = 155;
			
			
			const int NtLoadKey = 156;
			
			
			const int NtLoadKey2 = 157;
			
			
			const int NtLoadKeyEx = 158;
			
			
			const int NtLockFile = 159;
			
			
			const int NtLockProductActivationKeys = 160;
			
			
			const int NtLockRegistryKey = 161;
			
			
			const int NtLockVirtualMemory = 162;
			
			
			const int NtMakePermanentObject = 163;
			
			
			const int NtMakeTemporaryObject = 164;
			
			
			const int NtMapCMFModule = 165;
			
			
			const int NtMapUserPhysicalPages = 166;
			
			
			const int NtMapUserPhysicalPagesScatter = 167;
			
			
			const int NtMapViewOfSection = 168;
			
			
			const int NtModifyBootEntry = 169;
			
			
			const int NtModifyDriverEntry = 170;
			
			
			const int NtNotifyChangeDirectoryFile = 171;
			
			
			const int NtNotifyChangeKey = 172;
			
			
			const int NtNotifyChangeMultipleKeys = 173;
			
			
			const int NtNotifyChangeSession = 174;
			
			
			const int NtOpenDirectoryObject = 175;
			
			
			const int NtOpenEnlistment = 176;
			
			
			const int NtOpenEvent = 177;
			
			
			const int NtOpenEventPair = 178;
			
			
			const int NtOpenFile = 179;
			
			
			const int NtOpenIoCompletion = 180;
			
			
			const int NtOpenJobObject = 181;
			
			
			const int NtOpenKey = 182;
			
			
			const int NtOpenKeyEx = 183;
			
			
			const int NtOpenKeyedEvent = 184;
			
			
			const int NtOpenKeyTransacted = 185;
			
			
			const int NtOpenKeyTransactedEx = 186;
			
			
			const int NtOpenMutant = 187;
			
			
			const int NtOpenObjectAuditAlarm = 188;
			
			
			const int NtOpenPrivateNamespace = 189;
			
			
			const int NtOpenProcess = 190;
			
			
			const int NtOpenProcessToken = 191;
			
			
			const int NtOpenProcessTokenEx = 192;
			
			
			const int NtOpenResourceManager = 193;
			
			
			const int NtOpenSection = 194;
			
			
			const int NtOpenSemaphore = 195;
			
			
			const int NtOpenSession = 196;
			
			
			const int NtOpenSymbolicLinkObject = 197;
			
			
			const int NtOpenThread = 198;
			
			
			const int NtOpenThreadToken = 199;
			
			
			const int NtOpenThreadTokenEx = 200;
			
			
			const int NtOpenTimer = 201;
			
			
			const int NtOpenTransaction = 202;
			
			
			const int NtOpenTransactionManager = 203;
			
			
			const int NtPlugPlayControl = 204;
			
			
			const int NtPowerInformation = 205;
			
			
			const int NtPrepareComplete = 206;
			
			
			const int NtPrepareEnlistment = 207;
			
			
			const int NtPrePrepareComplete = 208;
			
			
			const int NtPrePrepareEnlistment = 209;
			
			
			const int NtPrivilegeCheck = 210;
			
			
			const int NtPrivilegedServiceAuditAlarm = 211;
			
			
			const int NtPrivilegeObjectAuditAlarm = 212;
			
			
			const int NtPropagationComplete = 213;
			
			
			const int NtPropagationFailed = 214;
			
			
			const int NtProtectVirtualMemory = 215;
			
			
			const int NtPulseEvent = 216;
			
			
			const int NtQueryAttributesFile = 217;
			
			
			const int NtQueryBootEntryOrder = 218;
			
			
			const int NtQueryBootOptions = 219;
			
			
			const int NtQueryDebugFilterState = 220;
			
			
			const int NtQueryDefaultLocale = 221;
			
			
			const int NtQueryDefaultUILanguage = 222;
			
			
			const int NtQueryDirectoryFile = 223;
			
			
			const int NtQueryDirectoryObject = 224;
			
			
			const int NtQueryDriverEntryOrder = 225;
			
			
			const int NtQueryEaFile = 226;
			
			
			const int NtQueryEvent = 227;
			
			
			const int NtQueryFullAttributesFile = 228;
			
			
			const int NtQueryInformationAtom = 229;
			
			
			const int NtQueryInformationEnlistment = 230;
			
			
			const int NtQueryInformationFile = 231;
			
			
			const int NtQueryInformationJobObject = 232;
			
			
			const int NtQueryInformationPort = 233;
			
			
			const int NtQueryInformationProcess = 234;
			
			
			const int NtQueryInformationResourceManager = 235;
			
			
			const int NtQueryInformationThread = 236;
			
			
			const int NtQueryInformationToken = 237;
			
			
			const int NtQueryInformationTransaction = 238;
			
			
			const int NtQueryInformationTransactionManager = 239;
			
			
			const int NtQueryInformationWorkerFactory = 240;
			
			
			const int NtQueryInstallUILanguage = 241;
			
			
			const int NtQueryIntervalProfile = 242;
			
			
			const int NtQueryIoCompletion = 243;
			
			
			const int NtQueryKey = 244;
			
			
			const int NtQueryLicenseValue = 245;
			
			
			const int NtQueryMultipleValueKey = 246;
			
			
			const int NtQueryMutant = 247;
			
			
			const int NtQueryObject = 248;
			
			
			const int NtQueryOpenSubKeys = 249;
			
			
			const int NtQueryOpenSubKeysEx = 250;
			
			
			const int NtQueryPerformanceCounter = 251;
			
			
			const int NtQueryPortInformationProcess = 252;
			
			
			const int NtQueryQuotaInformationFile = 253;
			
			
			const int NtQuerySection = 254;
			
			
			const int NtQuerySecurityAttributesToken = 255;
			
			
			const int NtQuerySecurityObject = 256;
			
			
			const int NtQuerySemaphore = 257;
			
			
			const int NtQuerySymbolicLinkObject = 258;
			
			
			const int NtQuerySystemEnvironmentValue = 259;
			
			
			const int NtQuerySystemEnvironmentValueEx = 260;
			
			
			const int NtQuerySystemInformation = 261;
			
			
			const int NtQuerySystemInformationEx = 262;
			
			
			const int NtQuerySystemTime = 263;
			
			
			const int NtQueryTimer = 264;
			
			
			const int NtQueryTimerResolution = 265;
			
			
			const int NtQueryValueKey = 266;
			
			
			const int NtQueryVirtualMemory = 267;
			
			
			const int NtQueryVolumeInformationFile = 268;
			
			
			const int NtQueueApcThread = 269;
			
			
			const int NtQueueApcThreadEx = 270;
			
			
			const int NtRaiseException = 271;
			
			
			const int NtRaiseHardError = 272;
			
			
			const int NtReadFile = 273;
			
			
			const int NtReadFileScatter = 274;
			
			
			const int NtReadOnlyEnlistment = 275;
			
			
			const int NtReadRequestData = 276;
			
			
			const int NtReadVirtualMemory = 277;
			
			
			const int NtRecoverEnlistment = 278;
			
			
			const int NtRecoverResourceManager = 279;
			
			
			const int NtRecoverTransactionManager = 280;
			
			
			const int NtRegisterProtocolAddressInformation = 281;
			
			
			const int NtRegisterThreadTerminatePort = 282;
			
			
			const int NtReleaseKeyedEvent = 283;
			
			
			const int NtReleaseMutant = 284;
			
			
			const int NtReleaseSemaphore = 285;
			
			
			const int NtReleaseWorkerFactoryWorker = 286;
			
			
			const int NtRemoveIoCompletion = 287;
			
			
			const int NtRemoveIoCompletionEx = 288;
			
			
			const int NtRemoveProcessDebug = 289;
			
			
			const int NtRenameKey = 290;
			
			
			const int NtRenameTransactionManager = 291;
			
			
			const int NtReplaceKey = 292;
			
			
			const int NtReplacePartitionUnit = 293;
			
			
			const int NtReplyPort = 294;
			
			
			const int NtReplyWaitReceivePort = 295;
			
			
			const int NtReplyWaitReceivePortEx = 296;
			
			
			const int NtReplyWaitReplyPort = 297;
			
			
			const int NtRequestPort = 298;
			
			
			const int NtRequestWaitReplyPort = 299;
			
			
			const int NtResetEvent = 300;
			
			
			const int NtResetWriteWatch = 301;
			
			
			const int NtRestoreKey = 302;
			
			
			const int NtResumeProcess = 303;
			
			
			const int NtResumeThread = 304;
			
			
			const int NtRollbackComplete = 305;
			
			
			const int NtRollbackEnlistment = 306;
			
			
			const int NtRollbackTransaction = 307;
			
			
			const int NtRollforwardTransactionManager = 308;
			
			
			const int NtSaveKey = 309;
			
			
			const int NtSaveKeyEx = 310;
			
			
			const int NtSaveMergedKeys = 311;
			
			
			const int NtSecureConnectPort = 312;
			
			
			const int NtSerializeBoot = 313;
			
			
			const int NtSetBootEntryOrder = 314;
			
			
			const int NtSetBootOptions = 315;
			
			
			const int NtSetContextThread = 316;
			
			
			const int NtSetDebugFilterState = 317;
			
			
			const int NtSetDefaultHardErrorPort = 318;
			
			
			const int NtSetDefaultLocale = 319;
			
			
			const int NtSetDefaultUILanguage = 320;
			
			
			const int NtSetDriverEntryOrder = 321;
			
			
			const int NtSetEaFile = 322;
			
			
			const int NtSetEvent = 323;
			
			
			const int NtSetEventBoostPriority = 324;
			
			
			const int NtSetHighEventPair = 325;
			
			
			const int NtSetHighWaitLowEventPair = 326;
			
			
			const int NtSetInformationDebugObject = 327;
			
			
			const int NtSetInformationEnlistment = 328;
			
			
			const int NtSetInformationFile = 329;
			
			
			const int NtSetInformationJobObject = 330;
			
			
			const int NtSetInformationKey = 331;
			
			
			const int NtSetInformationObject = 332;
			
			
			const int NtSetInformationProcess = 333;
			
			
			const int NtSetInformationResourceManager = 334;
			
			
			const int NtSetInformationThread = 335;
			
			
			const int NtSetInformationToken = 336;
			
			
			const int NtSetInformationTransaction = 337;
			
			
			const int NtSetInformationTransactionManager = 338;
			
			
			const int NtSetInformationWorkerFactory = 339;
			
			
			const int NtSetIntervalProfile = 340;
			
			
			const int NtSetIoCompletion = 341;
			
			
			const int NtSetIoCompletionEx = 342;
			
			
			const int NtSetLdtEntries = 343;
			
			
			const int NtSetLowEventPair = 344;
			
			
			const int NtSetLowWaitHighEventPair = 345;
			
			
			const int NtSetQuotaInformationFile = 346;
			
			
			const int NtSetSecurityObject = 347;
			
			
			const int NtSetSystemEnvironmentValue = 348;
			
			
			const int NtSetSystemEnvironmentValueEx = 349;
			
			
			const int NtSetSystemInformation = 350;
			
			
			const int NtSetSystemPowerState = 351;
			
			
			const int NtSetSystemTime = 352;
			
			
			const int NtSetThreadExecutionState = 353;
			
			
			const int NtSetTimer = 354;
			
			
			const int NtSetTimerEx = 355;
			
			
			const int NtSetTimerResolution = 356;
			
			
			const int NtSetUuidSeed = 357;
			
			
			const int NtSetValueKey = 358;
			
			
			const int NtSetVolumeInformationFile = 359;
			
			
			const int NtShutdownSystem = 360;
			
			
			const int NtShutdownWorkerFactory = 361;
			
			
			const int NtSignalAndWaitForSingleObject = 362;
			
			
			const int NtSinglePhaseReject = 363;
			
			
			const int NtStartProfile = 364;
			
			
			const int NtStopProfile = 365;
			
			
			const int NtSuspendProcess = 366;
			
			
			const int NtSuspendThread = 367;
			
			
			const int NtSystemDebugControl = 368;
			
			
			const int NtTerminateJobObject = 369;
			
			
			const int NtTerminateProcess = 370;
			
			
			const int NtTerminateThread = 371;
			
			
			const int NtTestAlert = 372;
			
			
			const int NtThawRegistry = 373;
			
			
			const int NtThawTransactions = 374;
			
			
			const int NtTraceControl = 375;
			
			
			const int NtTraceEvent = 376;
			
			
			const int NtTranslateFilePath = 377;
			
			
			const int NtUmsThreadYield = 378;
			
			
			const int NtUnloadDriver = 379;
			
			
			const int NtUnloadKey = 380;
			
			
			const int NtUnloadKey2 = 381;
			
			
			const int NtUnloadKeyEx = 382;
			
			
			const int NtUnlockFile = 383;
			
			
			const int NtUnlockVirtualMemory = 384;
			
			
			const int NtUnmapViewOfSection = 385;
			
			
			const int NtVdmControl = 386;
			
			
			const int NtWaitForDebugEvent = 387;
			
			
			const int NtWaitForKeyedEvent = 388;
			
			
			const int NtWaitForMultipleObjects = 389;
			
			
			const int NtWaitForMultipleObjects32 = 390;
			
			
			const int NtWaitForSingleObject = 391;
			
			
			const int NtWaitForWorkViaWorkerFactory = 392;
			
			
			const int NtWaitHighEventPair = 393;
			
			
			const int NtWaitLowEventPair = 394;
			
			
			const int NtWorkerFactoryWorkerReady = 395;
			
			
			const int NtWriteFile = 396;
			
			
			const int NtWriteFileGather = 397;
			
			
			const int NtWriteRequestData = 398;
			
			
			const int NtWriteVirtualMemory = 399;
			
			
			const int NtYieldExecution = 400;
			
		}
	}
	// windows_7:x64
	namespace windows_7 {
		namespace x64 {
			
			const int NtMapUserPhysicalPagesScatter = 0;
			
			
			const int NtWaitForSingleObject = 1;
			
			
			const int NtCallbackReturn = 2;
			
			
			const int NtReadFile = 3;
			
			
			const int NtDeviceIoControlFile = 4;
			
			
			const int NtWriteFile = 5;
			
			
			const int NtRemoveIoCompletion = 6;
			
			
			const int NtReleaseSemaphore = 7;
			
			
			const int NtReplyWaitReceivePort = 8;
			
			
			const int NtReplyPort = 9;
			
			
			const int NtSetInformationThread = 10;
			
			
			const int NtSetEvent = 11;
			
			
			const int NtClose = 12;
			
			
			const int NtQueryObject = 13;
			
			
			const int NtQueryInformationFile = 14;
			
			
			const int NtOpenKey = 15;
			
			
			const int NtEnumerateValueKey = 16;
			
			
			const int NtFindAtom = 17;
			
			
			const int NtQueryDefaultLocale = 18;
			
			
			const int NtQueryKey = 19;
			
			
			const int NtQueryValueKey = 20;
			
			
			const int NtAllocateVirtualMemory = 21;
			
			
			const int NtQueryInformationProcess = 22;
			
			
			const int NtWaitForMultipleObjects32 = 23;
			
			
			const int NtWriteFileGather = 24;
			
			
			const int NtSetInformationProcess = 25;
			
			
			const int NtCreateKey = 26;
			
			
			const int NtFreeVirtualMemory = 27;
			
			
			const int NtImpersonateClientOfPort = 28;
			
			
			const int NtReleaseMutant = 29;
			
			
			const int NtQueryInformationToken = 30;
			
			
			const int NtRequestWaitReplyPort = 31;
			
			
			const int NtQueryVirtualMemory = 32;
			
			
			const int NtOpenThreadToken = 33;
			
			
			const int NtQueryInformationThread = 34;
			
			
			const int NtOpenProcess = 35;
			
			
			const int NtSetInformationFile = 36;
			
			
			const int NtMapViewOfSection = 37;
			
			
			const int NtAccessCheckAndAuditAlarm = 38;
			
			
			const int NtUnmapViewOfSection = 39;
			
			
			const int NtReplyWaitReceivePortEx = 40;
			
			
			const int NtTerminateProcess = 41;
			
			
			const int NtSetEventBoostPriority = 42;
			
			
			const int NtReadFileScatter = 43;
			
			
			const int NtOpenThreadTokenEx = 44;
			
			
			const int NtOpenProcessTokenEx = 45;
			
			
			const int NtQueryPerformanceCounter = 46;
			
			
			const int NtEnumerateKey = 47;
			
			
			const int NtOpenFile = 48;
			
			
			const int NtDelayExecution = 49;
			
			
			const int NtQueryDirectoryFile = 50;
			
			
			const int NtQuerySystemInformation = 51;
			
			
			const int NtOpenSection = 52;
			
			
			const int NtQueryTimer = 53;
			
			
			const int NtFsControlFile = 54;
			
			
			const int NtWriteVirtualMemory = 55;
			
			
			const int NtCloseObjectAuditAlarm = 56;
			
			
			const int NtDuplicateObject = 57;
			
			
			const int NtQueryAttributesFile = 58;
			
			
			const int NtClearEvent = 59;
			
			
			const int NtReadVirtualMemory = 60;
			
			
			const int NtOpenEvent = 61;
			
			
			const int NtAdjustPrivilegesToken = 62;
			
			
			const int NtDuplicateToken = 63;
			
			
			const int NtContinue = 64;
			
			
			const int NtQueryDefaultUILanguage = 65;
			
			
			const int NtQueueApcThread = 66;
			
			
			const int NtYieldExecution = 67;
			
			
			const int NtAddAtom = 68;
			
			
			const int NtCreateEvent = 69;
			
			
			const int NtQueryVolumeInformationFile = 70;
			
			
			const int NtCreateSection = 71;
			
			
			const int NtFlushBuffersFile = 72;
			
			
			const int NtApphelpCacheControl = 73;
			
			
			const int NtCreateProcessEx = 74;
			
			
			const int NtCreateThread = 75;
			
			
			const int NtIsProcessInJob = 76;
			
			
			const int NtProtectVirtualMemory = 77;
			
			
			const int NtQuerySection = 78;
			
			
			const int NtResumeThread = 79;
			
			
			const int NtTerminateThread = 80;
			
			
			const int NtReadRequestData = 81;
			
			
			const int NtCreateFile = 82;
			
			
			const int NtQueryEvent = 83;
			
			
			const int NtWriteRequestData = 84;
			
			
			const int NtOpenDirectoryObject = 85;
			
			
			const int NtAccessCheckByTypeAndAuditAlarm = 86;
			
			
			const int NtQuerySystemTime = 87;
			
			
			const int NtWaitForMultipleObjects = 88;
			
			
			const int NtSetInformationObject = 89;
			
			
			const int NtCancelIoFile = 90;
			
			
			const int NtTraceEvent = 91;
			
			
			const int NtPowerInformation = 92;
			
			
			const int NtSetValueKey = 93;
			
			
			const int NtCancelTimer = 94;
			
			
			const int NtSetTimer = 95;
			
			
			const int NtAcceptConnectPort = 96;
			
			
			const int NtAccessCheck = 97;
			
			
			const int NtAccessCheckByType = 98;
			
			
			const int NtAccessCheckByTypeResultList = 99;
			
			
			const int NtAccessCheckByTypeResultListAndAuditAlarm = 100;
			
			
			const int NtAccessCheckByTypeResultListAndAuditAlarmByHandle = 101;
			
			
			const int NtAddBootEntry = 102;
			
			
			const int NtAddDriverEntry = 103;
			
			
			const int NtAdjustGroupsToken = 104;
			
			
			const int NtAlertResumeThread = 105;
			
			
			const int NtAlertThread = 106;
			
			
			const int NtAllocateLocallyUniqueId = 107;
			
			
			const int NtAllocateReserveObject = 108;
			
			
			const int NtAllocateUserPhysicalPages = 109;
			
			
			const int NtAllocateUuids = 110;
			
			
			const int NtAlpcAcceptConnectPort = 111;
			
			
			const int NtAlpcCancelMessage = 112;
			
			
			const int NtAlpcConnectPort = 113;
			
			
			const int NtAlpcCreatePort = 114;
			
			
			const int NtAlpcCreatePortSection = 115;
			
			
			const int NtAlpcCreateResourceReserve = 116;
			
			
			const int NtAlpcCreateSectionView = 117;
			
			
			const int NtAlpcCreateSecurityContext = 118;
			
			
			const int NtAlpcDeletePortSection = 119;
			
			
			const int NtAlpcDeleteResourceReserve = 120;
			
			
			const int NtAlpcDeleteSectionView = 121;
			
			
			const int NtAlpcDeleteSecurityContext = 122;
			
			
			const int NtAlpcDisconnectPort = 123;
			
			
			const int NtAlpcImpersonateClientOfPort = 124;
			
			
			const int NtAlpcOpenSenderProcess = 125;
			
			
			const int NtAlpcOpenSenderThread = 126;
			
			
			const int NtAlpcQueryInformation = 127;
			
			
			const int NtAlpcQueryInformationMessage = 128;
			
			
			const int NtAlpcRevokeSecurityContext = 129;
			
			
			const int NtAlpcSendWaitReceivePort = 130;
			
			
			const int NtAlpcSetInformation = 131;
			
			
			const int NtAreMappedFilesTheSame = 132;
			
			
			const int NtAssignProcessToJobObject = 133;
			
			
			const int NtCancelIoFileEx = 134;
			
			
			const int NtCancelSynchronousIoFile = 135;
			
			
			const int NtCommitComplete = 136;
			
			
			const int NtCommitEnlistment = 137;
			
			
			const int NtCommitTransaction = 138;
			
			
			const int NtCompactKeys = 139;
			
			
			const int NtCompareTokens = 140;
			
			
			const int NtCompleteConnectPort = 141;
			
			
			const int NtCompressKey = 142;
			
			
			const int NtConnectPort = 143;
			
			
			const int NtCreateDebugObject = 144;
			
			
			const int NtCreateDirectoryObject = 145;
			
			
			const int NtCreateEnlistment = 146;
			
			
			const int NtCreateEventPair = 147;
			
			
			const int NtCreateIoCompletion = 148;
			
			
			const int NtCreateJobObject = 149;
			
			
			const int NtCreateJobSet = 150;
			
			
			const int NtCreateKeyTransacted = 151;
			
			
			const int NtCreateKeyedEvent = 152;
			
			
			const int NtCreateMailslotFile = 153;
			
			
			const int NtCreateMutant = 154;
			
			
			const int NtCreateNamedPipeFile = 155;
			
			
			const int NtCreatePagingFile = 156;
			
			
			const int NtCreatePort = 157;
			
			
			const int NtCreatePrivateNamespace = 158;
			
			
			const int NtCreateProcess = 159;
			
			
			const int NtCreateProfile = 160;
			
			
			const int NtCreateProfileEx = 161;
			
			
			const int NtCreateResourceManager = 162;
			
			
			const int NtCreateSemaphore = 163;
			
			
			const int NtCreateSymbolicLinkObject = 164;
			
			
			const int NtCreateThreadEx = 165;
			
			
			const int NtCreateTimer = 166;
			
			
			const int NtCreateToken = 167;
			
			
			const int NtCreateTransaction = 168;
			
			
			const int NtCreateTransactionManager = 169;
			
			
			const int NtCreateUserProcess = 170;
			
			
			const int NtCreateWaitablePort = 171;
			
			
			const int NtCreateWorkerFactory = 172;
			
			
			const int NtDebugActiveProcess = 173;
			
			
			const int NtDebugContinue = 174;
			
			
			const int NtDeleteAtom = 175;
			
			
			const int NtDeleteBootEntry = 176;
			
			
			const int NtDeleteDriverEntry = 177;
			
			
			const int NtDeleteFile = 178;
			
			
			const int NtDeleteKey = 179;
			
			
			const int NtDeleteObjectAuditAlarm = 180;
			
			
			const int NtDeletePrivateNamespace = 181;
			
			
			const int NtDeleteValueKey = 182;
			
			
			const int NtDisableLastKnownGood = 183;
			
			
			const int NtDisplayString = 184;
			
			
			const int NtDrawText = 185;
			
			
			const int NtEnableLastKnownGood = 186;
			
			
			const int NtEnumerateBootEntries = 187;
			
			
			const int NtEnumerateDriverEntries = 188;
			
			
			const int NtEnumerateSystemEnvironmentValuesEx = 189;
			
			
			const int NtEnumerateTransactionObject = 190;
			
			
			const int NtExtendSection = 191;
			
			
			const int NtFilterToken = 192;
			
			
			const int NtFlushInstallUILanguage = 193;
			
			
			const int NtFlushInstructionCache = 194;
			
			
			const int NtFlushKey = 195;
			
			
			const int NtFlushProcessWriteBuffers = 196;
			
			
			const int NtFlushVirtualMemory = 197;
			
			
			const int NtFlushWriteBuffer = 198;
			
			
			const int NtFreeUserPhysicalPages = 199;
			
			
			const int NtFreezeRegistry = 200;
			
			
			const int NtFreezeTransactions = 201;
			
			
			const int NtGetContextThread = 202;
			
			
			const int NtGetCurrentProcessorNumber = 203;
			
			
			const int NtGetDevicePowerState = 204;
			
			
			const int NtGetMUIRegistryInfo = 205;
			
			
			const int NtGetNextProcess = 206;
			
			
			const int NtGetNextThread = 207;
			
			
			const int NtGetNlsSectionPtr = 208;
			
			
			const int NtGetNotificationResourceManager = 209;
			
			
			const int NtGetPlugPlayEvent = 210;
			
			
			const int NtGetWriteWatch = 211;
			
			
			const int NtImpersonateAnonymousToken = 212;
			
			
			const int NtImpersonateThread = 213;
			
			
			const int NtInitializeNlsFiles = 214;
			
			
			const int NtInitializeRegistry = 215;
			
			
			const int NtInitiatePowerAction = 216;
			
			
			const int NtIsSystemResumeAutomatic = 217;
			
			
			const int NtIsUILanguageComitted = 218;
			
			
			const int NtListenPort = 219;
			
			
			const int NtLoadDriver = 220;
			
			
			const int NtLoadKey = 221;
			
			
			const int NtLoadKey2 = 222;
			
			
			const int NtLoadKeyEx = 223;
			
			
			const int NtLockFile = 224;
			
			
			const int NtLockProductActivationKeys = 225;
			
			
			const int NtLockRegistryKey = 226;
			
			
			const int NtLockVirtualMemory = 227;
			
			
			const int NtMakePermanentObject = 228;
			
			
			const int NtMakeTemporaryObject = 229;
			
			
			const int NtMapCMFModule = 230;
			
			
			const int NtMapUserPhysicalPages = 231;
			
			
			const int NtModifyBootEntry = 232;
			
			
			const int NtModifyDriverEntry = 233;
			
			
			const int NtNotifyChangeDirectoryFile = 234;
			
			
			const int NtNotifyChangeKey = 235;
			
			
			const int NtNotifyChangeMultipleKeys = 236;
			
			
			const int NtNotifyChangeSession = 237;
			
			
			const int NtOpenEnlistment = 238;
			
			
			const int NtOpenEventPair = 239;
			
			
			const int NtOpenIoCompletion = 240;
			
			
			const int NtOpenJobObject = 241;
			
			
			const int NtOpenKeyEx = 242;
			
			
			const int NtOpenKeyTransacted = 243;
			
			
			const int NtOpenKeyTransactedEx = 244;
			
			
			const int NtOpenKeyedEvent = 245;
			
			
			const int NtOpenMutant = 246;
			
			
			const int NtOpenObjectAuditAlarm = 247;
			
			
			const int NtOpenPrivateNamespace = 248;
			
			
			const int NtOpenProcessToken = 249;
			
			
			const int NtOpenResourceManager = 250;
			
			
			const int NtOpenSemaphore = 251;
			
			
			const int NtOpenSession = 252;
			
			
			const int NtOpenSymbolicLinkObject = 253;
			
			
			const int NtOpenThread = 254;
			
			
			const int NtOpenTimer = 255;
			
			
			const int NtOpenTransaction = 256;
			
			
			const int NtOpenTransactionManager = 257;
			
			
			const int NtPlugPlayControl = 258;
			
			
			const int NtPrePrepareComplete = 259;
			
			
			const int NtPrePrepareEnlistment = 260;
			
			
			const int NtPrepareComplete = 261;
			
			
			const int NtPrepareEnlistment = 262;
			
			
			const int NtPrivilegeCheck = 263;
			
			
			const int NtPrivilegeObjectAuditAlarm = 264;
			
			
			const int NtPrivilegedServiceAuditAlarm = 265;
			
			
			const int NtPropagationComplete = 266;
			
			
			const int NtPropagationFailed = 267;
			
			
			const int NtPulseEvent = 268;
			
			
			const int NtQueryBootEntryOrder = 269;
			
			
			const int NtQueryBootOptions = 270;
			
			
			const int NtQueryDebugFilterState = 271;
			
			
			const int NtQueryDirectoryObject = 272;
			
			
			const int NtQueryDriverEntryOrder = 273;
			
			
			const int NtQueryEaFile = 274;
			
			
			const int NtQueryFullAttributesFile = 275;
			
			
			const int NtQueryInformationAtom = 276;
			
			
			const int NtQueryInformationEnlistment = 277;
			
			
			const int NtQueryInformationJobObject = 278;
			
			
			const int NtQueryInformationPort = 279;
			
			
			const int NtQueryInformationResourceManager = 280;
			
			
			const int NtQueryInformationTransaction = 281;
			
			
			const int NtQueryInformationTransactionManager = 282;
			
			
			const int NtQueryInformationWorkerFactory = 283;
			
			
			const int NtQueryInstallUILanguage = 284;
			
			
			const int NtQueryIntervalProfile = 285;
			
			
			const int NtQueryIoCompletion = 286;
			
			
			const int NtQueryLicenseValue = 287;
			
			
			const int NtQueryMultipleValueKey = 288;
			
			
			const int NtQueryMutant = 289;
			
			
			const int NtQueryOpenSubKeys = 290;
			
			
			const int NtQueryOpenSubKeysEx = 291;
			
			
			const int NtQueryPortInformationProcess = 292;
			
			
			const int NtQueryQuotaInformationFile = 293;
			
			
			const int NtQuerySecurityAttributesToken = 294;
			
			
			const int NtQuerySecurityObject = 295;
			
			
			const int NtQuerySemaphore = 296;
			
			
			const int NtQuerySymbolicLinkObject = 297;
			
			
			const int NtQuerySystemEnvironmentValue = 298;
			
			
			const int NtQuerySystemEnvironmentValueEx = 299;
			
			
			const int NtQuerySystemInformationEx = 300;
			
			
			const int NtQueryTimerResolution = 301;
			
			
			const int NtQueueApcThreadEx = 302;
			
			
			const int NtRaiseException = 303;
			
			
			const int NtRaiseHardError = 304;
			
			
			const int NtReadOnlyEnlistment = 305;
			
			
			const int NtRecoverEnlistment = 306;
			
			
			const int NtRecoverResourceManager = 307;
			
			
			const int NtRecoverTransactionManager = 308;
			
			
			const int NtRegisterProtocolAddressInformation = 309;
			
			
			const int NtRegisterThreadTerminatePort = 310;
			
			
			const int NtReleaseKeyedEvent = 311;
			
			
			const int NtReleaseWorkerFactoryWorker = 312;
			
			
			const int NtRemoveIoCompletionEx = 313;
			
			
			const int NtRemoveProcessDebug = 314;
			
			
			const int NtRenameKey = 315;
			
			
			const int NtRenameTransactionManager = 316;
			
			
			const int NtReplaceKey = 317;
			
			
			const int NtReplacePartitionUnit = 318;
			
			
			const int NtReplyWaitReplyPort = 319;
			
			
			const int NtRequestPort = 320;
			
			
			const int NtResetEvent = 321;
			
			
			const int NtResetWriteWatch = 322;
			
			
			const int NtRestoreKey = 323;
			
			
			const int NtResumeProcess = 324;
			
			
			const int NtRollbackComplete = 325;
			
			
			const int NtRollbackEnlistment = 326;
			
			
			const int NtRollbackTransaction = 327;
			
			
			const int NtRollforwardTransactionManager = 328;
			
			
			const int NtSaveKey = 329;
			
			
			const int NtSaveKeyEx = 330;
			
			
			const int NtSaveMergedKeys = 331;
			
			
			const int NtSecureConnectPort = 332;
			
			
			const int NtSerializeBoot = 333;
			
			
			const int NtSetBootEntryOrder = 334;
			
			
			const int NtSetBootOptions = 335;
			
			
			const int NtSetContextThread = 336;
			
			
			const int NtSetDebugFilterState = 337;
			
			
			const int NtSetDefaultHardErrorPort = 338;
			
			
			const int NtSetDefaultLocale = 339;
			
			
			const int NtSetDefaultUILanguage = 340;
			
			
			const int NtSetDriverEntryOrder = 341;
			
			
			const int NtSetEaFile = 342;
			
			
			const int NtSetHighEventPair = 343;
			
			
			const int NtSetHighWaitLowEventPair = 344;
			
			
			const int NtSetInformationDebugObject = 345;
			
			
			const int NtSetInformationEnlistment = 346;
			
			
			const int NtSetInformationJobObject = 347;
			
			
			const int NtSetInformationKey = 348;
			
			
			const int NtSetInformationResourceManager = 349;
			
			
			const int NtSetInformationToken = 350;
			
			
			const int NtSetInformationTransaction = 351;
			
			
			const int NtSetInformationTransactionManager = 352;
			
			
			const int NtSetInformationWorkerFactory = 353;
			
			
			const int NtSetIntervalProfile = 354;
			
			
			const int NtSetIoCompletion = 355;
			
			
			const int NtSetIoCompletionEx = 356;
			
			
			const int NtSetLdtEntries = 357;
			
			
			const int NtSetLowEventPair = 358;
			
			
			const int NtSetLowWaitHighEventPair = 359;
			
			
			const int NtSetQuotaInformationFile = 360;
			
			
			const int NtSetSecurityObject = 361;
			
			
			const int NtSetSystemEnvironmentValue = 362;
			
			
			const int NtSetSystemEnvironmentValueEx = 363;
			
			
			const int NtSetSystemInformation = 364;
			
			
			const int NtSetSystemPowerState = 365;
			
			
			const int NtSetSystemTime = 366;
			
			
			const int NtSetThreadExecutionState = 367;
			
			
			const int NtSetTimerEx = 368;
			
			
			const int NtSetTimerResolution = 369;
			
			
			const int NtSetUuidSeed = 370;
			
			
			const int NtSetVolumeInformationFile = 371;
			
			
			const int NtShutdownSystem = 372;
			
			
			const int NtShutdownWorkerFactory = 373;
			
			
			const int NtSignalAndWaitForSingleObject = 374;
			
			
			const int NtSinglePhaseReject = 375;
			
			
			const int NtStartProfile = 376;
			
			
			const int NtStopProfile = 377;
			
			
			const int NtSuspendProcess = 378;
			
			
			const int NtSuspendThread = 379;
			
			
			const int NtSystemDebugControl = 380;
			
			
			const int NtTerminateJobObject = 381;
			
			
			const int NtTestAlert = 382;
			
			
			const int NtThawRegistry = 383;
			
			
			const int NtThawTransactions = 384;
			
			
			const int NtTraceControl = 385;
			
			
			const int NtTranslateFilePath = 386;
			
			
			const int NtUmsThreadYield = 387;
			
			
			const int NtUnloadDriver = 388;
			
			
			const int NtUnloadKey = 389;
			
			
			const int NtUnloadKey2 = 390;
			
			
			const int NtUnloadKeyEx = 391;
			
			
			const int NtUnlockFile = 392;
			
			
			const int NtUnlockVirtualMemory = 393;
			
			
			const int NtVdmControl = 394;
			
			
			const int NtWaitForDebugEvent = 395;
			
			
			const int NtWaitForKeyedEvent = 396;
			
			
			const int NtWaitForWorkViaWorkerFactory = 397;
			
			
			const int NtWaitHighEventPair = 398;
			
			
			const int NtWaitLowEventPair = 399;
			
			
			const int NtWorkerFactoryWorkerReady = 400;
			
		}
	}
	// freebsd:x64
	namespace freebsd {
		namespace x64 {
			
			const int nosys = 0;
			
			
			const int sys_exit = 1;
			
			
			const int fork = 2;
			
			
			const int read = 3;
			
			
			const int write = 4;
			
			
			const int open = 5;
			
			
			const int close = 6;
			
			
			const int wait4 = 7;
			
			
			const int creat = 8;
			
			
			const int link = 9;
			
			
			const int unlink = 10;
			
			
			const int chdir = 12;
			
			
			const int fchdir = 13;
			
			
			const int mknod = 14;
			
			
			const int chmod = 15;
			
			
			const int chown = 16;
			
			
			const int getfsstat = 18;
			
			
			const int getpid = 20;
			
			
			const int mount = 21;
			
			
			const int unmount = 22;
			
			
			const int setuid = 23;
			
			
			const int getuid = 24;
			
			
			const int geteuid = 25;
			
			
			const int ptrace = 26;
			
			
			const int recvmsg = 27;
			
			
			const int sendmsg = 28;
			
			
			const int recvfrom = 29;
			
			
			const int accept = 30;
			
			
			const int getpeername = 31;
			
			
			const int getsockname = 32;
			
			
			const int access = 33;
			
			
			const int chflags = 34;
			
			
			const int fchflags = 35;
			
			
			const int sync = 36;
			
			
			const int kill = 37;
			
			
			const int stat = 38;
			
			
			const int getppid = 39;
			
			
			const int lstat = 40;
			
			
			const int dup = 41;
			
			
			const int pipe = 42;
			
			
			const int getegid = 43;
			
			
			const int profil = 44;
			
			
			const int ktrace = 45;
			
			
			const int sigaction = 46;
			
			
			const int getgid = 47;
			
			
			const int getlogin = 49;
			
			
			const int setlogin = 50;
			
			
			const int acct = 51;
			
			
			const int sigaltstack = 53;
			
			
			const int ioctl = 54;
			
			
			const int reboot = 55;
			
			
			const int revoke = 56;
			
			
			const int symlink = 57;
			
			
			const int readlink = 58;
			
			
			const int execve = 59;
			
			
			const int umask = 60;
			
			
			const int chroot = 61;
			
			
			const int fstat = 62;
			
			
			const int getkerninfo = 63;
			
			
			const int getpagesize = 64;
			
			
			const int msync = 65;
			
			
			const int vfork = 66;
			
			
			const int sbrk = 69;
			
			
			const int sstk = 70;
			
			
			const int vadvise = 72;
			
			
			const int munmap = 73;
			
			
			const int mprotect = 74;
			
			
			const int madvise = 75;
			
			
			const int mincore = 78;
			
			
			const int getgroups = 79;
			
			
			const int setgroups = 80;
			
			
			const int getpgrp = 81;
			
			
			const int setpgid = 82;
			
			
			const int setitimer = 83;
			
			
			const int wait = 84;
			
			
			const int swapon = 85;
			
			
			const int getitimer = 86;
			
			
			const int gethostname = 87;
			
			
			const int sethostname = 88;
			
			
			const int getdtablesize = 89;
			
			
			const int dup2 = 90;
			
			
			const int fcntl = 92;
			
			
			const int select = 93;
			
			
			const int fsync = 95;
			
			
			const int setpriority = 96;
			
			
			const int socket = 97;
			
			
			const int connect = 98;
			
			
			const int getpriority = 100;
			
			
			const int send = 101;
			
			
			const int recv = 102;
			
			
			const int sigreturn = 103;
			
			
			const int bind = 104;
			
			
			const int setsockopt = 105;
			
			
			const int listen = 106;
			
			
			const int sigvec = 108;
			
			
			const int sigblock = 109;
			
			
			const int sigsetmask = 110;
			
			
			const int sigsuspend = 111;
			
			
			const int sigstack = 112;
			
			
			const int gettimeofday = 116;
			
			
			const int getrusage = 117;
			
			
			const int getsockopt = 118;
			
			
			const int readv = 120;
			
			
			const int writev = 121;
			
			
			const int settimeofday = 122;
			
			
			const int fchown = 123;
			
			
			const int fchmod = 124;
			
			
			const int setreuid = 126;
			
			
			const int setregid = 127;
			
			
			const int rename = 128;
			
			
			const int flock = 131;
			
			
			const int mkfifo = 132;
			
			
			const int sendto = 133;
			
			
			const int shutdown = 134;
			
			
			const int socketpair = 135;
			
			
			const int mkdir = 136;
			
			
			const int rmdir = 137;
			
			
			const int utimes = 138;
			
			
			const int adjtime = 140;
			
			
			const int gethostid = 142;
			
			
			const int sethostid = 143;
			
			
			const int getrlimit = 144;
			
			
			const int setrlimit = 145;
			
			
			const int killpg = 146;
			
			
			const int setsid = 147;
			
			
			const int quotactl = 148;
			
			
			const int quota = 149;
			
			
			const int getsockname = 150;
			
			
			const int nlm_syscall = 154;
			
			
			const int nfssvc = 155;
			
			
			const int getdirentries = 156;
			
			
			const int statfs = 157;
			
			
			const int fstatfs = 158;
			
			
			const int lgetfh = 160;
			
			
			const int getfh = 161;
			
			
			const int getdomainname = 162;
			
			
			const int setdomainname = 163;
			
			
			const int uname = 164;
			
			
			const int sysarch = 165;
			
			
			const int rtprio = 166;
			
			
			const int semsys = 169;
			
			
			const int setfib = 175;
			
			
			const int ntp_adjtime = 176;
			
			
			const int setgid = 181;
			
			
			const int setegid = 182;
			
			
			const int seteuid = 183;
			
			
			const int pathconf = 191;
			
			
			const int fpathconf = 192;
			
			
			const int __sysctl = 202;
			
			
			const int mlock = 203;
			
			
			const int munlock = 204;
			
			
			const int undelete = 205;
			
			
			const int futimes = 206;
			
			
			const int getpgid = 207;
			
			
			const int poll = 209;
			
			
			const int __semctl = 220;
			
			
			const int semget = 221;
			
			
			const int semop = 222;
			
			
			const int msgctl = 224;
			
			
			const int msgget = 225;
			
			
			const int msgsnd = 226;
			
			
			const int msgrcv = 227;
			
			
			const int shmctl = 229;
			
			
			const int shmdt = 230;
			
			
			const int shmget = 231;
			
			
			const int clock_gettime = 232;
			
			
			const int clock_settime = 233;
			
			
			const int clock_getres = 234;
			
			
			const int ktimer_create = 235;
			
			
			const int ktimer_delete = 236;
			
			
			const int ktimer_settime = 237;
			
			
			const int ktimer_gettime = 238;
			
			
			const int ktimer_getoverrun = 239;
			
			
			const int nanosleep = 240;
			
			
			const int ffclock_getcounter = 241;
			
			
			const int ffclock_setestimate = 242;
			
			
			const int ffclock_getestimate = 243;
			
			
			const int clock_nanosleep = 244;
			
			
			const int clock_getcpuclockid2 = 247;
			
			
			const int ntp_gettime = 248;
			
			
			const int minherit = 250;
			
			
			const int rfork = 251;
			
			
			const int issetugid = 253;
			
			
			const int lchown = 254;
			
			
			const int aio_read = 255;
			
			
			const int aio_write = 256;
			
			
			const int lio_listio = 257;
			
			
			const int getdents = 272;
			
			
			const int lchmod = 274;
			
			
			const int lutimes = 276;
			
			
			const int nstat = 278;
			
			
			const int nfstat = 279;
			
			
			const int nlstat = 280;
			
			
			const int preadv = 289;
			
			
			const int pwritev = 290;
			
			
			const int fhstatfs = 297;
			
			
			const int fhopen = 298;
			
			
			const int fhstat = 299;
			
			
			const int modnext = 300;
			
			
			const int modstat = 301;
			
			
			const int modfnext = 302;
			
			
			const int modfind = 303;
			
			
			const int kldload = 304;
			
			
			const int kldunload = 305;
			
			
			const int kldfind = 306;
			
			
			const int kldnext = 307;
			
			
			const int kldstat = 308;
			
			
			const int kldfirstmod = 309;
			
			
			const int getsid = 310;
			
			
			const int setresuid = 311;
			
			
			const int setresgid = 312;
			
			
			const int aio_return = 314;
			
			
			const int aio_suspend = 315;
			
			
			const int aio_cancel = 316;
			
			
			const int aio_error = 317;
			
			
			const int yield = 321;
			
			
			const int mlockall = 324;
			
			
			const int __getcwd = 325;
			
			
			const int sched_setparam = 327;
			
			
			const int sched_getparam = 328;
			
			
			const int sched_setscheduler = 329;
			
			
			const int sched_getscheduler = 330;
			
			
			const int sched_yield = 331;
			
			
			const int sched_get_priority_max = 332;
			
			
			const int sched_get_priority_min = 333;
			
			
			const int sched_rr_get_interval = 334;
			
			
			const int utrace = 335;
			
			
			const int sendfile = 336;
			
			
			const int kldsym = 337;
			
			
			const int jail = 338;
			
			
			const int nnpfs_syscall = 339;
			
			
			const int sigprocmask = 340;
			
			
			const int sigsuspend = 341;
			
			
			const int sigaction = 342;
			
			
			const int sigpending = 343;
			
			
			const int sigtimedwait = 345;
			
			
			const int sigwaitinfo = 346;
			
			
			const int __acl_get_file = 347;
			
			
			const int __acl_set_file = 348;
			
			
			const int __acl_get_fd = 349;
			
			
			const int __acl_set_fd = 350;
			
			
			const int __acl_delete_file = 351;
			
			
			const int __acl_delete_fd = 352;
			
			
			const int __acl_aclcheck_file = 353;
			
			
			const int __acl_aclcheck_fd = 354;
			
			
			const int extattrctl = 355;
			
			
			const int extattr_set_file = 356;
			
			
			const int extattr_get_file = 357;
			
			
			const int extattr_delete_file = 358;
			
			
			const int aio_waitcomplete = 359;
			
			
			const int getresuid = 360;
			
			
			const int getresgid = 361;
			
			
			const int kqueue = 362;
			
			
			const int kevent = 363;
			
			
			const int extattr_set_fd = 371;
			
			
			const int extattr_get_fd = 372;
			
			
			const int extattr_delete_fd = 373;
			
			
			const int __setugid = 374;
			
			
			const int eaccess = 376;
			
			
			const int afs3_syscall = 377;
			
			
			const int nmount = 378;
			
			
			const int __mac_get_proc = 384;
			
			
			const int __mac_set_proc = 385;
			
			
			const int __mac_get_fd = 386;
			
			
			const int __mac_get_file = 387;
			
			
			const int __mac_set_fd = 388;
			
			
			const int __mac_set_file = 389;
			
			
			const int kenv = 390;
			
			
			const int lchflags = 391;
			
			
			const int uuidgen = 392;
			
			
			const int mac_syscall = 394;
			
			
			const int ksem_close = 400;
			
			
			const int ksem_post = 401;
			
			
			const int ksem_wait = 402;
			
			
			const int ksem_trywait = 403;
			
			
			const int ksem_init = 404;
			
			
			const int ksem_open = 405;
			
			
			const int ksem_unlink = 406;
			
			
			const int ksem_getvalue = 407;
			
			
			const int ksem_destroy = 408;
			
			
			const int __mac_get_pid = 409;
			
			
			const int __mac_get_link = 410;
			
			
			const int __mac_set_link = 411;
			
			
			const int extattr_set_link = 412;
			
			
			const int extattr_get_link = 413;
			
			
			const int extattr_delete_link = 414;
			
			
			const int __mac_execve = 415;
			
			
			const int getcontext = 421;
			
			
			const int setcontext = 422;
			
			
			const int swapcontext = 423;
			
			
			const int swapoff = 424;
			
			
			const int __acl_get_link = 425;
			
			
			const int __acl_set_link = 426;
			
			
			const int __acl_delete_link = 427;
			
			
			const int __acl_aclcheck_link = 428;
			
			
			const int sigwait = 429;
			
			
			const int thr_create = 430;
			
			
			const int thr_exit = 431;
			
			
			const int thr_self = 432;
			
			
			const int thr_kill = 433;
			
			
			const int jail_attach = 436;
			
			
			const int extattr_list_fd = 437;
			
			
			const int extattr_list_file = 438;
			
			
			const int extattr_list_link = 439;
			
			
			const int ksem_timedwait = 441;
			
			
			const int thr_suspend = 442;
			
			
			const int thr_wake = 443;
			
			
			const int kldunloadf = 444;
			
			
			const int audit = 445;
			
			
			const int auditon = 446;
			
			
			const int getauid = 447;
			
			
			const int setauid = 448;
			
			
			const int getaudit = 449;
			
			
			const int setaudit = 450;
			
			
			const int getaudit_addr = 451;
			
			
			const int setaudit_addr = 452;
			
			
			const int auditctl = 453;
			
			
			const int _umtx_op = 454;
			
			
			const int thr_new = 455;
			
			
			const int sigqueue = 456;
			
			
			const int kmq_open = 457;
			
			
			const int kmq_setattr = 458;
			
			
			const int kmq_timedreceive = 459;
			
			
			const int kmq_timedsend = 460;
			
			
			const int kmq_notify = 461;
			
			
			const int kmq_unlink = 462;
			
			
			const int abort2 = 463;
			
			
			const int thr_set_name = 464;
			
			
			const int aio_fsync = 465;
			
			
			const int rtprio_thread = 466;
			
			
			const int sctp_peeloff = 471;
			
			
			const int sctp_generic_sendmsg = 472;
			
			
			const int sctp_generic_sendmsg_iov = 473;
			
			
			const int sctp_generic_recvmsg = 474;
			
			
			const int pread = 475;
			
			
			const int pwrite = 476;
			
			
			const int lseek = 478;
			
			
			const int truncate = 479;
			
			
			const int ftruncate = 480;
			
			
			const int thr_kill2 = 481;
			
			
			const int shm_open = 482;
			
			
			const int shm_unlink = 483;
			
			
			const int cpuset = 484;
			
			
			const int cpuset_setid = 485;
			
			
			const int cpuset_getid = 486;
			
			
			const int cpuset_getaffinity = 487;
			
			
			const int cpuset_setaffinity = 488;
			
			
			const int faccessat = 489;
			
			
			const int fchmodat = 490;
			
			
			const int fchownat = 491;
			
			
			const int fexecve = 492;
			
			
			const int fstatat = 493;
			
			
			const int futimesat = 494;
			
			
			const int linkat = 495;
			
			
			const int mkdirat = 496;
			
			
			const int mkfifoat = 497;
			
			
			const int mknodat = 498;
			
			
			const int openat = 499;
			
			
			const int readlinkat = 500;
			
			
			const int renameat = 501;
			
			
			const int symlinkat = 502;
			
			
			const int unlinkat = 503;
			
			
			const int posix_openpt = 504;
			
			
			const int gssd_syscall = 505;
			
			
			const int jail_get = 506;
			
			
			const int jail_set = 507;
			
			
			const int jail_remove = 508;
			
			
			const int closefrom = 509;
			
			
			const int lpathconf = 513;
			
			
			const int __cap_rights_get = 515;
			
			
			const int cap_enter = 516;
			
			
			const int cap_getmode = 517;
			
			
			const int pdfork = 518;
			
			
			const int pdkill = 519;
			
			
			const int pdgetpid = 520;
			
			
			const int pselect = 522;
			
			
			const int getloginclass = 523;
			
			
			const int setloginclass = 524;
			
			
			const int rctl_get_racct = 525;
			
			
			const int rctl_get_rules = 526;
			
			
			const int rctl_get_limits = 527;
			
			
			const int rctl_add_rule = 528;
			
			
			const int rctl_remove_rule = 529;
			
			
			const int posix_fallocate = 530;
			
			
			const int posix_fadvise = 531;
			
			
			const int wait6 = 532;
			
			
			const int cap_rights_limit = 533;
			
			
			const int cap_ioctls_limit = 534;
			
			
			const int cap_ioctls_get = 535;
			
			
			const int cap_fcntls_limit = 536;
			
			
			const int cap_fcntls_get = 537;
			
			
			const int bindat = 538;
			
			
			const int connectat = 539;
			
			
			const int chflagsat = 540;
			
			
			const int accept4 = 541;
			
			
			const int pipe2 = 542;
			
			
			const int aio_mlock = 543;
			
			
			const int procctl = 544;
			
			
			const int ppoll = 545;
			
			
			const int futimens = 546;
			
			
			const int utimensat = 547;
			
			
			const int fdatasync = 550;
			
			
			const int mknodat = 559;
			
			
			const int cpuset_getdomain = 561;
			
			
			const int cpuset_setdomain = 562;
			
			
			const int getrandom = 563;
			
			
			const int getfhat = 564;
			
			
			const int fhlink = 565;
			
			
			const int fhlinkat = 566;
			
			
			const int fhreadlink = 567;
			
			
			const int funlinkat = 568;
			
			
			const int copy_file_range = 569;
			
			
			const int __sysctlbyname = 570;
			
			
			const int shm_open2 = 571;
			
			
			const int shm_rename = 572;
			
			
			const int sigfastblock = 573;
			
			
			const int __realpathat = 574;
			
			
			const int close_range = 575;
			
			
			const int rpctls_syscall = 576;
			
		}
	}
}
#endif

/* vim: set tabstop=4 softtabstop=4 noexpandtab ft=cpp: */