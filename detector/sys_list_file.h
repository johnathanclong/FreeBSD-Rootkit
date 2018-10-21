typedef struct {
  char callName[50];
  int callNumber;
} callStruct;

callStruct syscall_list[471] = {{"nosys", 0},
    {"sys_sys_exit", 1},
    {"sys_fork", 2},
    {"sys_read", 3},
    {"sys_write", 4},
    {"sys_open", 5},
    {"sys_close", 6},
    {"sys_wait4", 7},
    {"sys_link", 9},
    {"sys_unlink", 10},
    {"sys_chdir", 12},
    {"sys_fchdir", 13},
    {"sys_mknod", 14},
    {"sys_chmod", 15},
    {"sys_chown", 16},
    {"sys_obreak", 17},
    {"sys_getpid", 20},
    {"sys_mount", 21},
    {"sys_unmount", 22},
    {"sys_setuid", 23},
    {"sys_getuid", 24},
    {"sys_geteuid", 25},
    {"sys_ptrace", 26},
    {"sys_recvmsg", 27},
    {"sys_sendmsg", 28},
    {"sys_recvfrom", 29},
    {"sys_accept", 30},
    {"sys_getpeername", 31},
    {"sys_getsockname", 32},
    {"sys_access", 33},
    {"sys_chflags", 34},
    {"sys_fchflags", 35},
    {"sys_sync", 36},
    {"sys_kill", 37},
    {"sys_getppid", 39},
    {"sys_dup", 41},
    {"sys_getegid", 43},
    {"sys_profil", 44},
    {"sys_ktrace", 45},
    {"sys_getgid", 47},
    {"sys_getlogin", 49},
    {"sys_setlogin", 50},
    {"sys_acct", 51},
    {"sys_sigaltstack", 53},
    {"sys_ioctl", 54},
    {"sys_reboot", 55},
    {"sys_revoke", 56},
    {"sys_symlink", 57},
    {"sys_readlink", 58},
    {"sys_execve", 59},
    {"sys_umask", 60},
    {"sys_chroot", 61},
    {"sys_msync", 65},
    {"sys_vfork", 66},
    {"sys_sbrk", 69},
    {"sys_sstk", 70},
    {"sys_ovadvise", 72},
    {"sys_munmap", 73},
    {"sys_mprotect", 74},
    {"sys_madvise", 75},
    {"sys_mincore", 78},
    {"sys_getgroups", 79},
    {"sys_setgroups", 80},
    {"sys_getpgrp", 81},
    {"sys_setpgid", 82},
    {"sys_setitimer", 83},
    {"sys_swapon", 85},
    {"sys_getitimer", 86},
    {"sys_getdtablesize", 89},
    {"sys_dup2", 90},
    {"sys_fcntl", 92},
    {"sys_select", 93},
    {"sys_fsync", 95},
    {"sys_setpriority", 96},
    {"sys_socket", 97},
    {"sys_connect", 98},
    {"sys_getpriority", 100},
    {"sys_bind", 104},
    {"sys_setsockopt", 105},
    {"sys_listen", 106},
    {"sys_gettimeofday", 116},
    {"sys_getrusage", 117},
    {"sys_getsockopt", 118},
    {"sys_readv", 120},
    {"sys_writev", 121},
    {"sys_settimeofday", 122},
    {"sys_fchown", 123},
    {"sys_fchmod", 124},
    {"sys_setreuid", 126},
    {"sys_setregid", 127},
    {"sys_rename", 128},
    {"sys_flock", 131},
    {"sys_mkfifo", 132},
    {"sys_sendto", 133},
    {"sys_shutdown", 134},
    {"sys_socketpair", 135},
    {"sys_mkdir", 136},
    {"sys_rmdir", 137},
    {"sys_utimes", 138},
    {"sys_adjtime", 140},
    {"sys_setsid", 147},
    {"sys_quotactl", 148},
    {"sys_nlm_syscall", 154},
    {"sys_nfssvc", 155},
    {"sys_lgetfh", 160},
    {"sys_getfh", 161},
    {"sysarch", 165},
    {"sys_rtprio", 166},
    {"sys_semsys", 169},
    {"sys_msgsys", 170},
    {"sys_shmsys", 171},
    {"sys_setfib", 175},
    {"sys_ntp_adjtime", 176},
    {"sys_setgid", 181},
    {"sys_setegid", 182},
    {"sys_seteuid", 183},
    {"sys_stat", 188},
    {"sys_fstat", 189},
    {"sys_lstat", 190},
    {"sys_pathconf", 191},
    {"sys_fpathconf", 192},
    {"sys_getrlimit", 194},
    {"sys_setrlimit", 195},
    {"sys_getdirentries", 196},
    {"sys___sysctl", 202},
    {"sys_mlock", 203},
    {"sys_munlock", 204},
    {"sys_undelete", 205},
    {"sys_futimes", 206},
    {"sys_getpgid", 207},
    {"sys_poll", 209},
    {"sys_semget", 221},
    {"sys_semop", 222},
    {"sys_msgget", 225},
    {"sys_msgsnd", 226},
    {"sys_msgrcv", 227},
    {"sys_shmat", 228},
    {"sys_shmdt", 230},
    {"sys_shmget", 231},
    {"sys_clock_gettime", 232},
    {"sys_clock_settime", 233},
    {"sys_clock_getres", 234},
    {"sys_ktimer_create", 235},
    {"sys_ktimer_delete", 236},
    {"sys_ktimer_settime", 237},
    {"sys_ktimer_gettime", 238},
    {"sys_ktimer_getoverrun", 239},
    {"sys_nanosleep", 240},
    {"sys_ffclock_getcounter", 241},
    {"sys_ffclock_setestimate", 242},
    {"sys_ffclock_getestimate", 243},
    {"sys_clock_nanosleep", 244},
    {"sys_clock_getcpuclockid2", 247},
    {"sys_ntp_gettime", 248},
    {"sys_minherit", 250},
    {"sys_rfork", 251},
    {"sys_openbsd_poll", 252},
    {"sys_issetugid", 253},
    {"sys_lchown", 254},
    {"sys_aio_read", 255},
    {"sys_aio_write", 256},
    {"sys_lio_listio", 257},
    {"sys_getdents", 272},
    {"sys_lchmod", 274},
    {"sys_lchown", 275},
    {"sys_lutimes", 276},
    {"sys_msync", 277},
    {"sys_nstat", 278},
    {"sys_nfstat", 279},
    {"sys_nlstat", 280},
    {"sys_preadv", 289},
    {"sys_pwritev", 290},
    {"sys_fhopen", 298},
    {"sys_fhstat", 299},
    {"sys_modnext", 300},
    {"sys_modstat", 301},
    {"sys_modfnext", 302},
    {"sys_modfind", 303},
    {"sys_kldload", 304},
    {"sys_kldunload", 305},
    {"sys_kldfind", 306},
    {"sys_kldnext", 307},
    {"sys_kldstat", 308},
    {"sys_kldfirstmod", 309},
    {"sys_getsid", 310},
    {"sys_setresuid", 311},
    {"sys_setresgid", 312},
    {"sys_aio_return", 314},
    {"sys_aio_suspend", 315},
    {"sys_aio_cancel", 316},
    {"sys_aio_error", 317},
    {"sys_yield", 321},
    {"sys_mlockall", 324},
    {"sys_munlockall", 325},
    {"sys___getcwd", 326},
    {"sys_sched_setparam", 327},
    {"sys_sched_getparam", 328},
    {"sys_sched_setscheduler", 329},
    {"sys_sched_getscheduler", 330},
    {"sys_sched_yield", 331},
    {"sys_sched_get_priority_max", 332},
    {"sys_sched_get_priority_min", 333},
    {"sys_sched_rr_get_interval", 334},
    {"sys_utrace", 335},
    {"sys_kldsym", 337},
    {"sys_jail", 338},
    {"lkmressys", 339},
    {"sys_sigprocmask", 340},
    {"sys_sigsuspend", 341},
    {"sys_sigpending", 343},
    {"sys_sigtimedwait", 345},
    {"sys_sigwaitinfo", 346},
    {"sys___acl_get_file", 347},
    {"sys___acl_set_file", 348},
    {"sys___acl_get_fd", 349},
    {"sys___acl_set_fd", 350},
    {"sys___acl_delete_file", 351},
    {"sys___acl_delete_fd", 352},
    {"sys___acl_aclcheck_file", 353},
    {"sys___acl_aclcheck_fd", 354},
    {"sys_extattrctl", 355},
    {"sys_extattr_set_file", 356},
    {"sys_extattr_get_file", 357},
    {"sys_extattr_delete_file", 358},
    {"sys_aio_waitcomplete", 359},
    {"sys_getresuid", 360},
    {"sys_getresgid", 361},
    {"sys_kqueue", 362},
    {"sys_kevent", 363},
    {"sys_extattr_set_fd", 371},
    {"sys_extattr_get_fd", 372},
    {"sys_extattr_delete_fd", 373},
    {"sys___setugid", 374},
    {"sys_eaccess", 376},
    {"lkmressys", 377},
    {"sys_nmount", 378},
    {"sys___mac_get_proc", 384},
    {"sys___mac_set_proc", 385},
    {"sys___mac_get_fd", 386},
    {"sys___mac_get_file", 387},
    {"sys___mac_set_fd", 388},
    {"sys___mac_set_file", 389},
    {"sys_kenv", 390},
    {"sys_lchflags", 391},
    {"sys_uuidgen", 392},
    {"sys_sendfile", 393},
    {"sys_mac_syscall", 394},
    {"sys_getfsstat", 395},
    {"sys_statfs", 396},
    {"sys_fstatfs", 397},
    {"sys_fhstatfs", 398},
    {"lkmressys", 400},
    {"lkmressys", 401},
    {"lkmressys", 402},
    {"lkmressys", 403},
    {"lkmressys", 404},
    {"lkmressys", 405},
    {"lkmressys", 406},
    {"lkmressys", 407},
    {"lkmressys", 408},
    {"sys___mac_get_pid", 409},
    {"sys___mac_get_link", 410},
    {"sys___mac_set_link", 411},
    {"sys_extattr_set_link", 412},
    {"sys_extattr_get_link", 413},
    {"sys_extattr_delete_link", 414},
    {"sys___mac_execve", 415},
    {"sys_sigaction", 416},
    {"sys_sigreturn", 417},
    {"sys_getcontext", 421},
    {"sys_setcontext", 422},
    {"sys_swapcontext", 423},
    {"sys_swapoff", 424},
    {"sys___acl_get_link", 425},
    {"sys___acl_set_link", 426},
    {"sys___acl_delete_link", 427},
    {"sys___acl_aclcheck_link", 428},
    {"sys_sigwait", 429},
    {"sys_thr_create", 430},
    {"sys_thr_exit", 431},
    {"sys_thr_self", 432},
    {"sys_thr_kill", 433},
    {"sys_jail_attach", 436},
    {"sys_extattr_list_fd", 437},
    {"sys_extattr_list_file", 438},
    {"sys_extattr_list_link", 439},
    {"lkmressys", 441},
    {"sys_thr_suspend", 442},
    {"sys_thr_wake", 443},
    {"sys_kldunloadf", 444},
    {"sys_audit", 445},
    {"sys_auditon", 446},
    {"sys_getauid", 447},
    {"sys_setauid", 448},
    {"sys_getaudit", 449},
    {"sys_setaudit", 450},
    {"sys_getaudit_addr", 451},
    {"sys_setaudit_addr", 452},
    {"sys_auditctl", 453},
    {"sys__umtx_op", 454},
    {"sys_thr_new", 455},
    {"sys_sigqueue", 456},
    {"lkmressys", 457},
    {"lkmressys", 458},
    {"lkmressys", 459},
    {"lkmressys", 460},
    {"lkmressys", 461},
    {"lkmressys", 462},
    {"sys_abort2", 463},
    {"sys_thr_set_name", 464},
    {"sys_aio_fsync", 465},
    {"sys_rtprio_thread", 466},
    {"sys_sctp_peeloff", 471},
    {"sys_sctp_generic_sendmsg", 472},
    {"sys_sctp_generic_sendmsg_iov", 473},
    {"sys_sctp_generic_recvmsg", 474},
    {"sys_pread", 475},
    {"sys_pwrite", 476},
    {"sys_mmap", 477},
    {"sys_lseek", 478},
    {"sys_truncate", 479},
    {"sys_ftruncate", 480},
    {"sys_thr_kill2", 481},
    {"sys_shm_open", 482},
    {"sys_shm_unlink", 483},
    {"sys_cpuset", 484},
    {"sys_cpuset_setid", 485},
    {"sys_cpuset_getid", 486},
    {"sys_cpuset_getaffinity", 487},
    {"sys_cpuset_setaffinity", 488},
    {"sys_faccessat", 489},
    {"sys_fchmodat", 490},
    {"sys_fchownat", 491},
    {"sys_fexecve", 492},
    {"sys_fstatat", 493},
    {"sys_futimesat", 494},
    {"sys_linkat", 495},
    {"sys_mkdirat", 496},
    {"sys_mkfifoat", 497},
    {"sys_mknodat", 498},
    {"sys_openat", 499},
    {"sys_readlinkat", 500},
    {"sys_renameat", 501},
    {"sys_symlinkat", 502},
    {"sys_unlinkat", 503},
    {"sys_posix_openpt", 504},
    {"lkmressys", 505},
    {"sys_jail_get", 506},
    {"sys_jail_set", 507},
    {"sys_jail_remove", 508},
    {"sys_closefrom", 509},
    {"sys___semctl", 510},
    {"sys_msgctl", 511},
    {"sys_shmctl", 512},
    {"sys_lpathconf", 513},
    {"sys___cap_rights_get", 515},
    {"sys_cap_enter", 516},
    {"sys_cap_getmode", 517},
    {"sys_pdfork", 518},
    {"sys_pdkill", 519},
    {"sys_pdgetpid", 520},
    {"sys_pselect", 522},
    {"sys_getloginclass", 523},
    {"sys_setloginclass", 524},
    {"sys_rctl_get_racct", 525},
    {"sys_rctl_get_rules", 526},
    {"sys_rctl_get_limits", 527},
    {"sys_rctl_add_rule", 528},
    {"sys_rctl_remove_rule", 529},
    {"sys_posix_fallocate", 530},
    {"sys_posix_fadvise", 531},
    {"sys_wait6", 532},
    {"sys_cap_rights_limit", 533},
    {"sys_cap_ioctls_limit", 534},
    {"sys_cap_ioctls_get", 535},
    {"sys_cap_fcntls_limit", 536},
    {"sys_cap_fcntls_get", 537},
    {"sys_bindat", 538},
    {"sys_connectat", 539},
    {"sys_chflagsat", 540},
    {"sys_accept4", 541},
    {"sys_pipe2", 542},
    {"sys_aio_mlock", 543},
    {"sys_procctl", 544},
    {"sys_ppoll", 545},
    {"sys_futimens", 546},
    {"sys_utimensat", 547},
    {"sys_numa_getaffinity", 548},
    {"sys_numa_setaffinity", 549},
    {"sys_fdatasync", 550}};